/*
 * XREFs of ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1801AF748
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180075FB0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180005FA0 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 */

char __fastcall CVisual::IsWorldTransformNewForCurrentFrame(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3)
{
  unsigned __int64 CurrentFrameId; // rax
  const struct CVisualTree *v5; // rdx
  struct CTreeData *v6; // r8
  CVisual *v7; // r10
  char v8; // bl
  const struct CTreeData *ParentTreeData; // rax
  bool v11; // [rsp+40h] [rbp+18h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  if ( *((_QWORD *)v6 + 15) == CurrentFrameId )
    return 1;
  v8 = 0;
  ParentTreeData = CVisual::GetParentTreeData(v7, v5, v6, &v11);
  if ( !ParentTreeData || *((_QWORD *)a3 + 15) < *((_QWORD *)ParentTreeData + 15) )
    return 1;
  return v8;
}
