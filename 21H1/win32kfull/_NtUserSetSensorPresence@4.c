/*
 * XREFs of _NtUserSetSensorPresence@4 @ 0x169C45
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetSensorPresence(int a1)
{
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
    (*(void (__thiscall **)(PVOID, int))(*(_DWORD *)dword_274060 + 20))(dword_274060, a1);
  else
    UserSetLastError((struct _NT_TIB *)5);
  UserSessionSwitchLeaveCrit();
  return 1;
}
