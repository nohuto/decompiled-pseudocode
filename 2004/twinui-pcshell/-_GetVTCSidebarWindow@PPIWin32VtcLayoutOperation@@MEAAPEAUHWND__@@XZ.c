/*
 * XREFs of ?_GetVTCSidebarWindow@PPIWin32VtcLayoutOperation@@MEAAPEAUHWND__@@XZ @ 0x1800B94F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPARAM __fastcall PPIWin32VtcLayoutOperation::_GetVTCSidebarWindow(PPIWin32VtcLayoutOperation *this)
{
  LPARAM lParam; // [rsp+38h] [rbp+10h] BYREF

  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_2aad9bc27b98765df586e5b2fc9f859e_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  return lParam;
}
