/*
 * XREFs of ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x18019EBD8
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180003930 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18000573C (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18007D234 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800CDDAC (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18019E914 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x18019ECC4 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CPreComputeHelper::ResolveTransformParentOrphan(
        CPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 *a3,
        struct CVisual **a4)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  int v9; // eax
  __int64 v10; // rcx
  CVisual *v11; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  CPreComputeHelper *v13; // rcx
  __int64 v14; // r10
  CVisual *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (int *)((char *)this + 8);
  v16 = 0LL;
  *a4 = 0LL;
  while ( *v5 )
  {
    v9 = CWatermarkStack<CVisual *,64,2,10>::Top(v5, &v16);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x123u, 0LL);
      return v4;
    }
    v11 = v16;
    if ( CVisual::GetTransformParentNoRef(v16) )
    {
      CVisual::FindTreeData(v11, a2);
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v11);
      *(_BYTE *)(v14 + 19) = 0;
      if ( *((_BYTE *)TransformParentDataInternal + 8) )
      {
        if ( !*(_BYTE *)(v14 + 18) || *(__int64 **)(v14 + 280) != a3 )
        {
          CPreComputeHelper::InvalidateVisual(v13, v11, a2, a3);
          *a4 = v11;
          return v4;
        }
      }
    }
    CWatermarkStack<CVisual *,64,2,10>::Pop(v5, 0LL);
  }
  return v4;
}
