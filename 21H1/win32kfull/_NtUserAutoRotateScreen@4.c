/*
 * XREFs of _NtUserAutoRotateScreen@4 @ 0x15FABC
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserAutoRotateScreen(int a1)
{
  int v1; // esi
  int v2; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess() != _gpepCSRSS
    || ((*(_DWORD *)(_gptiCurrent + 264) & 0x20000000) == 0
      ? (v2 = 0)
      : (v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 416) + 12) & 0x10),
        v2) )
  {
    v1 = -1;
    UserSetLastError((struct _NT_TIB *)5);
  }
  else
  {
    v1 = (*(int (__thiscall **)(PVOID, int))(*(_DWORD *)dword_274060 + 28))(dword_274060, a1);
  }
  LeaveCrit();
  return v1;
}
