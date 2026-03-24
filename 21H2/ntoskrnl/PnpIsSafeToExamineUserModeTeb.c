/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x1402EE838
 * Callers:
 *     PnpRequestDeviceAction @ 0x140370854 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x140500C9C (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x1406E756C (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14025AC80 (KeAreAllApcsDisabled.c)
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
