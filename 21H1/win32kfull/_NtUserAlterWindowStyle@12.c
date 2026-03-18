/*
 * XREFs of _NtUserAlterWindowStyle@12 @ 0xD47EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserAlterWindowStyle(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v4 + 8) + 232) == PsGetCurrentProcessWin32Process() )
      *(_DWORD *)(*(_DWORD *)(v4 + 20) + 20) = a3 & a2 & 0x30023F | *(_DWORD *)(*(_DWORD *)(v4 + 20) + 20) & ~(a2 & 0x30023F);
    v3 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
