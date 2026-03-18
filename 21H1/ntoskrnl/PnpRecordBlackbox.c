/*
 * XREFs of PnpRecordBlackbox @ 0x14070AF90
 * Callers:
 *     PnpDisableWatchdog @ 0x14070AEC0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x14075B558 (PnpCallDriverEntry.c)
 *     PnpWatchdogWorkItem @ 0x1408A7670 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14070B114 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140756FAC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B48F8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
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
