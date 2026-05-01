/*
 * XREFs of ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800B96A0
 * Callers:
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1800B87C0 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800B8EA0 (std--_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT__ea_1800B8EA0.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800B9AC4 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800B9C3C (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x1800B9524 (-_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139@@@details@wil@@QEAA_NXZ @ 0x1800BA42C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_354.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039C760 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  PPIWin32VtcLayoutOperation *v4; // rcx
  char v5; // bl
  __int64 v6; // rax
  HWND v7; // r14
  DWORD WindowThreadProcessId; // esi
  PPIWin32VtcLayoutOperation *v9; // rcx
  int ViewThreadId; // eax
  struct IApplicationView *v11; // rdx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  struct IApplicationView *v16; // rdx
  wil::details::in1diag3 *v17; // rcx
  PPIWin32VtcLayoutOperation *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::GetImpl'::`2'::impl) )
  {
    v6 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)this + 216LL))(this);
    v7 = (HWND)v6;
    if ( a2
      && v6
      && !(*(unsigned __int8 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)this + 168LL))(
            this,
            a2) )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(v7, 0LL);
      ViewThreadId = PPIWin32VtcLayoutOperation::_GetViewThreadId(v9, a2, &v19);
      if ( ViewThreadId >= 0 )
      {
        if ( TabletModePositionerHelpers::IsOperableView(a2, v11) )
          return WindowThreadProcessId == v19;
        return v5;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        858LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)ViewThreadId);
      goto LABEL_19;
    }
    return 0;
  }
  if ( !a2 || !PPIWin32VtcLayoutOperation::_vtcSidebarView || PPIWin32VtcLayoutOperation::_vtcSidebarView == a2 )
    return 0;
  v13 = PPIWin32VtcLayoutOperation::_GetViewThreadId(v4, a2, &v19);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v14,
      874LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_20;
  }
  v15 = PPIWin32VtcLayoutOperation::_GetViewThreadId(retaddr, PPIWin32VtcLayoutOperation::_vtcSidebarView, &v20);
  v17 = retaddr;
  if ( v15 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v17,
      877LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x1800B97F8LL);
  }
  if ( TabletModePositionerHelpers::IsOperableView(a2, v16) )
    return v20 == v19;
  return v5;
}
