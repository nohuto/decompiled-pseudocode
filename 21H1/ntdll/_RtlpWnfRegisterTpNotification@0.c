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

NTSTATUS __stdcall RtlpWnfRegisterTpNotification()
{
  NTSTATUS v0; // esi
  PTP_WAIT WaitReturn; // [esp+8h] [ebp-8h] BYREF
  HANDLE EventHandle; // [esp+Ch] [ebp-4h] BYREF

  WaitReturn = 0;
  EventHandle = 0;
  v0 = NtCreateEvent(&EventHandle, 0x1F0003u, 0, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, RtlpWnfNotificationThread, EventHandle, 0);
    if ( v0 >= 0 )
    {
      v0 = ZwSetWnfProcessNotificationEvent(EventHandle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(WaitReturn, EventHandle, 0, 0);
        return v0;
      }
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return v0;
}
