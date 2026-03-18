/*
 * XREFs of _DWP_GetEnabledPopupOffset@4 @ 0x1A1DFE
 * Callers:
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 * Callees:
 *     _DWP_GetEnabledPopup@4 @ 0x1A1D7D (_DWP_GetEnabledPopup@4.c)
 */

int __stdcall DWP_GetEnabledPopupOffset(_DWORD *a1)
{
  _DWORD *EnabledPopup; // eax

  EnabledPopup = DWP_GetEnabledPopup(a1);
  if ( EnabledPopup )
    return EnabledPopup[6];
  else
    return 0;
}
