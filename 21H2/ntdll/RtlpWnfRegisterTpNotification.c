/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x18007D484
 * Callers:
 *     RtlpInitializeWnf @ 0x18007D3B0 (RtlpInitializeWnf.c)
 * Callees:
 *     TpReleaseWait @ 0x18000C270 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwCreateEvent @ 0x18009DF00 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A0C90 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)RtlpWnfNotificationThread, Context, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Context);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(WaitReturn, Context, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( Context )
    NtClose(Context);
  return (unsigned int)v0;
}
