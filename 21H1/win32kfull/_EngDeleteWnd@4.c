/*
 * XREFs of _EngDeleteWnd@4 @ 0x1E6EA9
 * Callers:
 *     <none>
 * Callees:
 *     _UserAssociateHwnd@8 @ 0x154249 (_UserAssociateHwnd@8.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 */

void __stdcall EngDeleteWnd(WNDOBJ *pwo)
{
  LONG bottom; // ecx

  if ( UserIsUserCritSecIn() )
  {
    bottom = pwo[2].rclClient.bottom;
    if ( bottom )
      UserAssociateHwnd(bottom, 0);
    GreDeleteWnd((EWNDOBJ *)pwo);
  }
}
