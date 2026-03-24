/*
 * XREFs of ObFastDereferenceObject @ 0x14027C610
 * Callers:
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140610354 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     DbgkCreateThread @ 0x140647420 (DbgkCreateThread.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PfQuerySuperfetchInformation @ 0x140654810 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     PsImpersonateClient @ 0x14065AEA0 (PsImpersonateClient.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406823B8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140698894 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406C0098 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406C2928 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PfSnCheckModernApp @ 0x1406CB998 (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x1406CDBB8 (EtwTraceAppStateChange.c)
 *     PspInitializeProcessSecurity @ 0x1406D6400 (PspInitializeProcessSecurity.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x140705F00 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14070782C (EtwpGetSidExtendedHeaderItem.c)
 *     PspMapSystemDll @ 0x140712408 (PspMapSystemDll.c)
 *     SeIsTokenAssignableToProcess @ 0x14071694C (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x140716B0C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x140716C00 (SepIsChildTokenByPointer.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140933964 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EB60 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x14094087C (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140A4B9EC (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A93648 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
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
