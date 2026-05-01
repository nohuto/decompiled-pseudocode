/*
 * XREFs of ?GetPosition@CMultitaskingViewFrame@@UEAAJPEAUtagRECT@@@Z @ 0x18039A470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewFrame::GetPosition(HWND *this, struct tagRECT *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( GetWindowRect(this[5], a2) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1EB,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
             v2);
}
