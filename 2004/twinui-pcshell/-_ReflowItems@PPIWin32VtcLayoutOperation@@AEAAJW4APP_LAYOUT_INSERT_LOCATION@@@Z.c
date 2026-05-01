/*
 * XREFs of ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800BA098
 * Callers:
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800B90E0 (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z @ 0x1800B7344 (--$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z.c)
 *     ?PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z @ 0x1800B8440 (-PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z.c)
 *     ?_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ @ 0x1800B95F4 (-_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1803F95E8 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x1804014A4 (-get@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::_ReflowItems(PPIWin32VtcLayoutOperation *a1, int a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v8; // edi
  int v9; // eax
  struct IApplicationView *v10; // rdx
  unsigned int v11; // ebx
  int WindowForView; // ebx
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // rcx
  TabletModeTelemetry *v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-89h] BYREF
  ApplicationViewHelpers *v18; // [rsp+28h] [rbp-81h] BYREF
  __int128 v19; // [rsp+30h] [rbp-79h]
  __int128 v20; // [rsp+40h] [rbp-69h]
  __int64 v21; // [rsp+50h] [rbp-59h]
  __int64 (__fastcall **v22)(); // [rsp+60h] [rbp-49h] BYREF
  __int128 v23; // [rsp+68h] [rbp-41h]
  __int128 v24; // [rsp+78h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 (__fastcall ***v26)(); // [rsp+98h] [rbp-11h]
  __int64 (__fastcall ***v27)(); // [rsp+A0h] [rbp-9h]
  _DWORD v28[2]; // [rsp+A8h] [rbp-1h] BYREF
  int v29; // [rsp+B0h] [rbp+7h]
  int v30; // [rsp+B4h] [rbp+Bh]
  _DWORD v31[10]; // [rsp+B8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v6 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)a1 + 88LL))(a1, 1LL);
  if ( v6 )
  {
    (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, _DWORD *))(*(_QWORD *)a1 + 152LL))(a1, v31);
    v8 = v31[2] - v31[0];
    v28[0] = v31[0];
    v28[1] = v31[1];
    v30 = v31[3];
    if ( a2 == 1 && v6 == 1 )
      v29 = v8 - PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(a1);
    else
      v29 = 0;
    v17 = 0;
    v18 = 0LL;
    v27 = &v22;
    *(_QWORD *)&v19 = a1;
    *((_QWORD *)&v19 + 1) = &v18;
    *(_QWORD *)&v20 = &v17;
    *((_QWORD *)&v20 + 1) = v28;
    v21 = v8 | 0x400000000LL;
    v22 = off_180496FB0;
    v23 = v19;
    v24 = v20;
    v25 = v21;
    v26 = &v22;
    v9 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 176LL))(
           a1,
           *((_QWORD *)a1 + 8),
           &v22);
    v11 = v9;
    if ( v9 >= 0 )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v18,
                        v10);
      if ( TabletModeTelemetry::IsEnabled(v14, v13) )
      {
        wil::details::static_lazy<TabletModeTelemetry>::get(
          v15,
          _lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_);
        TabletModeTelemetry::PPIWin32VtcSideBarLayoutItemsReflowed_(v16, WindowForView, v17, a2 == 1);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D3,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v9);
      return v11;
    }
  }
  else
  {
    TabletModeTelemetry::PPIWin32VtcSideBarError<unsigned short const (&)[49]>(v5, v4);
    return 2147647529LL;
  }
}
