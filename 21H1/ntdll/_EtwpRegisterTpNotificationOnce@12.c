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

LOGICAL __stdcall EtwpRegisterTpNotificationOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  ULONG ReturnLength; // [esp+4h] [ebp-10h] BYREF
  HANDLE InputBuffer; // [esp+8h] [ebp-Ch] BYREF
  PTP_WAIT WaitReturn; // [esp+Ch] [ebp-8h] BYREF
  HANDLE EventHandle; // [esp+10h] [ebp-4h] BYREF

  WaitReturn = 0;
  EventHandle = 0;
  if ( NtCreateEvent(&EventHandle, 0x1F0003u, 0, SynchronizationEvent, 0) >= 0 )
  {
    if ( TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)EtwpNotificationThread, EventHandle, 0) >= 0 )
    {
      TpSetWaitEx(WaitReturn, EventHandle, 0, 0);
      InputBuffer = EventHandle;
      if ( ZwTraceControl(EtwAddNotificationEvent, &InputBuffer, 4u, 0, 0, &ReturnLength) >= 0 )
        return 1;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return 0;
}
