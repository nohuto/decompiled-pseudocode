/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x1402E1C80
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x14025116C (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1402E1140 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAddLastDroppedEvent @ 0x140632F6C (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1406354FC (EtwpReenableCompression.c)
 *     EtwpFreeTraceBufferPool @ 0x1406D1CF4 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406EA4C0 (EtwpRealtimeSaveState.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406EF910 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406F120C (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwpAdjustFreeBuffers @ 0x1407987F0 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x14079885C (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeRestoreState @ 0x1408570CC (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x140543D70 (HvlQueryStartedProcessors.c)
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
