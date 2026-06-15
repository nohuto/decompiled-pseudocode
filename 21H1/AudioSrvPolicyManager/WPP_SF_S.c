/*
 * XREFs of WPP_SF_S @ 0x18000FF70
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800113E0 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     _lambda_f86610c62469b25ae51ca6a2edc40a12_::operator() @ 0x1800115D4 (_lambda_f86610c62469b25ae51ca6a2edc40a12_--operator().c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800116B0 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180011878 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800119E8 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_516c21e0980b5fcc1b9eb758a6d82083__long_IAudioSessionInfo___::_Do_call @ 0x180013300 (std--_Func_impl_no_alloc__lambda_516c21e0980b5fcc1b9eb758a6d82083__long_IAudioSessionInfo___--_D.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180016F54 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800170C0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800173F8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x1800174F4 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18001767C (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180018320 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800184C4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180023524 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180023AAC (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180023CB4 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180025F10 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180032380 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800326C0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_S(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v7, v6, 0LL);
}
