/*
 * XREFs of ?SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019A000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180199BAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::SubscribeToServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v6 = *((_QWORD *)this + 16);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, a2, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          122LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v7);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_NightLightOnWCOS>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_NightLightOnWCOS>::GetImpl'::`2'::impl,
        0,
        v8);
      v17 = 0LL;
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v17);
      v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
             a2,
             &IID_IImmersiveWindowMessageService,
             &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
             &v17);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          127LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, char *))(*(_QWORD *)v17 + 24LL))(
              v17,
              30LL,
              ((unsigned __int64)this + 64) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
              (char *)this + 152);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          128LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      v19 = 0LL;
      v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
              a2,
              &SID_IImmersiveMonitorService,
              &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
              &v19);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          132LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v11);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 24LL))(
              v19,
              ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
              (char *)this + 156);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          133LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v12);
      v18 = 0LL;
      v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
              a2,
              &IID_IImmersiveSessionIdleDetector,
              &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
              &v18);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          136LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v13);
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v18 + 32LL))(
              v18,
              ((unsigned __int64)this + 80) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
              (char *)this + 160);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          137LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
