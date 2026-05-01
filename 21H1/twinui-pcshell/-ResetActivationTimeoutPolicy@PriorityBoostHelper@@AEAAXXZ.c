/*
 * XREFs of ?ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ @ 0x1801D5FD0
 * Callers:
 *     ?OnMessage@PriorityBoostHelper@@UEAAJI_K_J@Z @ 0x1801D5C20 (-OnMessage@PriorityBoostHelper@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D260 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PriorityBoostHelper::ResetActivationTimeoutPolicy(struct _TP_TIMER **this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64); // rcx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 9,
    0LL);
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))((char *)this[8] + 24);
  if ( *v2 )
  {
    v7 = 0LL;
    v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v2,
           (__int64)&v7);
    v4 = retaddr;
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, 0LL);
      v4 = retaddr;
      if ( v3 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
        return;
      }
      v5 = 199LL;
    }
    else
    {
      v5 = 197LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
}
