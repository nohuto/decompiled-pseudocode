/*
 * XREFs of ?GetTopLevelTabEligibleWindowFromProcess@@YAPEAUHWND__@@KPEAU1@PEAUIVirtualDesktopManager@@@Z @ 0x1802614B4
 * Callers:
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x180260A48 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelTabEligibleWindowFromProcess(int a1, HWND a2, struct IVirtualDesktopManager *a3)
{
  LPARAM lParam[4]; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp+10h] BYREF
  HWND v6; // [rsp+58h] [rbp+18h] BYREF
  struct IVirtualDesktopManager *v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF

  v7 = a3;
  v6 = a2;
  v5 = a1;
  v8 = 0LL;
  lParam[0] = (LPARAM)&v5;
  lParam[1] = (LPARAM)&v6;
  lParam[2] = (LPARAM)&v7;
  lParam[3] = (LPARAM)&v8;
  EnumWindows((WNDENUMPROC)lambda_a79dac1be2c40788dead125dd22402f9_::_lambda_invoker_cdecl_, (LPARAM)lParam);
  return v8;
}
