/*
 * XREFs of ZwWaitForSingleObject @ 0x1403F3640
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140362C30 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1404E6B60 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x140697E54 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406BDE60 (PfSnVolumeCheckSeekPenalty.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14076A290 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14078BE74 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407B4F20 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408DD3DC (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1409528E4 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140955470 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
