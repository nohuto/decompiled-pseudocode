/*
 * XREFs of _IsWindowEffectivelyCloaked@4 @ 0xAB818
 * Callers:
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _IsWindowHolographicForHitTest@4 @ 0x268C0 (_IsWindowHolographicForHitTest@4.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

int __thiscall IsWindowEffectivelyCloaked(_DWORD *this)
{
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // eax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
  if ( TopLevelWindow )
    this = (_DWORD *)TopLevelWindow;
  if ( IsWindowHolographicForHitTest(this) )
    return 0;
  else
    return GetWindowCloakState(this);
}
