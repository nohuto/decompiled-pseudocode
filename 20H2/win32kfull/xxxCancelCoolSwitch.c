/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C011D004
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0117230 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C011CFE0 (EditionCancelCoolSwitch.c)
 *     EditionHandleAltTab @ 0x1C01285A0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F4ED0 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  unsigned __int64 v2; // rax

  if ( gspwndAltTab )
    v0 = *((_QWORD *)gspwndAltTab + 2);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1u);
  v2 = HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
