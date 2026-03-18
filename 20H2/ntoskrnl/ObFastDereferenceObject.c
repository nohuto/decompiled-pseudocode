/*
 * XREFs of ObFastDereferenceObject @ 0x140210E40
 * Callers:
 *     PspGetRedirectionTrustPolicy @ 0x1405CD5C8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CD634 (PspSetRedirectionTrustPolicy.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405E5AF4 (AlpcpCheckConnectionSecurity.c)
 *     PsImpersonateClient @ 0x140607260 (PsImpersonateClient.c)
 *     PfQuerySuperfetchInformation @ 0x14060B800 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140630098 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpPsProvTraceProcess @ 0x14063252C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140632D38 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140655650 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140656940 (EtwpGetSidExtendedHeaderItem.c)
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14068D3B0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     PfSnCheckModernApp @ 0x14068EAB4 (PfSnCheckModernApp.c)
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406A6FD8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406D0D5C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406D0E50 (SepIsChildTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E0058 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspMapSystemDll @ 0x1406EF9E8 (PspMapSystemDll.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140936194 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140941390 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409430AC (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140A48D6C (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A967D8 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
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
