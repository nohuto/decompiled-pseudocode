/*
 * XREFs of _DSW_GetTopLevelCreatorWindow@4 @ 0xAEF2E
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DSW_GetTopLevelCreatorWindow(int a1)
{
  if ( a1 )
  {
    while ( *(_DWORD *)(a1 + 64) )
      a1 = *(_DWORD *)(a1 + 64);
  }
  return a1;
}
