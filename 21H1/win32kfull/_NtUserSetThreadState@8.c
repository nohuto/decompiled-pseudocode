/*
 * XREFs of _NtUserSetThreadState@8 @ 0xAE8CE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetThreadState(int a1, int a2)
{
  int v2; // esi

  v2 = 1;
  EnterCrit(0, 1);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    v2 = 0;
    UserSetLastError((struct _NT_TIB *)0xC000000D);
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) ^= a2 & (a1 ^ *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284));
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
