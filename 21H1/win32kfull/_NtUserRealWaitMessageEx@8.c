/*
 * XREFs of _NtUserRealWaitMessageEx@8 @ 0x167EF0
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserRealWaitMessageEx(int a1, int a2)
{
  int v2; // esi

  v2 = 0;
  EnterCrit(0, 1);
  if ( (a1 & 0xFFFFA200) != 0 )
    UserSetLastError((struct _NT_TIB *)0x3EC);
  else
    v2 = xxxSleepThread2(1u, 0, 0);
  UserSessionSwitchLeaveCrit();
  return v2;
}
