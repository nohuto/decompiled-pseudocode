/*
 * XREFs of ?_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BDB60
 * Callers:
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BD04C (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180052AFC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801B6E24 (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_StartActivationTimeoutPolicy(CortanaSharedExperienceManager *this)
{
  struct _TP_TIMER **v2; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  pftDueTime = (struct _FILETIME)-1200000000LL;
  v2 = (struct _TP_TIMER **)((char *)this + 456);
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_28679c782842d195cae8ac06fc3af96d_::_lambda_invoker_cdecl_,
                      (PVOID)*((unsigned int *)this + 112),
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    v2,
    ThreadpoolTimer);
  if ( !*v2 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x554,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
             v4);
  SetThreadpoolTimer(*v2, &pftDueTime, 0, 0);
  v10 = 0LL;
  v6 = CortanaSharedExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         (__int64)this,
         (__int64)&v10);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 1368LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 88LL))(v10, 1LL);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 1370LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return 0LL;
}
