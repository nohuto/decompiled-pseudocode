/*
 * XREFs of ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803CA800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x180128848 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  CDesktopPositioner *v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+38h] [rbp-38h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !*(_DWORD *)(a1 + 252) )
    return 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  if ( !CDesktopPositioner::HasWindowingEnvironmentManager(v7, v6, v8) || (a3 & 0x38) == 0 )
    return 0LL;
  v20 = 0LL;
  v9 = *(__int64 **)(a1 + 176);
  v10 = *v9;
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v10 + 32))(v9, 1LL, &v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 990LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    return v12;
  }
  v21 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 993LL;
    goto LABEL_8;
  }
  if ( v21 )
  {
    v23 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v23);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E7,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
    v16 = *v20;
    v22 = v23;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v16 + 56))(v20, a2, &v22, 1LL);
    v18 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_18;
    v19 = 1000LL;
  }
  else
  {
    if ( (a3 & 0x20) == 0 )
      goto LABEL_18;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v20 + 64))(v20, a2);
    v18 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_18;
    v19 = 1005LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v18,
    (void *)v19,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v17);
LABEL_18:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  return 0LL;
}
