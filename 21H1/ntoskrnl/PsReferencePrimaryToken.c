/*
 * XREFs of PsReferencePrimaryToken @ 0x1405E13A0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140259670 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1402A5CA8 (RtlpQueryLowBoxId.c)
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x140642EB4 (MmCreateSectionEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     PspDisablePrimaryTokenExchange @ 0x14064C7FC (PspDisablePrimaryTokenExchange.c)
 *     PfSnCheckModernApp @ 0x14065048C (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140669C64 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066AF50 (EtwpGetSidExtendedHeaderItem.c)
 *     PspReferenceTokenForNewProcess @ 0x14066EBF4 (PspReferenceTokenForNewProcess.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B7268 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C1EA8 (ObSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406C7324 (PopEtGetProcessSidAndPackageIdentity.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C7DCC (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C7F48 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406C803C (SepIsChildTokenByPointer.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E9E58 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406ECA38 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     CmpCreateRegistryProcessToken @ 0x14078721C (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C53A0 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x1408CE748 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x140919B54 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14092F0B4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14092F2AC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A2C0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x14093C068 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rsi
  void *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *p_Lock; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

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
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
  }
  return v3;
}
