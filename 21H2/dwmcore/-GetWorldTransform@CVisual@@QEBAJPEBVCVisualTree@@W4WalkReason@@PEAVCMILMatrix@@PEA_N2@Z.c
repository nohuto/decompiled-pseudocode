/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18002AE94 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004ADE0 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B314 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x180092FA0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x18018382C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801B67FC (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C5564 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x1801F70E8 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18020046C (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1802009E8 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x180200CD0 (-UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18020F3C0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1802368A0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x18004BF34 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18008AF48 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        bool *a5,
        struct CMILMatrix *a6)
{
  unsigned int v7; // edi
  struct CTreeData *TreeData; // rax
  unsigned int v12; // ecx
  struct CTreeData *v13; // rbp
  bool v14; // si
  char v16; // al
  char v17; // al
  bool v18; // [rsp+30h] [rbp-38h] BYREF

  v7 = 0;
  TreeData = CVisual::FindTreeData(a1, a2);
  v13 = TreeData;
  if ( TreeData )
  {
    v18 = 0;
    v14 = 0;
    if ( a3 != 5 || *((_QWORD *)TreeData + 34) && (unsigned __int8)CVisualTree::_IsInTree(a2, a1, 1LL) )
    {
      CVisual::EnsureWorldTransform(a1, a2, v13);
      CTreeData::GetWorldTransform(v13, (struct CMILMatrix *)a4, &v18, a6);
      v14 = v18;
    }
    else
    {
      *(_QWORD *)a4 = 1065353216LL;
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_DWORD *)(a4 + 16) = 0;
      *(_QWORD *)(a4 + 20) = 1065353216LL;
      *(_QWORD *)(a4 + 28) = 0LL;
      *(_DWORD *)(a4 + 36) = 0;
      *(_QWORD *)(a4 + 40) = 1065353216LL;
      *(_QWORD *)(a4 + 48) = 0LL;
      *(_DWORD *)(a4 + 56) = 0;
      *(_DWORD *)(a4 + 60) = 1065353216;
      v16 = *(_BYTE *)(a4 + 65) & 0xD7;
      *(_BYTE *)(a4 + 64) = 85;
      *(_BYTE *)(a4 + 65) = v16 | 0x17;
      if ( a6 )
      {
        *(_QWORD *)a6 = 1065353216LL;
        *((_QWORD *)a6 + 1) = 0LL;
        *((_DWORD *)a6 + 4) = 0;
        *(_QWORD *)((char *)a6 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a6 + 28) = 0LL;
        *((_DWORD *)a6 + 9) = 0;
        *((_QWORD *)a6 + 5) = 1065353216LL;
        *((_QWORD *)a6 + 6) = 0LL;
        *((_DWORD *)a6 + 14) = 0;
        *((_DWORD *)a6 + 15) = 1065353216;
        v17 = *((_BYTE *)a6 + 65) & 0xD7;
        *((_BYTE *)a6 + 64) = 85;
        *((_BYTE *)a6 + 65) = v17 | 0x17;
      }
    }
    if ( a5 )
      *a5 = v14;
  }
  else
  {
    v7 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003292412, 0x68Du, 0LL);
  }
  return v7;
}
