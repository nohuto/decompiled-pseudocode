/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403CC998
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x1402A63BC (IopDecrementDeviceObjectRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402F9330 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x140319DF8 (IopIncrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x14035E090 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14035F8F0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetDeviceInstanceName @ 0x1403700D0 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x1403702F0 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1403A5290 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403DC948 (KiMarkBugCheckRegions.c)
 *     sub_1403EBB94 @ 0x1403EBB94 (sub_1403EBB94.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F9520 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405033FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140504764 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14050AFE0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14050B048 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14050B0F0 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050B28C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14050B348 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14050B450 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14050B540 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14050B69C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14050B79C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050B82C (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14050CBF0 (IoRequestDeviceEjectEx.c)
 *     PnpWatchdogBugcheck @ 0x14050EDB0 (PnpWatchdogBugcheck.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140518B80 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14052539C (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x1405384AC (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140538EF4 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x14056523C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1405653D8 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x140592F14 (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x1405BB838 (WheapAddToDumpFile.c)
 *     IopDestroyDeviceNode @ 0x1406120F4 (IopDestroyDeviceNode.c)
 *     IoGetDevicePropertyData @ 0x14062EE90 (IoGetDevicePropertyData.c)
 *     IoGetDeviceInterfaces @ 0x1406754B0 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x140738890 (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessPreStart @ 0x14073E4A4 (PiDmaGuardProcessPreStart.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14074571C (PipProcessEnumeratedChildDevice.c)
 *     IoSetDevicePropertyData @ 0x140746F40 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14074C564 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14074CA04 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x140764F60 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140765058 (PiGetDmaAdapterFromBusInterface.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407657A0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140765838 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x14076D8B0 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089BD20 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BF90 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C160 (IoReserveKsrPersistentMemory.c)
 *     PipGetDeviceObjectLocation @ 0x14089C6A4 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x14089D180 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14089D470 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1408A0040 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408A0230 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408B141C (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408B16C8 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PopWriteHiberPages @ 0x140991EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403CA270 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403CCA18 (IopAddTriageDumpDataBlock.c)
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
