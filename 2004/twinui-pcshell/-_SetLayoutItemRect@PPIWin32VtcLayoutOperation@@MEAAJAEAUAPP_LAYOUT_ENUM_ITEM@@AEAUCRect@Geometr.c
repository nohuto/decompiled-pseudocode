/*
 * XREFs of ?_SetLayoutItemRect@PPIWin32VtcLayoutOperation@@MEAAJAEAUAPP_LAYOUT_ENUM_ITEM@@AEAUCRect@Geometry@@@Z @ 0x1800BA300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_SetLayoutItemRect(
        PPIWin32VtcLayoutOperation *this,
        struct APP_LAYOUT_ENUM_ITEM *a2,
        struct Geometry::CRect *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v5 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2)(
         *(_QWORD *)a2,
         &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, struct Geometry::CRect *))(*(_QWORD *)v9 + 104LL))(v9, 0LL, a3);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v6;
}
