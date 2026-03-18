/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403C8408
 * Callers:
 *     IopCheckDeviceAndDriver @ 0x140253FB0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140254590 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402DF540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14033F614 (IopIncrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14033FE5C (IopDecrementDeviceObjectRefCount.c)
 *     IoGetDeviceInstanceName @ 0x14036B8A0 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x14036BA20 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1403A1C20 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403D8398 (KiMarkBugCheckRegions.c)
 *     sub_1403E75E4 @ 0x1403E75E4 (sub_1403E75E4.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F3B40 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FD9DC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1404FED44 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1405052F0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140505358 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140505400 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050559C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140505658 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140505760 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140505850 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1405059AC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140505AAC (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140505B3C (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x140506F00 (IoRequestDeviceEjectEx.c)
 *     PnpWatchdogBugcheck @ 0x1405090C0 (PnpWatchdogBugcheck.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140512E80 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14051F65C (KiRecordRecoveryFailure.c)
 *     MiAddTriageDumpPtes @ 0x14053274C (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140533194 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x14055F450 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x14055F508 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x14055F698 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x14058D1B4 (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x1405B5940 (WheapAddToDumpFile.c)
 *     IoGetDeviceInterfaces @ 0x1406B3B00 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x1406EDEC0 (IoGetDevicePropertyData.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     IopDestroyDeviceNode @ 0x140710204 (IopDestroyDeviceNode.c)
 *     PipProcessStartPhase1 @ 0x14072358C (PipProcessStartPhase1.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14072ABEC (PipProcessEnumeratedChildDevice.c)
 *     IoSetDevicePropertyData @ 0x14072C410 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x140731720 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140731920 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PnpProcessRelation @ 0x140731FE4 (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x140733F10 (PiDmaGuardProcessPostRemove.c)
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 *     IoGetDmaAdapter @ 0x14074E860 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x14074E958 (PiGetDmaAdapterFromBusInterface.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x14074F0A0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x14074F138 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x140759040 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemory @ 0x1408977A0 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x140897A10 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x140897BE0 (IoReserveKsrPersistentMemory.c)
 *     PipGetDeviceObjectLocation @ 0x140898124 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x140898538 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140898C00 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140898EF0 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x14089BAC0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14089BCB0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408ACE9C (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408AD148 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PopWriteHiberPages @ 0x14098D6B4 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x1403C5B30 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x1403C8488 (IopAddTriageDumpDataBlock.c)
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
