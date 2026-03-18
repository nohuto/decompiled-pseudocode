/*
 * XREFs of KiSetUserTbFlushPending @ 0x140420AD0
 * Callers:
 *     KiFlushRangeWorker @ 0x14021C750 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x140222E70 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14023B310 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140246390 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KiFlushRangeTb @ 0x1403A22F0 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403A35B8 (KiFlushCurrentTbOnly.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140A69D80 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xA018u, __readgsdword(0xA018u) | 1);
}
