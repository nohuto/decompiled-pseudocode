/*
 * XREFs of ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x1801F863C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180045FA0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800DEB38 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetPixelSnappingEnabled(CVisual *this, char a2)
{
  __int64 v2; // r11

  if ( (*((_BYTE *)this + 102) & 1) != a2 )
  {
    *((_BYTE *)this + 102) = a2 | *((_BYTE *)this + 102) & 0xFE;
    CVisual::OnInnerTransformChanged(this);
    CVisual::PropagateFlags(v2, 5u);
  }
}
