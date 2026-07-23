/*
 * XREFs of ZwWaitForSingleObject @ 0x1403F81F0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364AE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1404EA0F0 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x140657654 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E87A8 (PfSnVolumeCheckSeekPenalty.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407788A0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C3750 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E321C (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1409586A4 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x14095B230 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
