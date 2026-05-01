/*
 * XREFs of ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal3@@PEAUIApplicationView@@@Z @ 0x1800D1B10
 * Callers:
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800CC5B0 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237@@@details@wil@@QEAA_NXZ @ 0x1800D28F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_2.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180138508 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180138508.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18013C9C8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::MoveProxyWindowsToDesktop(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        struct IApplicationViewCollection *a2,
        struct IVirtualDesktopManagerInternal3 *a3,
        struct IApplicationView *a4)
{
  _QWORD *v8; // r14
  _QWORD *i; // rbx
  int (__fastcall *v10)(struct IApplicationViewCollection *, _QWORD, __int64 *); // rdi
  bool v11; // cl
  __int64 (__fastcall *v12)(struct IVirtualDesktopManagerInternal3 *, __int64, struct IApplicationView *); // rax
  int v13; // eax
  int v14; // eax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this, v15);
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
  {
    v17 = 0LL;
    v10 = *(int (__fastcall **)(struct IApplicationViewCollection *, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v17);
    if ( v10(a2, *(_QWORD *)(i[4] + 32LL), &v17) >= 0 && v17 )
    {
      v11 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237>::GetImpl'::`2'::impl) != 0;
      v12 = *(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal3 *, __int64, struct IApplicationView *))(*(_QWORD *)a3 + 120LL);
      if ( v11 )
      {
        v13 = v12(a3, v17, a4);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBD,
            (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowdata.cpp",
            (const char *)(unsigned int)v13);
      }
      else
      {
        v14 = v12(a3, v17, a4);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            193LL,
            (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowdata.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v15);
}
