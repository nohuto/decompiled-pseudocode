/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x1402670A4
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140266F84 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x140326D2C (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x1405A9CEC (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1405ABCC0 (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1406694A8 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x14066A038 (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeSaveState @ 0x1406E338C (EtwpRealtimeSaveState.c)
 *     EtwpFreeTraceBufferPool @ 0x140712C20 (EtwpFreeTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x140713360 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x140714F44 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140716484 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140716AC4 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1407C473C (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x14093F9B8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x1404F0980 (HvlQueryStartedProcessors.c)
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
