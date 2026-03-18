/*
 * XREFs of ?KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z @ 0x12D78
 * Callers:
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z @ 0x1A08F8 (-SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

void __thiscall KillTooltipTimer(_DWORD *this)
{
  if ( this[6] )
  {
    this[6] = 0;
    FindTimer(2, 1, 0);
  }
}
