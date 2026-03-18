/*
 * XREFs of _NtUserShowCursor@4 @ 0xAE9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzShowCursor@@YGH_N@Z @ 0xAEA1C (-zzzShowCursor@@YGH_N@Z.c)
 */

int __stdcall NtUserShowCursor(int a1)
{
  int v1; // esi
  bool v3; // [esp+0h] [ebp-4h]

  EnterCrit(0, 1);
  v1 = zzzShowCursor(v3);
  UserSessionSwitchLeaveCrit();
  return v1;
}
