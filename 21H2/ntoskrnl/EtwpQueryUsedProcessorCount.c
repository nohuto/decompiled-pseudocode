/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140253DF8
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x140246400 (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140253CD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAddLastDroppedEvent @ 0x1405AB928 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1405AD8F0 (EtwpReenableCompression.c)
 *     EtwpFreeTraceBufferPool @ 0x140614B84 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x140622014 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x140637B80 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140638A20 (EtwpFlushActiveBuffers.c)
 *     EtwpInitLoggerContext @ 0x1406B4C60 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406B6780 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B7088 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406B76C8 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1407C8D1C (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x1404F24A0 (HvlQueryStartedProcessors.c)
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
