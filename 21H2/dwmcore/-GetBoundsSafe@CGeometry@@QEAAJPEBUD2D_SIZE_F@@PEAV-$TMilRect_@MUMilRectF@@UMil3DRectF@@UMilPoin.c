/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008ECB8
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800934F0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800E2A10 (-DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *a1, const struct D2D_SIZE_F *a2, _OWORD *a3)
{
  int ShapeData; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+38h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v12 = 0LL;
  v13 = 0;
  ShapeData = CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v12);
  v6 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, ShapeData, 0x62u);
    goto LABEL_15;
  }
  v7 = v12;
  v8 = -2003292412;
  if ( !v12 )
    goto LABEL_5;
  v9 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), _OWORD *, _QWORD))(*v12)[6])(v12, a3, 0LL);
  v8 = v9;
  v6 = v9;
  if ( v9 >= 0 )
  {
    v7 = v12;
LABEL_5:
    v6 = v8;
    if ( v8 >= 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x140u);
LABEL_13:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0LL, v8, 0x63u);
LABEL_15:
  v7 = v12;
LABEL_6:
  if ( v6 == -2003304438 )
  {
    v6 = 0;
    v14 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v13 && v7 )
    (**v7)(v7, 1LL);
  return v6;
}
