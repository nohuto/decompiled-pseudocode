/*
 * XREFs of Interrupter_ReleaseEventRingLock @ 0x1C001911C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000C884 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C080 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C003C2D0 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 */

char __fastcall Interrupter_ReleaseEventRingLock(__int64 a1, char a2)
{
  char result; // al

  result = DynamicLock_Release(*(_QWORD *)(a1 + 216));
  if ( a2 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
