/*
 * XREFs of _NtUserSetClassWord@12 @ 0x168B81
 * Callers:
 *     <none>
 * Callees:
 *     __SetClassWord@12 @ 0x15472A (__SetClassWord@12.c)
 */

int __stdcall NtUserSetClassWord(int a1, signed int a2, __int16 a3)
{
  unsigned __int16 v3; // si
  unsigned int v4; // eax

  v3 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
    v3 = _SetClassWord(v4, a2, a3);
  UserSessionSwitchLeaveCrit();
  return v3;
}
