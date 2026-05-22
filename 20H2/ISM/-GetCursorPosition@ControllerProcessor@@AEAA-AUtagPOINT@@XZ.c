/*
 * XREFs of ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180120888
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FA34 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180120120 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x1801214B0 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x1801224BC (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801228F0 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180122EF4 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1801233A4 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x1801234F4 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

struct tagPOINT __fastcall ControllerProcessor::GetCursorPosition(ControllerProcessor *this, struct tagPOINT *a2)
{
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( IsEdition(8778LL) )
  {
    GetCursorPos(a2);
  }
  else
  {
    v5 = *((_QWORD *)this + 936);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, LONG *))(*(_QWORD *)v5 + 32LL))(v5, a2, &a2->y);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1339LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v6);
        JUMPOUT(0x180120906LL);
      }
    }
  }
  return (struct tagPOINT)a2;
}
