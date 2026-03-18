/*
 * XREFs of PnpRecordBlackbox @ 0x14074ED04
 * Callers:
 *     PnpCallDriverEntry @ 0x140747DDC (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     PnpDisableWatchdog @ 0x14074D6EC (PnpDisableWatchdog.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 *     PnpWatchdogWorkItem @ 0x1409502B0 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14074D3C8 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14074F8BC (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14095E318 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

void __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  switch ( a2 )
  {
    case 1:
      PnpRecordBlackboxPnpEventWorkerInformation();
      break;
    case 2:
      PnpRecordBlackboxDeviceCompletionQueueInformation(a1);
      break;
    case 3:
      PnpRecordBlackboxDelayedRemoveWorkerInformation();
      break;
    default:
      if ( a2 <= 3 || a2 > 5 )
        __fastfail(5u);
      break;
  }
}
