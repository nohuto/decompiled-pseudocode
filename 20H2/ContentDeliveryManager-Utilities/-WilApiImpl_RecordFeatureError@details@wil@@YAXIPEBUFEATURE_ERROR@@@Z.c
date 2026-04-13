/*
 * XREFs of ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18000BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000B020 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000B844 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18000B8F4 (-EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureError(
        wil::details *this,
        struct FEATURE_ERROR *a2,
        const struct FEATURE_ERROR *a3)
{
  int v4; // edi
  int v5; // eax

  v4 = (int)this;
  if ( wil::details::g_featureStateManager )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook((unsigned int)this, 0LL, a2, 1, 0LL, 0LL, 0, 1uLL);
    if ( wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager)
      && wil::details_abi::FeatureStateData::RecordFeatureError(qword_180197480, v4, a2)
      && !wil::details::g_processShutdownInProgress )
    {
      v5 = (int)wil::details::g_pfnDllShutdownInProgress;
      if ( wil::details::g_pfnDllShutdownInProgress )
        v5 = wil::details::g_pfnDllShutdownInProgress();
      if ( !v5 )
      {
        AcquireSRWLockExclusive(&SRWLock);
        wil::details::FeatureStateManager::EnsureTimerUnderLock(&wil::details::g_featureStateManager);
        ReleaseSRWLockExclusive(&SRWLock);
      }
    }
  }
}
