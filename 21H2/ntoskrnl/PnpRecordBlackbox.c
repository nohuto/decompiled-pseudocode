/*
 * XREFs of PnpRecordBlackbox @ 0x1406775B0
 * Callers:
 *     PnpDisableWatchdog @ 0x1406774E0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x1407703C4 (PnpCallDriverEntry.c)
 *     PnpWatchdogWorkItem @ 0x1408ABA90 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140677734 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14076B9FC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B8D18 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

__int64 __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
      return PnpRecordBlackboxPnpEventWorkerInformation();
    case 2:
      return PnpRecordBlackboxDeviceCompletionQueueInformation();
    case 3:
      return PnpRecordBlackboxDelayedRemoveWorkerInformation();
  }
  if ( a2 <= 3 || a2 > 5 )
    __fastfail(5u);
  return result;
}
