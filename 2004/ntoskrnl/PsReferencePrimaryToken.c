/*
 * XREFs of PsReferencePrimaryToken @ 0x1406676A0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14024CC78 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140295EF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     MiCreateSystemSection @ 0x14036FEA4 (MiCreateSystemSection.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     MiCreateSectionCommon @ 0x1405FAC40 (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x14060DD64 (MmCreateSectionEx.c)
 *     PspInitializeProcessSecurity @ 0x140613A04 (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x140617644 (PspReferenceTokenForNewProcess.c)
 *     EtwTraceAppStateChange @ 0x14061EF70 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140624544 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140625830 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x14062DAA8 (AlpcpCheckConnectionSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14065F2A8 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1406667C0 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 *     PfSnCheckModernApp @ 0x1406B861C (PfSnCheckModernApp.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406D55F8 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406E2428 (ObSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406E7C1C (PopEtGetProcessSidAndPackageIdentity.c)
 *     SeIsTokenAssignableToProcess @ 0x1406E848C (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406E8608 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406E86FC (SepIsChildTokenByPointer.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x1406FCB54 (PsIsProcessAppContainer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14070DC88 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140710518 (PspGetNoChildProcessRestrictedPolicy.c)
 *     CmpCreateRegistryProcessToken @ 0x1407817F8 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C66F0 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x1408CFA98 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x14091AE04 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140930364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14093055C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093B560 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x14093D2E4 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
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
