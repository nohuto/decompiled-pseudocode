/*
 * XREFs of ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803D5C40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1803D8248 (-IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1803D8518 (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModePositioner::DisplaySettingsChange(
        __int64 a1,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  TabletModePositioner *v7; // r15
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+38h] [rbp-38h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 2147947423LL;
  if ( *(_DWORD *)(a1 + 84) != 1 )
    return 0LL;
  v7 = (TabletModePositioner *)(a1 - 152);
  if ( !TabletModePositioner::IsOurMonitor((TabletModePositioner *)(a1 - 152), a2) )
    return 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  v8 = *(_QWORD *)(a1 + 296);
  if ( !v8 || (a3 & 0x38) == 0 )
  {
LABEL_25:
    if ( (a3 & 0x10) != 0 )
    {
      v19 = TabletModePositioner::LayoutEnvironmentChanged(v7);
      if ( v19 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x762,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v19);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 48LL))(*(_QWORD *)(a1 + 160), a3);
    return 0LL;
  }
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, 2LL, &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *(_QWORD *)a2;
    v21 = 0;
    v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(v12 + 48))(a2, &v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 1291LL;
      goto LABEL_11;
    }
    if ( v21 )
    {
      v14 = *(_QWORD *)a2;
      v23 = 0LL;
      v15 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(v14 + 88))(a2, &v23);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x510,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v15);
      v22 = v23;
      v16 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int128 *, __int64))(*(_QWORD *)v20 + 56LL))(
              v20,
              a2,
              &v22,
              1LL);
      if ( v16 >= 0 )
        goto LABEL_23;
      v17 = 1297LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0
        || (v16 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v20 + 64LL))(v20, a2),
            v16 >= 0) )
      {
LABEL_23:
        v18 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_25;
      }
      v17 = 1302LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_23;
  }
  v11 = 1288LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v9);
  v13 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v10;
}
