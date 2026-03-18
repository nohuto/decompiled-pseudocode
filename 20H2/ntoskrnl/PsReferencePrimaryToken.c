/*
 * XREFs of PsReferencePrimaryToken @ 0x14067EEB0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14022A460 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x140233928 (RtlpQueryLowBoxId.c)
 *     MiCreateSystemSection @ 0x140371DF4 (MiCreateSystemSection.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CD5C8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CD634 (PspSetRedirectionTrustPolicy.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405E5AF4 (AlpcpCheckConnectionSecurity.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140630098 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpPsProvTraceProcess @ 0x14063252C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140632D38 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140655650 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140656940 (EtwpGetSidExtendedHeaderItem.c)
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x14067F1A0 (MiCreateSectionCommon.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14068D3B0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     PfSnCheckModernApp @ 0x14068EAB4 (PfSnCheckModernApp.c)
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x140690400 (PspReferenceTokenForNewProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406A6FD8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406CD440 (ObSetCurrentProcessDeviceMap.c)
 *     PsIsProcessAppContainer @ 0x1406CF334 (PsIsProcessAppContainer.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406D0D5C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406D0E50 (SepIsChildTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E0058 (PspSetNoChildProcessRestrictedPolicy.c)
 *     MmCreateSectionEx @ 0x140709D74 (MmCreateSectionEx.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C23A4 (CmpCreateRegistryProcessToken.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408CC530 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x1408D58D8 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x140920A84 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140936194 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14093638C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140941390 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409430AC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rsi
  void *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *p_Lock; // rdi

  v1 = &Process[1].Affinity.Bitmap[5];
  v3 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v3 = (void *)ObFastReferenceObjectLocked(v1);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v3;
}
