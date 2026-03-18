/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140275180
 * Callers:
 *     PnpRequestDeviceAction @ 0x14036DAE4 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x140648AB0 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14024CD10 (KeAreAllApcsDisabled.c)
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
