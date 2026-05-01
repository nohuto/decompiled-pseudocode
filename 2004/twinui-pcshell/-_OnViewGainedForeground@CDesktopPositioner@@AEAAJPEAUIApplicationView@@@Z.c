/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800438BC
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180043DC0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180043254 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180043A64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180043BA0 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(CDesktopPositioner *this, struct IApplicationView *a2)
{
  char v4; // si
  int IsViewManaged; // eax
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  char v8; // r15
  char v9; // r12
  char v10; // r13
  unsigned __int64 WindowForView; // rax
  __int64 v12; // r8
  __int64 **v13; // rbx
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  char v17; // bl
  int v18; // eax
  __int64 *v19; // rbx
  int v21; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v23[2]; // [rsp+30h] [rbp-40h] BYREF
  char v24; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = 0;
  LODWORD(v22) = 0;
  IsViewManaged = CDesktopPositioner::_IsViewManaged(this, a2, (bool *)&v21);
  v7 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !(_BYTE)v21 )
      return 0LL;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                      v6);
    v22 = WindowForView;
    if ( WindowForView )
    {
      v13 = (__int64 **)((char *)this + 352);
      v14 = (__int64 *)*((_QWORD *)this + 44);
      v15 = (__int64 *)v14[1];
      if ( *((_BYTE *)v15 + 25) )
        goto LABEL_10;
      do
      {
        if ( v15[4] >= WindowForView )
        {
          v14 = v15;
          v15 = (__int64 *)*v15;
        }
        else
        {
          v15 = (__int64 *)v15[2];
        }
      }
      while ( !*((_BYTE *)v15 + 25) );
      if ( v14 == *v13 || WindowForView < v14[4] )
LABEL_10:
        v14 = *v13;
      if ( v14 != *v13 )
      {
        std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
          (__int64 *)this + 44,
          (__int64)v23,
          &v22);
        v8 = *(_BYTE *)(*(_QWORD *)&v23[0] + 40LL);
        std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
          (__int64 *)this + 44,
          (__int64)v23,
          &v22);
        v9 = *(_BYTE *)(*(_QWORD *)&v23[0] + 41LL);
        std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
          (__int64 *)this + 44,
          (__int64)v23,
          &v22);
        v10 = *(_BYTE *)(*(_QWORD *)&v23[0] + 42LL);
      }
    }
    LOBYTE(v12) = 3;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0LL,
      v12);
    if ( v8 )
    {
      v16 = *(_QWORD *)&v23[0];
    }
    else
    {
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, _OWORD *))a2)(
        a2,
        &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
        v23);
      v4 = 1;
      v16 = *(_QWORD *)&v23[0];
      if ( *(_QWORD *)&v23[0] )
      {
        v17 = 1;
        goto LABEL_16;
      }
    }
    v17 = 0;
LABEL_16:
    if ( (v4 & 1) != 0 && v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      DwmpTransitionWindow(v22, 93LL);
    v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x90A,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v18,
        v21);
      v19 = (__int64 *)((char *)this + 352);
    }
    else
    {
      v19 = (__int64 *)((char *)this + 352);
      std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
        (__int64 *)this + 44,
        (__int64)v23,
        &v22);
      *(_BYTE *)(*(_QWORD *)&v23[0] + 40LL) = 1;
    }
    if ( v9 )
    {
      DwmpEndTransitionRequest(93LL);
      std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(v19, (__int64)v23, &v22);
      *(_BYTE *)(*(_QWORD *)&v23[0] + 41LL) = 0;
    }
    if ( v10 )
    {
      v23[1] = AnimationClock_TabSwitch;
      v24 = 1;
      std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(v19, (__int64)v23, &v22);
      *(_BYTE *)(*(_QWORD *)&v23[0] + 42LL) = 0;
      v23[0] = AnimationClock_TabSwitch;
      DwmpEndAnimationClock(v23);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D7,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)IsViewManaged,
    v21);
  return v7;
}
