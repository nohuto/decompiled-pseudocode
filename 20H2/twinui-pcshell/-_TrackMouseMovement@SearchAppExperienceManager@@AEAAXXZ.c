/*
 * XREFs of ?_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x180099550
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18005C310 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180046AB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x18007A79C (-_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ.c)
 *     ?_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ @ 0x180099414 (-_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x1801B0C18 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 */

void __fastcall SearchAppExperienceManager::_TrackMouseMovement(SearchAppExperienceManager *this)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v3; // r9d
  __int64 *v4; // rcx
  __int64 v5; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  *((_QWORD *)this + 70) = SearchAppExperienceManager::_GetHwnd(this);
  SearchAppExperienceManager::_IsMouseOnSearch(this);
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_7d62eec1b3de4cef9f9423f9a8950082_::_lambda_invoker_cdecl_,
                      this,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 76,
    ThreadpoolTimer);
  ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
    *((ThreadpoolHelpers **)this + 76),
    (struct _TP_TIMER *)0x14D,
    0x14DuLL,
    v3,
    v6[0]);
  v4 = (__int64 *)*((_QWORD *)this + 62);
  v5 = *v4;
  v6[0] = off_1804918C8;
  v6[7] = v6;
  v6[1] = this;
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v5 + 64))(v4, v6);
}
