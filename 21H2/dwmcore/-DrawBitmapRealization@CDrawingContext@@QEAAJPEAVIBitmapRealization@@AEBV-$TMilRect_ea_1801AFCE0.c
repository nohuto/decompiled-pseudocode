/*
 * XREFs of ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x1801AFCE0
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x1801AFC58 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180211D90 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800581B8 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18008F04C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800B05F8 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800B1014 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800B10C4 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800B1268 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800D3284 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x1801B2D58 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        struct MilRectF *a3,
        struct MILMatrix3x2 *a4,
        bool a5,
        int a6,
        int a7)
{
  int v11; // eax
  float v12; // xmm0_4
  bool v13; // r14
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, __int64); // rdx
  const struct CMILMatrix *TopByReference; // rax
  int v17; // xmm1_4
  unsigned int v18; // xmm0_4
  int v19; // xmm1_4
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  gsl::details *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v30; // [rsp+30h] [rbp-91h] BYREF
  struct CShape *v31; // [rsp+38h] [rbp-89h] BYREF
  int v32; // [rsp+40h] [rbp-81h]
  int v33; // [rsp+44h] [rbp-7Dh]
  float v34; // [rsp+48h] [rbp-79h] BYREF
  struct CShape *v35; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v36[8]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v37[16]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v38[80]; // [rsp+70h] [rbp-51h] BYREF

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v38, a3);
  v11 = *((_DWORD *)this + 776);
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = *(float *)&FLOAT_1_0;
  v34 = v12 * *(float *)&a7;
  CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 776, &v34);
  v35 = 0LL;
  v31 = 0LL;
  v30 = (__int64)&v35;
  LOBYTE(v32) = 1;
  v13 = (int)CDrawingContext::GetUnOccludedWorldShape(this, (const struct CShape *)v38, a6, &v31) >= 0;
  if ( (_BYTE)v32 )
  {
    v14 = v30;
    v15 = *(__int64 (__fastcall ****)(_QWORD, __int64))v30;
    *(_QWORD *)v30 = v31;
    if ( v15 )
      std::default_delete<CShape>::operator()(v14, v15);
  }
  if ( v13 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
    v17 = *((_DWORD *)TopByReference + 1);
    LODWORD(v30) = *(_DWORD *)TopByReference;
    v18 = *((_DWORD *)TopByReference + 4);
    HIDWORD(v30) = v17;
    v31 = (struct CShape *)__PAIR64__(*((_DWORD *)TopByReference + 5), v18);
    v19 = *((_DWORD *)TopByReference + 13);
    v32 = *((_DWORD *)TopByReference + 12);
    v33 = v19;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v36, (const struct MILMatrix3x2 *)&v30);
    MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v30, (const struct MILMatrix3x2 *)v36, a4);
    v20 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v22 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x8CEu);
    }
    else
    {
      v23 = CDrawingContext::FillShapeWithBitmapRealization(this, a2, v35, (const struct MILMatrix3x2 *)&v30, a5);
      v22 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x8D7u);
      CDrawingContext::PopTransformInternal(this, 1);
    }
  }
  else
  {
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v36, a2);
    v37[8] = a5;
    v30 = 1LL;
    v31 = a3;
    if ( !a3 )
    {
      gsl::details::terminate(v26);
      __debugbreak();
    }
    v27 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, (CDrawListBitmap *)v36, (__int64)&v30, a4);
    v22 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x8E0u);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v37);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v36);
  }
  if ( v35 )
    std::default_delete<CShape>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v35);
  CDrawingContext::PopAlpha(this, 0);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v38);
  return v22;
}
