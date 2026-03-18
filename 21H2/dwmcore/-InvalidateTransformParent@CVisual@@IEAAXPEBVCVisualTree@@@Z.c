/*
 * XREFs of ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1801F7950
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z @ 0x1800A55E0 (-UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisual::InvalidateTransformParent(CVisual *this, const struct CVisualTree *a2)
{
  struct CTreeData *v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rax

  if ( this != *((CVisual **)a2 + 8) )
  {
    v3 = CVisual::EnsureTreeData(this, a2);
    v4 = *((_QWORD *)v3 + 35);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 36) + 16LL) + 496LL);
    if ( v4 != v5 )
    {
      *((_QWORD *)v3 + 35) = v5;
      if ( v4 != v5 - 1 )
      {
        CVisual::PropagateFlags((__int64)this, 5u);
        *((_BYTE *)v3 + 186) = 1;
      }
    }
  }
}
