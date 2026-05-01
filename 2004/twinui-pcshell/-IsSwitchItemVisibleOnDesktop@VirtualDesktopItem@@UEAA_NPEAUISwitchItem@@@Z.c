/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopItem@@UEAA_NPEAUISwitchItem@@@Z @ 0x18039FD70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsItemVisible@VirtualDesktopItem@@AEAAJPEAUISwitchItem@@PEA_N@Z @ 0x18039FF04 (-_IsItemVisible@VirtualDesktopItem@@AEAAJPEAUISwitchItem@@PEA_N@Z.c)
 */

bool __fastcall VirtualDesktopItem::IsSwitchItemVisibleOnDesktop(VirtualDesktopItem *this, struct ISwitchItem *a2)
{
  int IsItemVisible; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  IsItemVisible = VirtualDesktopItem::_IsItemVisible((VirtualDesktopItem *)((char *)this - 72), a2, &v5);
  if ( IsItemVisible < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
      (const char *)(unsigned int)IsItemVisible);
  return v5;
}
