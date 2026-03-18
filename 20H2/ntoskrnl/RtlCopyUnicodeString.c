/*
 * XREFs of RtlCopyUnicodeString @ 0x14020D870
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140202A4C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402E2770 (AuthzBasepDuplicateSecurityAttributes.c)
 *     IoQueryFullDriverPath @ 0x1403A6520 (IoQueryFullDriverPath.c)
 *     HalpInterruptRegisterController @ 0x1403B1894 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403B1C50 (HalpTimerRegister.c)
 *     RtlPcToFileName @ 0x1403CBC60 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x1404CDB24 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405B914C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x1405D2664 (VrpBuildKeyPath.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405D6B68 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14068D424 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406A7600 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x1406BC8A0 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     CmpGetVirtualizationID @ 0x1406FC260 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140714BA0 (EtwpGetLoggerInfoFromContext.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14072E5FC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407301CC (PnpQueryRemoveLockedDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1407403AC (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x140743858 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140743904 (PnpConcatenateUnicodeStrings.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140753700 (SdbMakeIndexKeyFromStringEx.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     IopBootLog @ 0x14076D764 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140778708 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407788A0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PsRegisterSiloMonitor @ 0x14078B220 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 *     PnpCopyDeviceInstancePath @ 0x14079ACC4 (PnpCopyDeviceInstancePath.c)
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407B9CC8 (PopGenerateDeviceFriendlyName.c)
 *     PopConnectToPolicyDevice @ 0x1407BFFF4 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x140894964 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x1408A24F8 (PnpNotifyHwProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408AE740 (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408BBBEC (PipRecordOpenHandleVeto.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408CB598 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408CC498 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x1408D0498 (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E7B84 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408E9364 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14090929C (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x14091BA40 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140924040 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAddTokenOriginClaim @ 0x140925380 (SepAddTokenOriginClaim.c)
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x1409829AC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
 *     ExtEnvRegisterIommu @ 0x140A8FB90 (ExtEnvRegisterIommu.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
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
