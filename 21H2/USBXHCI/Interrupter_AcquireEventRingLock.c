/*
 * XREFs of Interrupter_AcquireEventRingLock @ 0x1C00190C4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000C884 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C080 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C003C2D0 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 */

char __fastcall Interrupter_AcquireEventRingLock(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( *(_BYTE *)(a1 + 224) && KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
    v1 = 1;
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 216));
  return v1;
}
