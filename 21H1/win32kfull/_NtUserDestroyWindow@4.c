/*
 * XREFs of _NtUserDestroyWindow@4 @ 0xA7102
 * Callers:
 *     <none>
 * Callees:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 */

BOOL __stdcall NtUserDestroyWindow(int a1)
{
  BOOL v1; // esi
  struct tagVWPL **v2; // eax

  v1 = 0;
  EnterCrit(0, 1);
  v2 = (struct tagVWPL **)ValidateHwnd(a1);
  if ( v2 )
    v1 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit();
  return v1;
}
