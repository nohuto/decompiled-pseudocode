/*
 * XREFs of ZwWaitForSingleObject @ 0x1403F23B0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140362140 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1404E65B0 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x1405EE954 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E3BEC (PfSnVolumeCheckSeekPenalty.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140767EB0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140793044 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407B1DB0 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408DC06C (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140951544 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140953DA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
