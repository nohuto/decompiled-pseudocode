/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x18007DA60
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseWait @ 0x18000C270 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwCreateEvent @ 0x18009D9B0 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x1800A0900 (NtTraceControl.c)
 */

__int64 EtwpRegisterTpNotificationOnce()
{
  char v1; // [rsp+20h] [rbp-30h]
  _BYTE v2[8]; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h] BYREF
  int v5; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v4, (__int64)EtwpNotificationThread, (int)Handle, 0LL) >= 0 )
    {
      TpSetWaitEx(v4, (__int64)Handle, 0LL, 0LL);
      v5 = (int)Handle;
      if ( (int)NtTraceControl(27LL, &v5, 4LL, 0LL, 0, v2) >= 0 )
        return 1LL;
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}
