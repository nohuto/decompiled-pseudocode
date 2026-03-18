/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C011C044
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0115CE0 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C011C020 (EditionCancelCoolSwitch.c)
 *     EditionHandleAltTab @ 0x1C0126BE0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F5B40 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  __int64 *v2; // rax

  if ( gspwndAltTab )
    v0 = *((_QWORD *)gspwndAltTab + 2);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1u);
  v2 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
