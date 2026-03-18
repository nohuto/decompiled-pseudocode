/*
 * XREFs of _NtUserNotifyWinEvent@16 @ 0xA478E
 * Callers:
 *     <none>
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 */

int __stdcall NtUserNotifyWinEvent(unsigned int a1, int a2, unsigned int a3, struct tagWND *a4)
{
  int v4; // esi
  struct tagEVENTHOOK *v5; // eax

  v4 = 0;
  EnterSharedCrit(0, 1);
  v5 = (struct tagEVENTHOOK *)ValidateHwnd(a2);
  if ( v5 )
  {
    xxxWindowEvent(a1, v5, a3, a4, 1);
    v4 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
