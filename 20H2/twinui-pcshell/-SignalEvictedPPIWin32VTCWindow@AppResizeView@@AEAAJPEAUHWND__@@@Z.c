/*
 * XREFs of ?SignalEvictedPPIWin32VTCWindow@AppResizeView@@AEAAJPEAUHWND__@@@Z @ 0x1800BC384
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180411EEC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppResizeView::SignalEvictedPPIWin32VTCWindow(AppResizeView *this, HWND a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x29B,
             (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
             v2);
}
