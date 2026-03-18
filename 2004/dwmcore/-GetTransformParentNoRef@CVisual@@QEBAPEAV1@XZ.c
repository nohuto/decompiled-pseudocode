/*
 * XREFs of ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180006018
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800055D0 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180005FA0 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180021C10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019B560 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18019BCF8 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18019BD64 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019BDC0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x18019BF40 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x18019C028 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800A2B94 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 */

struct CVisual *__fastcall CVisual::GetTransformParentNoRef(CVisual *this)
{
  struct CVisual *result; // rax

  result = CVisual::GetTransformParentDataInternal(this);
  if ( result )
    return (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)result + 200LL))(*(_QWORD *)result);
  return result;
}
