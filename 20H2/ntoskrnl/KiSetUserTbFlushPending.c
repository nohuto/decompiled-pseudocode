/*
 * XREFs of KiSetUserTbFlushPending @ 0x1403FD230
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     KiFlushRangeWorker @ 0x1402F4A90 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x1402F60F0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14030AE10 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140320970 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140389788 (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403970AC (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x1403C8A60 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1409B2C60 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x9018u, __readgsdword(0x9018u) | 1);
}
