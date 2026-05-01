/*
 * XREFs of ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803BC680
 * Callers:
 *     ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1803BAF54 (-HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicationView___IImmersiveMonitor___::_Do_call @ 0x1803BCCF0 (std--_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicatio_ea_1803BCCF0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180161030 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA?AV?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@AEAUCRect@Geometry@@@Z @ 0x1803B90B4 (--$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA-AV-$Co.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1803BA23C (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 *     ?SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803BC5E8 (-SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall KioskPositioner::SetUwpViewFullScreen(
        KioskPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveApplication **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v13[8]; // [rsp+38h] [rbp-11h] BYREF
  __int128 v14; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  KioskPositioner::SetPositionerMonitor(this, a2, a3);
  v14 = 0LL;
  v6 = (*((__int64 (__fastcall **)(struct IImmersiveApplication **, __int128 *))*a3 + 11))(a3, &v14);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1047LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  wil::MakeAndInitializeOrThrow<CCommonApplicationViewPosition,Geometry::CRect &>(v12, &v14);
  v13[0] = off_1804A1248;
  v13[1] = this;
  v13[7] = v13;
  KioskPositioner::CreateApplicationViewOperation(v7, &v11, 0, (__int64)v13);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 80LL))(v11, v12[0]);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41C,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v8);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 96LL))(v11, 1LL);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41D,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v9);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64))(*a2)[40])(
          a2,
          v11);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41E,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(v12);
}
