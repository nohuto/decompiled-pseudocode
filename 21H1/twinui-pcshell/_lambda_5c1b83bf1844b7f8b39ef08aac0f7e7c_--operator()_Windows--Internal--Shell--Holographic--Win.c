/*
 * XREFs of _lambda_5c1b83bf1844b7f8b39ef08aac0f7e7c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C0C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___::Run @ 0x18009CF90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800919B4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResizeWin32SlatesOnStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009CF0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResizeWin32SlatesOnStart@@@details@wil@@Q.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18016528C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802309EC (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180232DC8 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5c1b83bf1844b7f8b39ef08aac0f7e7c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  int ready; // eax
  unsigned int v5; // ebx
  _BYTE v7[88]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+80h] [rbp+8h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1,
    (wil::ActivityThreadWatcher *)v7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResizeWin32SlatesOnStart>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ResizeWin32SlatesOnStart>::GetImpl'::`2'::impl,
    0LL);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a2 + 216), &v9);
  *(_BYTE *)(a2 + 545) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(
            (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)a2,
            1);
  v5 = ready;
  if ( ready >= 0 )
  {
    wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x362,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)ready);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v7);
  return v5;
}
