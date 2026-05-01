/*
 * XREFs of ?FindCallMonitorAndSharingToolBar@PPIWin32VtcLayoutOperation@@UEAAJPEAPEAUHWND__@@0@Z @ 0x1800B7ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x1800B9524 (-_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139@@@details@wil@@QEAA_NXZ @ 0x1800BA42C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_354.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::FindCallMonitorAndSharingToolBar(
        PPIWin32VtcLayoutOperation *this,
        HWND *a2,
        HWND *a3)
{
  PPIWin32VtcLayoutOperation *v6; // rcx
  HWND v7; // rax
  DWORD WindowThreadProcessId; // eax
  int ViewThreadId; // eax
  unsigned int v10; // ebx
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v14 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::GetImpl'::`2'::impl) )
  {
    v7 = (HWND)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 216LL))((char *)this - 176);
    if ( !v7 )
      return 2147943568LL;
    WindowThreadProcessId = GetWindowThreadProcessId(v7, 0LL);
  }
  else
  {
    if ( !PPIWin32VtcLayoutOperation::_vtcSidebarView )
      return 2147943568LL;
    ViewThreadId = PPIWin32VtcLayoutOperation::_GetViewThreadId(v6, PPIWin32VtcLayoutOperation::_vtcSidebarView, &v14);
    v10 = ViewThreadId;
    if ( ViewThreadId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)ViewThreadId);
      return v10;
    }
    WindowThreadProcessId = v14;
  }
  if ( WindowThreadProcessId )
  {
    lParam[0] = (LPARAM)a2;
    lParam[1] = (LPARAM)a3;
    EnumThreadWindows(
      WindowThreadProcessId,
      (WNDENUMPROC)lambda_19fa672f96dcf57a0fd0c24f9d8c8782_::_lambda_invoker_cdecl_,
      (LPARAM)lParam);
    if ( *a2 || *a3 )
      return 0LL;
  }
  return 2147943568LL;
}
