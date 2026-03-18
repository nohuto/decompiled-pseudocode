/*
 * XREFs of HideMouseTrails @ 0x1C01D4E30
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < SLODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
}
