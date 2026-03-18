/*
 * XREFs of ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000F270 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000F744 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180037C10 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A99C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CDropShadow::GetBrushParameters(CDropShadow *this, struct CBrushDrawListGenerator *a2)
{
  struct CDrawingContext *v4; // rsi
  struct CVisual *CurrentVisual; // rax
  float *EffectiveShadowIntermediates; // rax
  float v7; // xmm2_4
  float v8; // xmm2_4
  int v9; // xmm1_4
  __int128 v10; // xmm0
  float v11; // xmm3_4
  unsigned int v12; // ecx
  int ShadowOpacityBrush; // edi
  struct CDrawListBrush *v14; // rdx
  __int64 v15; // rcx
  struct CDrawListBrush *v17[2]; // [rsp+30h] [rbp-20h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  struct CDrawListBrush *v19; // [rsp+60h] [rbp+10h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v4 = *(struct CDrawingContext **)a2;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*(_QWORD *)a2 + 24LL));
  EffectiveShadowIntermediates = (float *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual);
  v7 = EffectiveShadowIntermediates[12] * *((float *)this + 25);
  if ( v7 >= 1.0 )
  {
    v10 = *((_OWORD *)this + 5);
  }
  else
  {
    v8 = v7 * *((float *)this + 23);
    v9 = *((_DWORD *)this + 21);
    LODWORD(v17[0]) = *((_DWORD *)this + 20);
    LODWORD(v17[1]) = *((_DWORD *)this + 22);
    *((float *)&v17[1] + 1) = v8;
    HIDWORD(v17[0]) = v9;
    v10 = *(_OWORD *)v17;
  }
  *(_OWORD *)((char *)a2 + 20) = v10;
  *((_BYTE *)a2 + 76) = 0;
  v11 = *((float *)this + 24);
  v19 = 0LL;
  v17[1] = 0LL;
  v18 = 1;
  ShadowOpacityBrush = CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
                         (CDropShadow::ShadowIntermediates *)EffectiveShadowIntermediates,
                         v4,
                         (const struct D2D_SIZE_F *)a2 + 1,
                         v11,
                         &v17[1]);
  if ( v18 )
  {
    v12 = (unsigned int)v17[1];
    v14 = v19;
    v19 = v17[1];
    if ( v14 )
      std::default_delete<CShape>::operator()(v17[1], v14);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShadowOpacityBrush, 0x140u, 0LL);
  }
  else
  {
    if ( !v19 )
      goto LABEL_11;
    CBrushDrawListGenerator::AttachInput(a2, 1LL, &v19);
  }
  if ( v19 )
    std::default_delete<CShape>::operator()(v15, v19);
LABEL_11:
  if ( ShadowOpacityBrush < 0 )
    CBrushDrawListGenerator::Reset(a2);
  return (unsigned int)ShadowOpacityBrush;
}
