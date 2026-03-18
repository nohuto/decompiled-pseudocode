/*
 * XREFs of NtUserEnableWindowResizeOptimization @ 0x1C0129920
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableWindowResizeOptimization @ 0x1C0129980 (GreEnableWindowResizeOptimization.c)
 */

__int64 __fastcall NtUserEnableWindowResizeOptimization(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  EnterCrit(0LL, 1LL);
  v6 = (int)GreEnableWindowResizeOptimization(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v6;
}
