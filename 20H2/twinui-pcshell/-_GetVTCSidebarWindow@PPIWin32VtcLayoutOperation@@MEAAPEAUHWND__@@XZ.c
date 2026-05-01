/*
 * XREFs of ?_GetVTCSidebarWindow@PPIWin32VtcLayoutOperation@@MEAAPEAUHWND__@@XZ @ 0x1800BACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPARAM __fastcall PPIWin32VtcLayoutOperation::_GetVTCSidebarWindow(PPIWin32VtcLayoutOperation *this)
{
  LPARAM lParam; // [rsp+38h] [rbp+10h] BYREF

  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_237953bbd44a78736f595b4714aaf9e4_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  return lParam;
}
