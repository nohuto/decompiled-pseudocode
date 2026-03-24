/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403CC828
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402EE5E0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14030F0A8 (IopIncrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x140353340 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14036135C (IopDecrementDeviceObjectRefCount.c)
 *     IoGetDeviceInstanceName @ 0x14036FF20 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x1403707A0 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1403A5140 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403DC7D8 (KiMarkBugCheckRegions.c)
 *     sub_1403EBA24 @ 0x1403EBA24 (sub_1403EBA24.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F95A0 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14050347C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405047E4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14050ADA0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14050AE08 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14050AEB0 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050B04C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14050B108 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14050B210 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14050B300 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14050B45C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14050B55C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050B5EC (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14050C9B0 (IoRequestDeviceEjectEx.c)
 *     PnpWatchdogBugcheck @ 0x14050EB70 (PnpWatchdogBugcheck.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140518940 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14052515C (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x14053826C (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140538CB4 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140564F44 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x140564FFC (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x140565198 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x140592CE4 (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x1405BB608 (WheapAddToDumpFile.c)
 *     IoGetDevicePropertyData @ 0x14063A080 (IoGetDevicePropertyData.c)
 *     IopDestroyDeviceNode @ 0x1406B3034 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x1406C6BC0 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x1406E5CC4 (PnpNotifyDriverCallback.c)
 *     PnpProcessRelation @ 0x1407374AC (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407386D0 (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessPreStart @ 0x14073E2E4 (PiDmaGuardProcessPreStart.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14074555C (PipProcessEnumeratedChildDevice.c)
 *     IoSetDevicePropertyData @ 0x140746D80 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14074C3A4 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14074C844 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoDisconnectInterrupt @ 0x140761A10 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407621CC (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x140764DA0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140764E98 (PiGetDmaAdapterFromBusInterface.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407655E0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140765678 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x14076D6F0 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089BBC0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BE30 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C000 (IoReserveKsrPersistentMemory.c)
 *     PipGetDeviceObjectLocation @ 0x14089C544 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x14089C958 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x14089D020 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14089D310 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x14089FEE0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408A00D0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408B12BC (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408B1568 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PopWriteHiberPages @ 0x140990EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403CA0D0 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403CC8A8 (IopAddTriageDumpDataBlock.c)
 */

char __fastcall IoAddTriageDumpDataBlock(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+38h] [rbp-10h]

  v7[0] = IopNumTriageDumpDataBlocks;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = &IopTriageDumpDataBlocks;
  v4 = IopAddTriageDumpDataBlock(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  IopNumTriageDumpDataBlocks = v7[0];
  if ( IopTriageDumpDataArray )
    KeAddTriageDumpDataBlock(IopTriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
