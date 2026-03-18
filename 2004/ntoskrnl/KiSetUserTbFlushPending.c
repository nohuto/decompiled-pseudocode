/*
 * XREFs of KiSetUserTbFlushPending @ 0x1403F82A0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     KiFlushRangeWorker @ 0x140324C90 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x140326090 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140338630 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140350260 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x1403875C8 (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x140394BEC (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x1403C5FD0 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1409ACCF0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x9018u, __readgsdword(0x9018u) | 1);
}
