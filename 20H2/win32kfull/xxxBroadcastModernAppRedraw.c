/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C021E230
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C01064C0 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0127EC0 (HandleDisplayChangeForInactiveDesktops.c)
 */

void xxxBroadcastModernAppRedraw()
{
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
}
