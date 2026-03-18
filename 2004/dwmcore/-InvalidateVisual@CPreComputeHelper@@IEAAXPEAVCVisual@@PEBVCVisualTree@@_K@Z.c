/*
 * XREFs of ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18019BD64
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180003730 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x18019BF40 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x18019C028 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180006018 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CPreComputeHelper::InvalidateVisual(
        CPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisualTree *a3,
        __int64 *a4)
{
  __int64 **TreeData; // rax

  if ( CVisual::GetTransformParentNoRef(a2) )
  {
    TreeData = CVisual::FindTreeData(a2, a3);
    if ( TreeData )
    {
      TreeData[15] = 0LL;
      *((_BYTE *)TreeData + 18) = 1;
      TreeData[35] = a4;
    }
  }
}
