/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18006950C
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@Z0@Z @ 0x18006945C (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVir.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180029C00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIApplicationView____ZV__ComPtr_UIApplicationView___WRL_Microsoft___CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIApplicationView___ZV__tuple_V__ComPtr_UIApplicationView___WRL_Microsoft___std___Z(
        __int64 a1,
        struct IObjectArray *a2,
        _QWORD *a3)
{
  _QWORD *v5; // r12
  int CallbackArray; // eax
  unsigned int v7; // ebx
  struct IObjectArray *v8; // rbx
  struct IObjectArray *v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // edi
  __int64 v15; // rcx
  struct IObjectArray *v17; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IObjectArray *v20; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v21; // [rsp+A0h] [rbp+50h]
  __int64 v22; // [rsp+A8h] [rbp+58h]

  v21 = a3;
  v20 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u);
  v5 = 0LL;
  v20 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v20);
  v7 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
    return v7;
  }
  else
  {
    v8 = v20;
    v9 = v20;
    v17 = v20;
    if ( v20 )
      ((void (__fastcall *)(struct IObjectArray *))v20->lpVtbl->AddRef)(v20);
    v10 = 0LL;
    v18[0] = 0LL;
    if ( v18 != a3 )
    {
      v10 = *a3;
      v18[0] = *a3;
      *a3 = 0LL;
    }
    v11 = *(_DWORD *)(a1 + 104);
    v22 = 0LL;
    v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 3) = 1;
      *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v13[2] =  Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{56,{flat}};
      v13[3] = 0LL;
      if ( v13 + 3 != &v17 )
      {
        v13[3] = v8;
        v9 = 0LL;
      }
      v13[4] = 0LL;
      if ( v13 + 4 != v18 )
      {
        v13[4] = v10;
        v10 = 0LL;
      }
      *v13 = off_18046BF48;
      v5 = v13;
    }
    v14 = SHTaskPoolQueueTask(0LL, 2LL, v11);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v14);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      ((void (__fastcall *)(struct IObjectArray *))v9->lpVtbl->Release)(v9);
    if ( v8 )
      ((void (__fastcall *)(struct IObjectArray *))v8->lpVtbl->Release)(v8);
    v15 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return (unsigned int)v14;
  }
}
