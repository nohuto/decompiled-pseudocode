/*
 * XREFs of ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18019A078
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180004F40 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180023160 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180012D88 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B6AF0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800D54CC (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 */

void __fastcall CPreComputeHelper::ClearResolvingFlagsFromStack(CPreComputeHelper *this, const struct CVisualTree *a2)
{
  int *v2; // rdi
  __int64 **TreeData; // rbx
  CVisual *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (int *)((char *)this + 8);
  while ( CWatermarkStack<CVisual *,64,2,10>::Pop(v2, &v5) )
  {
    TreeData = CVisual::FindTreeData(v5, a2);
    if ( CVisual::GetTransformParentNoRef(v5) )
      *((_BYTE *)TreeData + 19) = 0;
  }
}
