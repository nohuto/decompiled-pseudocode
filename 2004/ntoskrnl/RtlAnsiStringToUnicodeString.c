/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14063D070
 * Callers:
 *     CmpInitializeLoadOptions @ 0x1403B55DC (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403C4CA4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CC584 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x1404E7938 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14056EA80 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140573D50 (PopEmModuleAddressMatchCallback.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C13B8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x140618300 (ObCheckRefTraceProcess.c)
 *     RtlInt64ToUnicodeString @ 0x14063CFC0 (RtlInt64ToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x14064DE08 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1406FF600 (RtlIntegerToUnicodeString.c)
 *     PnpLogVetoInformation @ 0x140720534 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140747BCC (MiSnapThunk.c)
 *     PiGetDefaultMessageString @ 0x140758254 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     CmpFindControlSet @ 0x14078B248 (CmpFindControlSet.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078FE30 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14079027C (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407905D0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x1407914CC (CmpSetVersionData.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x1407AC9B0 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1407C2190 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140874470 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1408C47A0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1409392C4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140951460 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x14095480C (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140964244 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140A4098C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A417EC (EmpInfParseGetGuidFromName.c)
 *     PipSmBiosGetString @ 0x140A4CDB4 (PipSmBiosGetString.c)
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
 *     RtlMultiByteToUnicodeN @ 0x14063D160 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14063D200 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
