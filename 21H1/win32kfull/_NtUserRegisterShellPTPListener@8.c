/*
 * XREFs of _NtUserRegisterShellPTPListener@8 @ 0xE8246
 * Callers:
 *     <none>
 * Callees:
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __RegisterShellPTPListener@8 @ 0xE82D0 (__RegisterShellPTPListener@8.c)
 */

int __stdcall NtUserRegisterShellPTPListener(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( IsShellProcess(*(_DWORD **)(_gptiCurrent + 232)) )
    {
      if ( a2 && ((v4 = *(_DWORD *)(v3 + 20), *(char *)(v4 + 12) < 0) || *(char *)(v4 + 11) < 0)
        || *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232) != PsGetCurrentProcessWin32Process() )
      {
        UserSetLastError((struct _NT_TIB *)0x57);
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      else
      {
        v2 = _RegisterShellPTPListener(v3, a2);
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
