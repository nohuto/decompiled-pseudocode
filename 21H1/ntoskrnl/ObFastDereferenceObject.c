/*
 * XREFs of ObFastDereferenceObject @ 0x140206540
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x1405E94F0 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 *     PfSnCheckModernApp @ 0x14065048C (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140669C64 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066AF50 (EtwpGetSidExtendedHeaderItem.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B7268 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406C7324 (PopEtGetProcessSidAndPackageIdentity.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C7DCC (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C7F48 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406C803C (SepIsChildTokenByPointer.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E9E58 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406ECA38 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14092F0B4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A2C0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x14093C068 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140A6FEC8 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A914E8 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
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
