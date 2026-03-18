/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z @ 0xB2C26
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 *     ?WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB2BEC (-WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 *     ?_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB522A (-_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z @ 0xE0D90 (-ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

BOOL __fastcall CWindowProp::GetProp<CHwndTargetProp>(int a1, int *a2)
{
  int Prop; // eax

  Prop = _GetProp(a1, CHwndTargetProp::s_atom, 1);
  *a2 = Prop;
  return Prop != 0;
}
