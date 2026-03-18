/*
 * XREFs of RtlInitAnsiString @ 0x140203280
 * Callers:
 *     IopCheckDiskName @ 0x1403B2088 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x1403B2EE0 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B345C (IopCreateUnicodeFromAnsiBuffer.c)
 *     HalMatchAcpiOemId @ 0x1403BC170 (HalMatchAcpiOemId.c)
 *     CmLogMcUpdateStatus @ 0x1404E7308 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14056E430 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140573700 (PopEmModuleAddressMatchCallback.c)
 *     RtlInitUTF8String @ 0x14057F9D0 (RtlInitUTF8String.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C0C98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     ObCheckRefTraceProcess @ 0x14066FA20 (ObCheckRefTraceProcess.c)
 *     PopAvlGetPowerRequestKey @ 0x1407008B0 (PopAvlGetPowerRequestKey.c)
 *     PnpLogVetoInformation @ 0x14071E794 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078DF60 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14078E3AC (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 *     WmipQueryWmiRegInfo @ 0x1407BEC90 (WmipQueryWmiRegInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408BC4E8 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1408C3450 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x140938024 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409500C0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140962EA4 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140A477C0 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140A479FC (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A4885C (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A50978 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A5192C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A51AFC (CmpSetSystemBiosInformation.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140A53DEC (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140A53F30 (IopMarkBootPartition.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A8DFC0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
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
