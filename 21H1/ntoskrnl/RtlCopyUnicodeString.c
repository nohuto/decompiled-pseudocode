/*
 * XREFs of RtlCopyUnicodeString @ 0x140254130
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402D85EC (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140338570 (AuthzBasepDuplicateSecurityAttributes.c)
 *     IoQueryFullDriverPath @ 0x1403A39A0 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403A81E4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403A85A0 (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403C8210 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1404CA114 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405B4ECC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x1405CAC34 (VrpBuildKeyPath.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140622140 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140672CAC (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140678B34 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14067A954 (EtwpGetLoggerInfoFromContext.c)
 *     CmpGetVirtualizationID @ 0x14068F59C (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406B9BB0 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x1406C671C (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406CD9E8 (IopSymlinkUpdateECP.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14071E86C (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407201FC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopQueryRegistryKeySystemPath @ 0x140726670 (IopQueryRegistryKeySystemPath.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x14072FA40 (PnpConcatenateUnicodeStrings.c)
 *     PiDeferSetInterfaceState @ 0x140731030 (PiDeferSetInterfaceState.c)
 *     PnpProcessRelation @ 0x140731FE4 (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140742FA0 (SdbMakeIndexKeyFromStringEx.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 *     IopBootLog @ 0x14075CC40 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140767D18 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140767EB0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PsRegisterSiloMonitor @ 0x14077E490 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14077E640 (ObCreateObjectTypeEx.c)
 *     PnpCopyDeviceInstancePath @ 0x14078C6B4 (PnpCopyDeviceInstancePath.c)
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407A8C28 (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x1407AEEC8 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14089B6A8 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408A78F0 (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408B4CAC (PipRecordOpenHandleVeto.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408C4408 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C5308 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x1408C9308 (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E0AC4 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408E22A4 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14090286C (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140914BA0 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14091D110 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x14097B83C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140A8A8F0 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
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
