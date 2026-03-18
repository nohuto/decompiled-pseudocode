/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14068A690
 * Callers:
 *     CmpInitializeLoadOptions @ 0x1403B2EE0 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B345C (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CB78C (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x1404E7308 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14056E430 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140573700 (PopEmModuleAddressMatchCallback.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C0C98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x14066FA20 (ObCheckRefTraceProcess.c)
 *     RtlInt64ToUnicodeString @ 0x14068A5E0 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1406DC660 (RtlIntegerToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x140700A24 (PopAnsiStringToUnicodeString.c)
 *     PnpLogVetoInformation @ 0x14071E794 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14074604C (MiSnapThunk.c)
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078DF60 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14078E3AC (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14078E700 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140793688 (CmpFindControlSet.c)
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x1407A9850 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1407BEC90 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140873180 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1408C3450 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x140938024 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409500C0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x14095313C (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140962EA4 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140A479FC (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A4885C (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A50978 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A5192C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A51AFC (CmpSetSystemBiosInformation.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140A53DEC (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140A53F30 (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x140A55950 (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A8DFC0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x14068A780 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14068A820 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int64 v7; // rcx
  ULONG v8; // edx
  int v9; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  BytesInUnicodeString = 0;
  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v9 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v8);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
