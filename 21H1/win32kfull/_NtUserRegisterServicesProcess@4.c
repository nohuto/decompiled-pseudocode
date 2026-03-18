/*
 * XREFs of _NtUserRegisterServicesProcess@4 @ 0x1681AA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 */

int __stdcall NtUserRegisterServicesProcess(int a1)
{
  int v1; // esi

  v1 = 1;
  EnterCrit(0, 1);
  if ( *(_DWORD *)(_gpsi + 1880) || !IsPrivileged(_psTcb) )
  {
    v1 = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
  else
  {
    *(_DWORD *)(_gpsi + 1880) = a1;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
