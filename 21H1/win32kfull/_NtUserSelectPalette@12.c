/*
 * XREFs of _NtUserSelectPalette@12 @ 0x9AAC8
 * Callers:
 *     <none>
 * Callees:
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 */

int __stdcall NtUserSelectPalette(int a1, int a2, int a3)
{
  int v3; // esi

  EnterCrit(0, 1);
  v3 = _SelectPalette(a1, a2, a3);
  UserSessionSwitchLeaveCrit();
  return v3;
}
