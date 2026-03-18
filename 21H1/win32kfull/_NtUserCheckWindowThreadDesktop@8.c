/*
 * XREFs of _NtUserCheckWindowThreadDesktop@8 @ 0x1601A2
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetConsoleDesktop@16 @ 0x154940 (_GetConsoleDesktop@16.c)
 */

int __stdcall NtUserCheckWindowThreadDesktop(int a1, void **a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    v4 = PtiFromThreadId(a2);
    if ( v4 )
    {
      v2 = ValidatePwndDesktop(v3, v4);
    }
    else
    {
      v7 = 0;
      a1 = 0;
      if ( GetConsoleDesktop(a2, &v6, &a1, &v7) < 0 )
        UserSetLastError((struct _NT_TIB *)0x57);
      else
        LOBYTE(v2) = *(_DWORD *)(v3 + 12) == a1;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
