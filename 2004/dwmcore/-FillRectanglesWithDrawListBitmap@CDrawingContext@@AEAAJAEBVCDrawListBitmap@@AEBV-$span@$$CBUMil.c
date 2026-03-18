/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x18004F084
 * Callers:
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x18004E758 (-FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x18017659C (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004E918 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x18004EA70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x18004ECB8 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x180054D10 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180054F4C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C4C10 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E5E04 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        CDrawingContext *this,
        CDrawListBitmap *a2,
        __int64 a3,
        float *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rbx
  char *v8; // rcx
  float v9; // xmm1_4
  float *v10; // rsi
  int v11; // eax
  struct CSurfaceDrawListBrush *v12; // rcx
  struct CObjectCache *ObjectCache; // rax
  __int64 v14; // rcx
  char *v15; // rbx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  float Opacity; // xmm0_4
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int16 v25; // [rsp+38h] [rbp-59h]
  CSurfaceDrawListBrush *v26; // [rsp+40h] [rbp-51h]
  __int64 (__fastcall ***v27)(_QWORD, __int64); // [rsp+48h] [rbp-49h] BYREF
  float v28[9]; // [rsp+50h] [rbp-41h] BYREF
  float v29[9]; // [rsp+74h] [rbp-1Dh] BYREF
  struct IBitmapRealization *v30; // [rsp+98h] [rbp+7h] BYREF
  int v31; // [rsp+A0h] [rbp+Fh]
  float v32; // [rsp+A4h] [rbp+13h]
  float v33; // [rsp+A8h] [rbp+17h]
  float v34; // [rsp+ACh] [rbp+1Bh]

  LODWORD(v6) = 0;
  v30 = 0LL;
  v27 = 0LL;
  if ( (int)CDrawListBitmap::GetCurrentRealization(a2, &v30) >= 0 )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(**(__int64 (__fastcall ***)(struct IBitmapRealization *, _QWORD))v30)(
                                                        v30,
                                                        &v27);
    v27 = v6;
  }
  if ( v30 )
  {
    v8 = (char *)v30 + *(int *)(*((_QWORD *)v30 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  HIDWORD(v30) = 0;
  v31 = 0;
  v28[2] = 0.0;
  v28[5] = 0.0;
  v28[8] = 1.0;
  *(float *)&v30 = 1.0 / (float)(int)v6;
  v32 = 1.0 / (float)SHIDWORD(v27);
  v28[1] = a4[1];
  v9 = a4[3];
  v33 = 0.0 - (float)(*(float *)&v30 * 0.0);
  v28[4] = v9;
  v28[7] = a4[5];
  v34 = 0.0 - (float)(v32 * 0.0);
  v28[0] = *a4;
  v28[3] = a4[2];
  v28[6] = a4[4];
  v10 = Matrix3x3::operator*(v28, v29, (float *)&v30);
  v11 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 68));
  LOBYTE(v25) = InterpolationMode::FromD2D1InterpolationMode(v11);
  HIBYTE(v25) = 1;
  ObjectCache = CThreadContext::GetObjectCache(v12);
  v15 = 0LL;
  v16 = *((_DWORD *)ObjectCache + 1);
  if ( v16 )
  {
    v15 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v15;
    v14 = (unsigned int)(v16 - 1);
    *((_DWORD *)ObjectCache + 1) = v14;
  }
  if ( v15 || (v15 = (char *)DefaultHeap::Alloc(0xB0uLL)) != 0LL )
  {
    *(_OWORD *)(v15 + 8) = _xmm;
    v15[52] = 0;
    *(_QWORD *)v15 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v15 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v17 = *(_QWORD *)a2;
    *((_QWORD *)v15 + 7) = *(_QWORD *)a2;
    if ( v17 )
    {
      v24 = v17 + 8 + *(int *)(*(_QWORD *)(v17 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    }
    v18 = *((_QWORD *)a2 + 1);
    *((_QWORD *)v15 + 8) = v18;
    if ( v18 )
    {
      v19 = v18 + 8 + *(int *)(*(_QWORD *)(v18 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    *(_OWORD *)(v15 + 72) = *((_OWORD *)a2 + 1);
    *((_QWORD *)v15 + 11) = *((_QWORD *)a2 + 4);
    v15[96] = *((_BYTE *)a2 + 40);
    *((_WORD *)v15 + 52) = v25;
    v15[106] = 1;
    *((float *)v15 + 27) = *v10;
    *((float *)v15 + 28) = v10[1];
    *((float *)v15 + 29) = v10[2];
    *((float *)v15 + 30) = v10[3];
    *((float *)v15 + 31) = v10[4];
    *((float *)v15 + 32) = v10[5];
    *((float *)v15 + 33) = v10[6];
    *((float *)v15 + 34) = v10[7];
    *((float *)v15 + 35) = v10[8];
    *((_WORD *)v15 + 84) = 0;
    *((_OWORD *)v15 + 9) = _xmm;
    v15[170] = 0;
  }
  if ( v15 )
  {
    v20 = 0;
  }
  else
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x39u, 0LL);
  }
  v26 = (CSurfaceDrawListBrush *)v15;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v20, 0x31Fu, 0LL);
  }
  else
  {
    *((_DWORD *)v15 + 12) = 0;
    v15[52] = 1;
    *((_OWORD *)v15 + 2) = 0LL;
    v30 = (struct IBitmapRealization *)0x3F8000003F800000LL;
    v31 = 1065353216;
    Opacity = CDrawingContext::GetOpacity(this);
    v26 = 0LL;
    v27 = (__int64 (__fastcall ***)(_QWORD, __int64))v15;
    v32 = Opacity;
    v20 = CDrawingContext::FillRectanglesWithDrawListBrush(this);
    if ( v27 )
      std::default_delete<CShape>::operator()(v22, v27);
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v20, 0x32Au, 0LL);
  }
  if ( v26 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v26, 1u);
  return (unsigned int)v20;
}
