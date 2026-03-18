/*
 * XREFs of _LeaveEditionCrit@0 @ 0xCCA50
 * Callers:
 *     _NtUserFindWindowEx@20 @ 0x2C716 (_NtUserFindWindowEx@20.c)
 *     _NtUserSetCursorIconData@16 @ 0x77412 (_NtUserSetCursorIconData@16.c)
 *     _NtUserRegisterRawInputDevices@12 @ 0xC95A2 (_NtUserRegisterRawInputDevices@12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall LeaveEditionCrit()
{
  return UserSessionSwitchLeaveCrit();
}
