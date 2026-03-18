/*
 * XREFs of ?MKHideMouseCursor@@YAXXZ @ 0x1C002F1E0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C002DD30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0184120 (-TurnOffMouseKeys@@YAXXZ.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C0058740 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void MKHideMouseCursor(void)
{
  if ( (gdwPUDFlags & 0x1000) != 0 )
  {
    gdwGTERMFlags &= ~1u;
    gdwPUDFlags &= ~0x1000u;
    *((_DWORD *)gpsi + 493) = 0;
    *((_DWORD *)gpsi + 517) = 0;
    SetGlobalCursorLevel(-1);
  }
}
