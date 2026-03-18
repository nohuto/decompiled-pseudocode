/*
 * XREFs of _NtUserEnableWindowResizeOptimization@12 @ 0xE907E
 * Callers:
 *     <none>
 * Callees:
 *     _GreEnableWindowResizeOptimization@12 @ 0xE90AC (_GreEnableWindowResizeOptimization@12.c)
 */

int __stdcall NtUserEnableWindowResizeOptimization(int a1, int a2, int a3)
{
  int v3; // esi

  EnterCrit(0, 1);
  v3 = GreEnableWindowResizeOptimization(a3);
  UserSessionSwitchLeaveCrit();
  return v3;
}
