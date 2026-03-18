/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403CBE58
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x14020391C (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x14020B07C (IopIncrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x14020D6F0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14020D990 (IopCheckVpbMounted.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14020DD20 (IopIncrementDeviceObjectRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402402D0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoInvalidateDeviceRelations @ 0x14036E6C0 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x140370428 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x1403A4880 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403DBE68 (KiMarkBugCheckRegions.c)
 *     sub_1403EB0B4 @ 0x1403EB0B4 (sub_1403EB0B4.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F7A00 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405018FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140502C64 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140509270 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405092D8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140509380 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050951C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1405095D8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405096E0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1405097D0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14050992C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140509A2C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140509ABC (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14050AE80 (IoRequestDeviceEjectEx.c)
 *     PnpWatchdogBugcheck @ 0x14050D040 (PnpWatchdogBugcheck.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140516E00 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14052367C (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x14053676C (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1405371B4 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140563474 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x14056352C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1405636C8 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x1405912D4 (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x1405B9BC0 (WheapAddToDumpFile.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     IoGetDeviceInterfaces @ 0x1406E8890 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x14070F920 (IoGetDevicePropertyData.c)
 *     IopDestroyDeviceNode @ 0x14071F594 (IopDestroyDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407344BC (PipProcessEnumeratedChildDevice.c)
 *     IoSetDevicePropertyData @ 0x140737B20 (IoSetDevicePropertyData.c)
 *     PipProcessStartPhase1 @ 0x14073B388 (PipProcessStartPhase1.c)
 *     PiQueryPowerRelations @ 0x14073CAE4 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14073CF84 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PnpProcessRelation @ 0x1407403AC (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407415D0 (PiDmaGuardProcessPostRemove.c)
 *     IoDisconnectInterrupt @ 0x14075D220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x140761AD0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140761BC8 (PiGetDmaAdapterFromBusInterface.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140762310 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407623A8 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x1407697B0 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089E5F0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089E860 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x14089EA30 (IoReserveKsrPersistentMemory.c)
 *     PipGetDeviceObjectLocation @ 0x14089EF74 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x14089F388 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x14089FA50 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14089FD40 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1408A2910 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408A2B00 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408B3CEC (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408B3F98 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PopWriteHiberPages @ 0x140993EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403C9530 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403CBED8 (IopAddTriageDumpDataBlock.c)
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
