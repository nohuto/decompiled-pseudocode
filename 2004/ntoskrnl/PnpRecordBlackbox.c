/*
 * XREFs of PnpRecordBlackbox @ 0x14064999C
 * Callers:
 *     PnpDisableWatchdog @ 0x1406498CC (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x14075DA40 (PnpCallDriverEntry.c)
 *     PnpWatchdogWorkItem @ 0x1408A8990 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140649B24 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140758C2C (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B5C18 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
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
