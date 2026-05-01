/*
 * XREFs of ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x18045EA14
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BB110 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x180092C20 (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$CoCreateInstance@VImmersiveShell@@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@K@Z @ 0x18045E974 (--$CoCreateInstance@VImmersiveShell@@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180471E00 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CloseWinRTApplicationView(struct IWinRTApplicationView *a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IWinRTApplicationView *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v6 = a1;
  try
  {
    wil::com_query<IApplicationView,IWinRTApplicationView * &>((__int64)&v9, &v6);
    wil::CoCreateInstance<ImmersiveShell,IServiceProvider,wil::err_exception_policy>((__int64 *)&v8);
    v7 = 0LL;
    v1 = *v8;
    v7 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, __int64 *))(v1 + 24))(
           v8,
           &unk_1805451A0,
           &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
           &v7);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        12LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
        (const char *)(unsigned int)v2);
    v3 = ApplicationViewHelpers::CloseView(v9, v7, 10LL);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        16LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x12,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
      v4);
  }
}
