/*
 * XREFs of ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x18045265C
 * Callers:
 *     ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x1804562D0 (-ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800164D4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x180240774 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180251770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_180251770.c)
 *     ??$?4V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@@Z @ 0x180452578 (--$-4V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@X@-$function@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 *     ??0?$MakeSafelyCopyableResult@V?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@PEAVStateChangedEventArgsImpl@@@details@wil@@QEAA@AEBU012@@Z @ 0x180453720 (--0-$MakeSafelyCopyableResult@V-$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@PEAVStateCha.c)
 *     ??1_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@QEAA@XZ @ 0x180453CAC (--1_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncInvokeAll<std::nullptr_t,StateChangedEventArgsImpl *>(
        char *Parameter,
        volatile int *a2,
        __int64 *a3)
{
  volatile int *v3; // r10
  __int64 v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-59h]
  __int64 v11; // [rsp+28h] [rbp-51h] BYREF
  __int64 v12; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v14[16]; // [rsp+40h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = a2;
  v14[14] = 0LL;
  v5 = *a3;
  v10 = *a3;
  if ( *a3 )
  {
    v6 = *(_QWORD *)(v5 + 56);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
LABEL_8:
    v5 = v10;
  }
  v11 = v5;
  v12 = *(_QWORD *)v3;
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>,StateChangedEventArgsImpl *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>,StateChangedEventArgsImpl *>(
    v13,
    &v11);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::operator=<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,void>(
    v14,
    &v12);
  _lambda_bb8fbd677a66ce2f78cf5c6141b3460b_::~_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_((_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_ *)&v12);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
  v8 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
         Parameter,
         (__int64)v14);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v14);
}
