/*
 * XREFs of _IsModelessMenuNotificationWindow@4 @ 0x8F356
 * Callers:
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 * Callees:
 *     _GetpwndNotifypMenuState@4 @ 0x8F366 (_GetpwndNotifypMenuState@4.c)
 */

BOOL __thiscall IsModelessMenuNotificationWindow(void *this)
{
  int v1; // eax

  v1 = GetpwndNotifypMenuState(this);
  return v1 && (*(_DWORD *)(v1 + 4) & 0x100) != 0;
}
