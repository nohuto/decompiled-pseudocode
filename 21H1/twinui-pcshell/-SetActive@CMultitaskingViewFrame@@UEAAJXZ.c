/*
 * XREFs of ?SetActive@CMultitaskingViewFrame@@UEAAJXZ @ 0x180379EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetActive(HWND *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( SetForegroundWindow(this[5]) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F1,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x80070005LL);
  return 2147942405LL;
}
