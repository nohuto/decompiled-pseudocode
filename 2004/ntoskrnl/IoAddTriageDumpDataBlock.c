/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403C9218
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x14026FCCC (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x14026FFD4 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140273570 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopCheckDeviceAndDriver @ 0x140290830 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140290E10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetDeviceInstanceName @ 0x14036D828 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x14036DA30 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1403A23B0 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403D91D8 (KiMarkBugCheckRegions.c)
 *     sub_1403E8424 @ 0x1403E8424 (sub_1403E8424.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F4190 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FE02C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1404FF394 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140505940 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405059A8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140505A50 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140505BEC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140505CA8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140505DB0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140505EA0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140505FFC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1405060FC (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050618C (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x140507550 (IoRequestDeviceEjectEx.c)
 *     PnpWatchdogBugcheck @ 0x140509710 (PnpWatchdogBugcheck.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1405134D0 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14051FCAC (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x140532D9C (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1405337E4 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x14055FB58 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x14055FCE8 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x14058D8A4 (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x1405B6060 (WheapAddToDumpFile.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     IopDestroyDeviceNode @ 0x1406A58D4 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x1406BDF50 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x140711850 (IoGetDevicePropertyData.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x140725A2C (PipProcessEnumeratedChildDevice.c)
 *     IoSetDevicePropertyData @ 0x140729090 (IoSetDevicePropertyData.c)
 *     PipProcessStartPhase1 @ 0x14072C90C (PipProcessStartPhase1.c)
 *     PnpProcessRelation @ 0x140731008 (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x14073222C (PiDmaGuardProcessPostRemove.c)
 *     PiQueryPowerRelations @ 0x140737F04 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140738104 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoDisconnectInterrupt @ 0x14074E640 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074EDFC (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x140752EF0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140752FE8 (PiGetDmaAdapterFromBusInterface.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140753730 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407537C8 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x14075AEC0 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemory @ 0x140898AC0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x140898D30 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x140898F00 (IoReserveKsrPersistentMemory.c)
 *     PipGetDeviceObjectLocation @ 0x140899444 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x140899858 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140899F20 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14089A210 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x14089CDE0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14089CFD0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408AE1BC (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408AE468 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PopWriteHiberPages @ 0x14098DECC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140990D44 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403C6AA0 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403C9298 (IopAddTriageDumpDataBlock.c)
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
