/*
 * XREFs of RtlInitAnsiString @ 0x14023DB90
 * Callers:
 *     IopCheckDiskName @ 0x1403B2D08 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x1403B66A0 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B6C1C (IopCreateUnicodeFromAnsiBuffer.c)
 *     HalMatchAcpiOemId @ 0x1403BF910 (HalMatchAcpiOemId.c)
 *     CmLogMcUpdateStatus @ 0x1404EB1C8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405724B0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140577780 (PopEmModuleAddressMatchCallback.c)
 *     RtlInitUTF8String @ 0x140583A80 (RtlInitUTF8String.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C5038 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x14063051C (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140632D38 (EtwpBuildProcessEvent.c)
 *     PopAvlGetPowerRequestKey @ 0x14071D374 (PopAvlGetPowerRequestKey.c)
 *     PnpLogVetoInformation @ 0x14072E524 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x140766E94 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14079C7E8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14079CC34 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14079DD6C (CmpSetVersionData.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     WmipQueryWmiRegInfo @ 0x1407D0990 (WmipQueryWmiRegInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408C3568 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1408CA5E0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140957220 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x14096A014 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140A469F0 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140A46C2C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A47A8C (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A56CF8 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A57CAC (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A57E7C (CmpSetSystemBiosInformation.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140A5A1E8 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 *     WmipDriverEntry @ 0x140A6C660 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A93060 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A932B0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
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
