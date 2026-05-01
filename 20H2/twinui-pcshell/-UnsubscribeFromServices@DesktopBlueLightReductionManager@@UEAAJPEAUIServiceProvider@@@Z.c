/*
 * XREFs of ?UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180199EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088A68 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019979C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    if ( *((_QWORD *)this + 16) )
    {
      if ( *((_DWORD *)this + 38) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_NightLightOnWCOS>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_NightLightOnWCOS>::GetImpl'::`2'::impl,
          0,
          a3);
        v9 = 0LL;
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v9);
        if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &IID_IImmersiveWindowMessageService,
               &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
               &v9) >= 0 )
        {
          if ( *((_DWORD *)this + 38) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
          *((_DWORD *)this + 38) = 0;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
      }
      if ( *((_DWORD *)this + 39) )
      {
        v9 = 0LL;
        if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &SID_IImmersiveMonitorService,
               &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
               &v9) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((unsigned int *)this + 39));
          *((_DWORD *)this + 39) = 0;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
      }
      if ( *((_DWORD *)this + 40) )
      {
        v9 = 0LL;
        if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &IID_IImmersiveSessionIdleDetector,
               &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
               &v9) >= 0 )
        {
          if ( *((_DWORD *)this + 40) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
          *((_DWORD *)this + 40) = 0;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, _QWORD))(**((_QWORD **)this + 16) + 48LL))(
             *((_QWORD *)this + 16),
             a2,
             0LL);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          200LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCC,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
