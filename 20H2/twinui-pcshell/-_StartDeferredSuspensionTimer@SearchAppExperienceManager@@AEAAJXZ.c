/*
 * XREFs of ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180044734
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027E44 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x1800894C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180046AB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ @ 0x180047128 (-CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::_StartDeferredSuspensionTimer(SearchAppExperienceManager *this)
{
  void *v2; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  CortanaProactiveTelemetry::CortanaExperienceManager_DeferredSuspensionTimerStarted();
  v2 = (void *)*((unsigned int *)this + 118);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_, v2, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 480,
    ThreadpoolTimer);
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 60);
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x5D8,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
             v4);
  SetThreadpoolTimer(v5, &pftDueTime, 0, 0);
  return 0LL;
}
