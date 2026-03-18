/*
 * XREFs of ?HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z @ 0xF578A
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 *     ?WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB2BEC (-WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z @ 0xE0D90 (-ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall CHwndTargetProp::HasSystemVisual(_DWORD *this, int a2)
{
  return this[2 * a2 + 2] != 0;
}
