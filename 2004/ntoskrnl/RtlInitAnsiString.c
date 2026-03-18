/*
 * XREFs of RtlInitAnsiString @ 0x1402770E0
 * Callers:
 *     IopCheckDiskName @ 0x1403B0398 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x1403B55DC (CmpInitializeLoadOptions.c)
 *     HalMatchAcpiOemId @ 0x1403BD490 (HalMatchAcpiOemId.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403C4CA4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x1404E7938 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14056EA80 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140573D50 (PopEmModuleAddressMatchCallback.c)
 *     RtlInitUTF8String @ 0x140580120 (RtlInitUTF8String.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C13B8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x140618300 (ObCheckRefTraceProcess.c)
 *     PopAvlGetPowerRequestKey @ 0x14064DB14 (PopAvlGetPowerRequestKey.c)
 *     EtwpBuildProcessEvent @ 0x14065F2A8 (EtwpBuildProcessEvent.c)
 *     PnpLogVetoInformation @ 0x140720534 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x140758254 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078FE30 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14079027C (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x1407914CC (CmpSetVersionData.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     WmipQueryWmiRegInfo @ 0x1407C2190 (WmipQueryWmiRegInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408BD808 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1408C47A0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1409392C4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140951460 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140964244 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140A40750 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140A4098C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A417EC (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A56678 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A5762C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A577FC (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x140A65390 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x140A66D60 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140A67348 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8CE7C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A8D360 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A8D5B0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
