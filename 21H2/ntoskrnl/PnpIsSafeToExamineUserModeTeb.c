/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x1402E08F8
 * Callers:
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x140556BE4 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE6(CurrentThread[1].Queue) > 1u )
    return 0;
  return v0;
}
