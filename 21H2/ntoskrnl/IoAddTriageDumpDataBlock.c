/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403D99B4
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x140259288 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x1402A3EAC (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402A6E00 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x1402A7720 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402A7910 (IopCheckVpbMounted.c)
 *     IoInvalidateDeviceState @ 0x1402DCE00 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x1402DDEC0 (IoGetDeviceInstanceName.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     RtlMarkHiberPhase @ 0x14038D4F0 (RtlMarkHiberPhase.c)
 *     KiMarkBugCheckRegions @ 0x1403EBAC8 (KiMarkBugCheckRegions.c)
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x14054B350 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140553A48 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405550FC (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055C354 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055C3BC (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055C464 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055C600 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055C6BC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055C7C4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C8B4 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055CA14 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055CB14 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055CBA8 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PnpWatchdogBugcheck @ 0x1405623A0 (PnpWatchdogBugcheck.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1405680F4 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14057958C (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x140592BEC (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140593778 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405C6710 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1405C68A8 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140643AFC (WheapAddToDumpFile.c)
 *     PiDmaGuardProcessPreStart @ 0x1407491AC (PiDmaGuardProcessPreStart.c)
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140749848 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407498EC (PiIommuGetInterface.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14076FAB0 (PipProcessEnumeratedChildDevice.c)
 *     IopDestroyDeviceNode @ 0x140774F24 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x14078D3DC (PnpNotifyDriverCallback.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     IoSetDevicePropertyData @ 0x14080D9D0 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14080DBCC (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14080E030 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140817258 (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x1408462A0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140846398 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409407A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140940A60 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x140941244 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x140941654 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140941E70 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140942160 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140944D50 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140944F40 (IoReportResourceUsage.c)
 *     IoRequestDeviceRemovalForReset @ 0x140945420 (IoRequestDeviceRemovalForReset.c)
 *     IopMarkDeviceToBeReset @ 0x140945654 (IopMarkDeviceToBeReset.c)
 *     IopQueueDeviceResetEvent @ 0x1409457D0 (IopQueueDeviceResetEvent.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140956608 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmaGuardBlockAddDevice @ 0x1409568C8 (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x140956BF8 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x140956ED0 (PipDmgRequestUpdateConsoleLockState.c)
 *     PopRequestWrite @ 0x140A4C5B4 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140A4DC74 (PopWriteHiberPages.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     ExpInitializeBootEnvironment @ 0x140B29088 (ExpInitializeBootEnvironment.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403D9A34 (IopAddTriageDumpDataBlock.c)
 */

char __fastcall IoAddTriageDumpDataBlock(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-10h]

  v7[0] = IopNumTriageDumpDataBlocks;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = IopTriageDumpDataBlocks;
  v4 = IopAddTriageDumpDataBlock(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  IopNumTriageDumpDataBlocks = v7[0];
  if ( IopTriageDumpDataArray )
    KeAddTriageDumpDataBlock(IopTriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
