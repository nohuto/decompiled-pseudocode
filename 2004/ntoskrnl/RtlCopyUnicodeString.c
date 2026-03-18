/*
 * XREFs of RtlCopyUnicodeString @ 0x1402909B0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140268870 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14032C0BC (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x1403A4100 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403AF2A4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403AF660 (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403C9020 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1404CA5C4 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405B55EC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECB20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpGetVirtualizationID @ 0x1406416D8 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406C868C (EtwpGetLoggerInfoFromContext.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1406D7D2C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406DAEC0 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x1406E7014 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406EECE8 (IopSymlinkUpdateECP.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14070E9B0 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14072060C (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407220BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     IopQueryRegistryKeySystemPath @ 0x140728BE0 (IopQueryRegistryKeySystemPath.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x140731008 (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x1407343C8 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140734474 (PnpConcatenateUnicodeStrings.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140744B20 (SdbMakeIndexKeyFromStringEx.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14076A0F8 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14076A290 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PsRegisterSiloMonitor @ 0x14077DC80 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 *     PnpCopyDeviceInstancePath @ 0x14078E584 (PnpCopyDeviceInstancePath.c)
 *     AdtpObjsInitialize @ 0x1407AAC70 (AdtpObjsInitialize.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407ABD88 (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14089C9C8 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408A8C10 (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408B5FCC (PipRecordOpenHandleVeto.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408C5758 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C6658 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x1408CA658 (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E1D44 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408E3524 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14090367C (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140915E10 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14091E3C0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x14097CBDC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140A89E80 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v6 = DestinationString->Buffer;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
