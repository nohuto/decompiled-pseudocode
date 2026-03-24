/*
 * XREFs of KiSetUserTbFlushPending @ 0x1403FF4F0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     KiFlushRangeWorker @ 0x140290C30 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x140291D70 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x1402A7E60 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x1402C21B0 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x140389ED8 (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x14039747C (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x1403C9600 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1409AFB60 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x9018u, __readgsdword(0x9018u) | 1);
}
