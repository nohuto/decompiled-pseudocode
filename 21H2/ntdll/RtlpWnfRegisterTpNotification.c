/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x18007D484
 * Callers:
 *     RtlpInitializeWnf @ 0x18007D3B0 (RtlpInitializeWnf.c)
 * Callees:
 *     TpReleaseWait @ 0x18000C270 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwCreateEvent @ 0x18009DF40 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A0CD0 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v4, (__int64)RtlpWnfNotificationThread, (int)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v4, (__int64)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
