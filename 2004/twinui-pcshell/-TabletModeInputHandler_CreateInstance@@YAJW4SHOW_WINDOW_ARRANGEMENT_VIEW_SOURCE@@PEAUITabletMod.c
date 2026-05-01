/*
 * XREFs of ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x180414C04
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x180402C20 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x180403030 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x18041472C (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1804148C0 (-InternalRelease@-$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeInputHandler_CreateInstance(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  TabletModeInputHandler *v10; // rcx
  TabletModeInputHandler *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  TabletModeInputHandler *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease((__int64 *)&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<TabletModeInputHandler,TabletModeInputHandler,enum SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE &,ITabletModeInputCallback * &>(
         &v16,
         &v14,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 181LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeinputhandler.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_99b8fb78_443a_4d60_9b48_66d509e3ce21, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(TabletModeInputHandler *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v16;
    *a4 = v16;
    v6 = 0;
    (*(void (__fastcall **)(TabletModeInputHandler *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 182LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
