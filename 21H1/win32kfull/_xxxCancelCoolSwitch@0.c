/*
 * XREFs of _xxxCancelCoolSwitch@0 @ 0x15D2FA
 * Callers:
 *     _EditionHandleAltTabCancel@32 @ 0xACBB8 (_EditionHandleAltTabCancel@32.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     _EditionCancelCoolSwitch@4 @ 0x15D016 (_EditionCancelCoolSwitch@4.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 */

int __stdcall xxxCancelCoolSwitch()
{
  int v0; // edx
  struct tagVWPL **v1; // eax

  if ( gspwndAltTab )
    v0 = *(_DWORD *)(gspwndAltTab + 8);
  else
    v0 = 0;
  if ( v0 != _gptiCurrent )
    return 0;
  xxxWindowEvent(0x15u, (struct tagEVENTHOOK *)gspwndAltTab, 0xFFFFFFFC, 0, 1);
  v1 = (struct tagVWPL **)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v1 )
    return 0;
  xxxDestroyWindow(v1);
  return 1;
}
