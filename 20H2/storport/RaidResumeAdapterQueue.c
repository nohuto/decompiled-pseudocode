/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C0013704
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002B5C0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F7CC (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C0030740 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C00325F0 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0038C50 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0039780 (StorPortPause.c)
 *     StorPortAdapterActiveCondition @ 0x1C0040010 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
