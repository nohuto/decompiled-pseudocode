/*
 * XREFs of _NtUserSetImeHotKey@20 @ 0xA636A
 * Callers:
 *     <none>
 * Callees:
 *     _SetImeHotKey@20 @ 0xA639E (_SetImeHotKey@20.c)
 */

int __stdcall NtUserSetImeHotKey(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi

  EnterCrit(0, 1);
  v5 = SetImeHotKey(a1, a2, a3, a4, a5);
  UserSessionSwitchLeaveCrit();
  return v5;
}
