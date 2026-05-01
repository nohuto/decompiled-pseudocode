/*
 * XREFs of ?HideWindowArrangementView@TabletModeViewManagerProxy@@UEAAJXZ @ 0x180383E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TabletModeViewManagerProxy::HideWindowArrangementView(TabletModeViewManagerProxy *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
