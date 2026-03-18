/*
 * XREFs of _NtUserSetAutoRotation@4 @ 0x1687A1
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 */

int __stdcall NtUserSetAutoRotation(int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = 0;
  EnterCrit(0, 1);
  v2 = (*(int (__thiscall **)(PVOID, int))(*(_DWORD *)dword_274060 + 24))(dword_274060, a1);
  if ( v2 < 0 )
    UserSetLastStatus(v2, 1);
  else
    v1 = 1;
  UserSessionSwitchLeaveCrit();
  return v1;
}
