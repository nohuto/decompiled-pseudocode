/*
 * XREFs of _EtwpRegisterTpNotificationOnce@12 @ 0x4B2B1C90
 * Callers:
 *     <none>
 * Callees:
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

int __stdcall EtwpRegisterTpNotificationOnce(int a1, int a2, int a3)
{
  _BYTE v4[4]; // [esp+4h] [ebp-10h] BYREF
  HANDLE v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  HANDLE Handle; // [esp+10h] [ebp-4h] BYREF

  v6 = 0;
  Handle = 0;
  if ( (int)NtCreateEvent(&Handle, 2031619, 0, 1, 0) >= 0 )
  {
    if ( (int)TpAllocWait(&v6, EtwpNotificationThread, Handle, 0) >= 0 )
    {
      TpSetWaitEx(v6, Handle, 0, 0);
      v5 = Handle;
      if ( (int)ZwTraceControl(27, &v5, 4, 0, 0, v4) >= 0 )
        return 1;
    }
    if ( v6 )
      TpReleaseWait(v6);
  }
  if ( Handle )
    NtClose(Handle);
  return 0;
}
