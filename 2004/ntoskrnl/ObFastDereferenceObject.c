/*
 * XREFs of ObFastDereferenceObject @ 0x140299050
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     PspInitializeProcessSecurity @ 0x140613A04 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     EtwTraceAppStateChange @ 0x14061EF70 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140624544 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140625830 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x14062DAA8 (AlpcpCheckConnectionSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14065F2A8 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1406667C0 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 *     PfQuerySuperfetchInformation @ 0x140692A30 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1406B6060 (PspMapSystemDll.c)
 *     PfSnCheckModernApp @ 0x1406B861C (PfSnCheckModernApp.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406D55F8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406E7C1C (PopEtGetProcessSidAndPackageIdentity.c)
 *     SeIsTokenAssignableToProcess @ 0x1406E848C (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406E8608 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406E86FC (SepIsChildTokenByPointer.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14070DC88 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140710518 (PspGetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140930364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093B560 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x14093D2E4 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140A42ACC (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A90B74 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
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
