/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14027DFDC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14027E6F8 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x1403564CC (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x1405A624C (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1405A8160 (EtwpReenableCompression.c)
 *     EtwpFlushActiveBuffers @ 0x14066B214 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406C8998 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406C96D4 (EtwpAddLogHeader.c)
 *     EtwpAdjustFreeBuffers @ 0x1406CA45C (EtwpAdjustFreeBuffers.c)
 *     EtwpInitLoggerContext @ 0x1406CB22C (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406CB93C (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406CBD94 (EtwpRealtimeSaveState.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1407B5F9C (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x140939B88 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x1404ED110 (HvlQueryStartedProcessors.c)
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
