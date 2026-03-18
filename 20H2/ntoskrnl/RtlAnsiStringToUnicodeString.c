/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1405DFB00
 * Callers:
 *     CmpInitializeLoadOptions @ 0x1403B66A0 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B6C1C (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CF220 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x1404EB1C8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405724B0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140577780 (PopEmModuleAddressMatchCallback.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C5038 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlInt64ToUnicodeString @ 0x1405DFA50 (RtlInt64ToUnicodeString.c)
 *     ObCheckRefTraceProcess @ 0x14063051C (ObCheckRefTraceProcess.c)
 *     RtlIntegerToUnicodeString @ 0x1406D2250 (RtlIntegerToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x14071CEF8 (PopAnsiStringToUnicodeString.c)
 *     PnpLogVetoInformation @ 0x14072E524 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407567AC (MiSnapThunk.c)
 *     PiGetDefaultMessageString @ 0x140766E94 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14079C7E8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14079CC34 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14079CF80 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x14079DD6C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407A2768 (CmpFindControlSet.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x1407BA8F0 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1407D0990 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140879FC0 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140894150 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1408CA5E0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140957220 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x14095A5CC (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x14096A014 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140A46C2C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A47A8C (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A56CF8 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A57CAC (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A57E7C (CmpSetSystemBiosInformation.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140A5A1E8 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x140A5BD50 (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x140A6C660 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A93060 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A932B0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x1405DFBF0 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405DFC90 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
