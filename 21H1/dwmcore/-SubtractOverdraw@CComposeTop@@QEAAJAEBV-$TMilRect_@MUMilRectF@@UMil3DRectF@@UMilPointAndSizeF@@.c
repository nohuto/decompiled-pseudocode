/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD940
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180013B38 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180095D9C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800C7F80 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??4?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A1DE4 (--4-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801FD88C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, __int64 a2)
{
  int v2; // edi
  int *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct CShape *v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  __int64 v11; // rcx
  struct CShape *v13; // [rsp+30h] [rbp-39h] BYREF
  struct CShape **v14; // [rsp+38h] [rbp-31h] BYREF
  struct CShape *v15; // [rsp+40h] [rbp-29h] BYREF
  char v16; // [rsp+48h] [rbp-21h]
  _QWORD v17[3]; // [rsp+50h] [rbp-19h] BYREF
  int v18; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  v2 = 0;
  if ( *(_QWORD *)(a1 + 160) )
  {
    v13 = 0LL;
    v17[1] = 0LL;
    v18 = 0;
    v19 = 0LL;
    v17[0] = &CRegionShape::`vftable';
    v17[2] = &v18;
    v4 = CMilRectLFromMilRectF((int *)&v14, a2);
    CRegionShape::BuildFromRects((__int64)v17, (__int64)v4, 1u);
    v5 = *(_QWORD *)(a1 + 160);
    v15 = 0LL;
    v14 = &v13;
    v16 = 1;
    v2 = CShape::Combine(v5, v6, (__int64)v17, a1 + 92, 2, &v15);
    if ( v16 )
    {
      v7 = (__int64)v15;
      v8 = *v14;
      *v14 = v15;
      if ( v8 )
        std::default_delete<CShape>::operator()(v7, (__int64 (__fastcall ***)(_QWORD, __int64))v8);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v2, 0xA6u, 0LL);
    }
    else if ( ShapeBoundsEmpty(v13) )
    {
      v10 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 160);
      *(_QWORD *)(a1 + 160) = 0LL;
      if ( v10 )
        std::default_delete<CShape>::operator()(v9, v10);
    }
    else
    {
      std::unique_ptr<CShape>::operator=((__int64 *)(a1 + 160), (__int64 *)&v13);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v17);
    if ( v13 )
      std::default_delete<CShape>::operator()(v11, (__int64 (__fastcall ***)(_QWORD, __int64))v13);
  }
  return (unsigned int)v2;
}
