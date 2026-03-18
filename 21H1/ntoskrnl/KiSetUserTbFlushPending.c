/*
 * XREFs of KiSetUserTbFlushPending @ 0x1403F7010
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KiFlushRangeWorker @ 0x1402EB360 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x1402EC760 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x1402FB600 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x1403124D0 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140386658 (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x14039401C (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x1403C5060 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1409ABE90 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x9018u, __readgsdword(0x9018u) | 1);
}
