/*
 * XREFs of ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180012D10
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18001263C (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1801AD838 (-IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180012D88 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B6AF0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  __int64 v4; // rbx
  struct CVisual *TransformParentNoRef; // rax
  CVisual *v9; // rcx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v12; // r8

  v4 = 0LL;
  *a4 = 0;
  if ( this != *((CVisual **)a2 + 7) )
  {
    if ( *((_BYTE *)a3 + 18) && (CurrentFrameId = GetCurrentFrameId(), *(_QWORD *)(v12 + 280) == CurrentFrameId)
      || (TransformParentNoRef = CVisual::GetTransformParentNoRef(this)) == 0LL )
    {
      v9 = (CVisual *)*((_QWORD *)this + 10);
    }
    else
    {
      *a4 = 1;
      v9 = TransformParentNoRef;
    }
    return CVisual::FindTreeData(v9, a2);
  }
  return (const struct CTreeData *)v4;
}
