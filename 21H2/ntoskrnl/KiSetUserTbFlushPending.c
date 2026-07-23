/*
 * XREFs of KiSetUserTbFlushPending @ 0x1403FF6D0
 * Callers:
 *     KiFlushRangeWorker @ 0x14020EBA0 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x14020FCE0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140225FA0 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140240650 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleCurrentTb @ 0x14038A028 (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403975CC (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x1403C97A0 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1409B0A90 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x9018u, __readgsdword(0x9018u) | 1);
}
