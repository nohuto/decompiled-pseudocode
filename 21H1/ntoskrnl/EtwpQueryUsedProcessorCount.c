/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14024124C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140241960 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x1403188D0 (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x1405A5B5C (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1405A7A70 (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1405F2538 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405F2E4C (EtwpFlushActiveBuffers.c)
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x14067ACA0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x14067C6E4 (EtwpAddLogHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406ED34C (EtwpRealtimeSaveState.c)
 *     EtwpFreeTraceBufferPool @ 0x14070423C (EtwpFreeTraceBufferPool.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1407B2E2C (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1409388E8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x1404ECAC0 (HvlQueryStartedProcessors.c)
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (int)HvlQueryStartedProcessors(&v3, 0LL) >= 0 )
    return v3;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
