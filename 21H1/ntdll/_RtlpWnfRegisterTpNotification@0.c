/*
 * XREFs of _RtlpWnfRegisterTpNotification@0 @ 0x4B2AE96C
 * Callers:
 *     _RtlpInitializeWnf@12 @ 0x4B2AE9E0 (_RtlpInitializeWnf@12.c)
 * Callees:
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _ZwSetWnfProcessNotificationEvent@4 @ 0x4B2F44B0 (_ZwSetWnfProcessNotificationEvent@4.c)
 */

int __stdcall RtlpWnfRegisterTpNotification()
{
  int v0; // esi
  int v2; // [esp+8h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  Handle = 0;
  v0 = NtCreateEvent(&Handle, 2031619, 0, 1, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v2, RtlpWnfNotificationThread, Handle, 0);
    if ( v0 >= 0 )
    {
      v0 = ZwSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v2, Handle, 0, 0);
        return v0;
      }
    }
    if ( v2 )
      TpReleaseWait(v2);
  }
  if ( Handle )
    NtClose(Handle);
  return v0;
}
