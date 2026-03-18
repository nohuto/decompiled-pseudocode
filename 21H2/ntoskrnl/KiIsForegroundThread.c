/*
 * XREFs of KiIsForegroundThread @ 0x1402F8020
 * Callers:
 *     KiTryScheduleNextForegroundBoost @ 0x140290FCC (KiTryScheduleNextForegroundBoost.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiGetHeteroThreadQos @ 0x14045AE34 (KiGetHeteroThreadQos.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsForegroundThread(__int64 a1)
{
  return *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2;
}
