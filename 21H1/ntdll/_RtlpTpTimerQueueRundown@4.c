/*
 * XREFs of _RtlpTpTimerQueueRundown@4 @ 0x4B2A8BFD
 * Callers:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

LOGICAL __thiscall RtlpTpTimerQueueRundown(HANDLE *BaseAddress)
{
  if ( BaseAddress[5] )
  {
    ZwAlertThreadByThreadId(BaseAddress[5]);
  }
  else if ( BaseAddress[2] )
  {
    NtSetEvent(BaseAddress[2], 0);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
