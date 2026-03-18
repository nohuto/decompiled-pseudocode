/*
 * XREFs of _NtUserSetProcessRestrictionExemption@4 @ 0x169BAB
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetProcessRestrictionExemption(int a1)
{
  int v1; // esi
  int CurrentProcessWin32Process; // eax

  v1 = 1;
  EnterCrit(0, 1);
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    *(_DWORD *)(CurrentProcessWin32Process + 464) ^= (*(_DWORD *)(CurrentProcessWin32Process + 464) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    v1 = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
