/*
 * XREFs of ObFastDereferenceObject @ 0x14026A5B0
 * Callers:
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405DD3F8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1405F758C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14061EFA8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406215E8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     PfSnCheckModernApp @ 0x14067A288 (PfSnCheckModernApp.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14069FE04 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A0CC4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     PspInitializeProcessSecurity @ 0x1406AD6E0 (PspInitializeProcessSecurity.c)
 *     PspMapSystemDll @ 0x1406C0A58 (PspMapSystemDll.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C515C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406C5250 (SepIsChildTokenByPointer.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1406CE284 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x1406F0684 (PsQueryProcessAttributes.c)
 *     EtwpBuildProcessEvent @ 0x1406F1D70 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x14071D2E0 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071EC0C (EtwpGetSidExtendedHeaderItem.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140933B34 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093ED30 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x140940A4C (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140A4C9EC (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A94648 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __fastcall ObFastDereferenceObject(signed __int64 *a1, struct _DMA_ADAPTER *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    HalPutDmaAdapter(a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
