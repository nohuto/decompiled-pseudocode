/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140265E58
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140265D30 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x1402C7BAC (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x1405AB6F8 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1405AD6C0 (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x140642D70 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140643C10 (EtwpFlushActiveBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x1406B566C (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406C340C (EtwpRealtimeSaveState.c)
 *     EtwpInitLoggerContext @ 0x1406DD980 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406DF4A0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406E03E8 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1407C89FC (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x14093D188 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x1404F2520 (HvlQueryStartedProcessors.c)
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
