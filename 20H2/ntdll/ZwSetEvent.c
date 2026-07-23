/*
 * XREFs of ZwSetEvent @ 0x18009D270
 * Callers:
 *     RtlpTpWaitRundown @ 0x180009AA8 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerRundown @ 0x180009B48 (RtlpTpTimerRundown.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     EtwpSwitchBuffer @ 0x180050174 (EtwpSwitchBuffer.c)
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     EtwpLogger @ 0x180055030 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180058568 (EtwpSynchronizeWithLogger.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 *     LdrpProcessInitializationComplete @ 0x180080940 (LdrpProcessInitializationComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x180084B94 (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180085670 (RtlpWnfMetaCallbackProc.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E95B0 (RtlpUnWaitCriticalSection.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800FEB38 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1801027C0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
