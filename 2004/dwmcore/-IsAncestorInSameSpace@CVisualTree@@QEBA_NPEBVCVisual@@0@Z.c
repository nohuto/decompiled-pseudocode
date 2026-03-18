/*
 * XREFs of ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180003AA0
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180003730 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x180003B24 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C3914 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 */

char __fastcall CVisualTree::IsAncestorInSameSpace(
        const struct CVisual **this,
        const struct CVisual *a2,
        const struct CVisual *a3)
{
  CVisualTree *v5; // rcx
  bool v6; // r8
  char v7; // r11
  const struct CVisual **v8; // r10
  const struct CVisual **v9; // r10
  char IsPreserve3D; // al
  const struct CVisual *v11; // rdx
  char v12; // r9

  if ( CVisualTree::_IsInTree((CVisualTree *)this, a2, 0)
    && CVisualTree::_IsInTree(v5, a3, v6)
    && v8 != (const struct CVisual **)a3 )
  {
    CVisual::IsPreserve3D((CVisual *)v8, v8[10]);
    if ( v9 != (const struct CVisual **)this[7] )
    {
      do
      {
        IsPreserve3D = CVisual::IsPreserve3D((CVisual *)v9, v9[10]);
        if ( v12 != IsPreserve3D )
          break;
        if ( v11 == a3 )
          return 1;
        v9 = (const struct CVisual **)v11;
      }
      while ( v11 != this[7] );
    }
  }
  return v7;
}
