/*
 * XREFs of ?WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB2BEC
 * Callers:
 *     ?TestWindowForCompositionTarget@@YGJPAUHWND__@@H@Z @ 0xB2B2C (-TestWindowForCompositionTarget@@YGJPAUHWND__@@H@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z @ 0xB2C26 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z.c)
 *     ?HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z @ 0xF578A (-HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z.c)
 */

BOOL __fastcall WindowHasCompositionTarget(int a1, int a2)
{
  int v3; // edi

  v3 = 0;
  if ( CWindowProp::GetProp<CHwndTargetProp>() )
    return CHwndTargetProp::HasSystemVisual(0, a2 != 0 ? 0 : 2) != 0;
  return v3;
}
