/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180060688
 * Callers:
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800604C8 (-FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801748CC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005E698 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x180060D78 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180061250 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x180062CB4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180062EF0 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180062F0C (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180062F60 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062F80 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x1800634B8 (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009F1E0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C4C30 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$out_param@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@0@AEAV?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@Z @ 0x18017415C (--$out_param@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawList.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180174280 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801742B8 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        struct CDrawingContext *a1,
        CDrawListBitmap *this,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v7; // rax
  int v8; // edi
  unsigned int v9; // ecx
  CSurfaceDrawListBrush *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  char *v13; // rcx
  int v14; // xmm7_4
  int v15; // eax
  int v16; // xmm1_4
  _DWORD *v17; // r14
  unsigned int v18; // eax
  struct CSurfaceDrawListBrush *v19; // rcx
  struct CObjectCache *ObjectCache; // rax
  unsigned int v21; // ecx
  CSurfaceDrawListBrush *v22; // rbx
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  CSurfaceDrawListBrush *v28; // rcx
  int v29; // eax
  unsigned int v30; // ecx
  CSurfaceDrawListBrush *v32; // [rsp+38h] [rbp-89h] BYREF
  __int16 v33; // [rsp+40h] [rbp-81h]
  _DWORD v34[9]; // [rsp+44h] [rbp-7Dh] BYREF
  _BYTE v35[40]; // [rsp+68h] [rbp-59h] BYREF
  struct IBitmapRealization *v36; // [rsp+90h] [rbp-31h] BYREF
  int v37; // [rsp+98h] [rbp-29h]
  int v38; // [rsp+9Ch] [rbp-25h]
  __int128 v39; // [rsp+A0h] [rbp-21h] BYREF
  float v40; // [rsp+B0h] [rbp-11h]
  float v41; // [rsp+B4h] [rbp-Dh]

  if ( CDrawListBitmap::IsProtected(this) && *((_BYTE *)g_pComposition + 1129) )
  {
    v32 = 0LL;
    v7 = wil::out_param<std::unique_ptr<CGeometryOnlyDrawListBrush>>(&v39, &v32);
    v8 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)(v7 + 8));
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>(&v39);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x333u, 0LL);
    }
    else
    {
      v10 = v32;
      *((_OWORD *)v32 + 2) = 0LL;
      *((_BYTE *)v10 + 52) = 1;
      *((_DWORD *)v10 + 12) = 0;
      v39 = _xmm;
      v36 = v32;
      v32 = 0LL;
      v8 = CDrawingContext::FillRectanglesWithDrawListBrush(a1);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v36);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v8, 0x33Bu, 0LL);
      else
        *((_BYTE *)a1 + 5951) = 1;
    }
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&v32);
  }
  else
  {
    LODWORD(v12) = 0;
    v36 = 0LL;
    *(_QWORD *)&v39 = 0LL;
    if ( (int)CDrawListBitmap::GetCurrentRealization(this, &v36) >= 0 )
    {
      v12 = *(_QWORD *)(**(__int64 (__fastcall ***)(struct IBitmapRealization *, __int128 *))v36)(v36, &v39);
      *(_QWORD *)&v39 = v12;
    }
    if ( v36 )
    {
      v13 = (char *)v36 + *(int *)(*((_QWORD *)v36 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (int)FLOAT_1_0;
    v34[2] = 0;
    v34[5] = 0;
    v32 = 0LL;
    v34[8] = 1065353216;
    v15 = DWORD1(v39);
    *(_QWORD *)((char *)&v39 + 4) = 0LL;
    *(float *)&v39 = 1.0 / (float)(int)v12;
    *((float *)&v39 + 3) = 1.0 / (float)v15;
    v34[1] = a4[1];
    v16 = a4[3];
    v40 = 0.0 - (float)(*(float *)&v39 * 0.0);
    v34[4] = v16;
    v34[7] = a4[5];
    v41 = 0.0 - (float)(*((float *)&v39 + 3) * 0.0);
    v34[0] = *a4;
    v34[3] = a4[2];
    v34[6] = a4[4];
    v17 = (_DWORD *)Matrix3x3::operator*(v34, v35, &v39);
    v18 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a1 + 68));
    LOBYTE(v33) = InterpolationMode::FromD2D1InterpolationMode(v18);
    HIBYTE(v33) = 1;
    ObjectCache = CThreadContext::GetObjectCache(v19);
    v22 = 0LL;
    v23 = *((_DWORD *)ObjectCache + 1);
    if ( v23 )
    {
      v22 = (CSurfaceDrawListBrush *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v22;
      v21 = v23 - 1;
      *((_DWORD *)ObjectCache + 1) = v23 - 1;
    }
    if ( v22 || (v22 = (CSurfaceDrawListBrush *)DefaultHeap::Alloc(0xB0uLL)) != 0LL )
    {
      *(_OWORD *)((char *)v22 + 8) = _xmm;
      *((_BYTE *)v22 + 52) = 0;
      *(_QWORD *)v22 = &CSurfaceDrawListBrush::`vftable';
      *((_QWORD *)v22 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v24 = *(_QWORD *)this;
      *((_QWORD *)v22 + 7) = *(_QWORD *)this;
      if ( v24 )
      {
        v25 = v24 + 8 + *(int *)(*(_QWORD *)(v24 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      }
      v26 = *((_QWORD *)this + 1);
      *((_QWORD *)v22 + 8) = v26;
      if ( v26 )
      {
        v27 = v26 + 8 + *(int *)(*(_QWORD *)(v26 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      }
      *(_OWORD *)((char *)v22 + 72) = *((_OWORD *)this + 1);
      *((_QWORD *)v22 + 11) = *((_QWORD *)this + 4);
      *((_BYTE *)v22 + 96) = *((_BYTE *)this + 40);
      *((_WORD *)v22 + 52) = v33;
      *((_BYTE *)v22 + 106) = 1;
      *((_DWORD *)v22 + 27) = *v17;
      *((_DWORD *)v22 + 28) = v17[1];
      *((_DWORD *)v22 + 29) = v17[2];
      *((_DWORD *)v22 + 30) = v17[3];
      *((_DWORD *)v22 + 31) = v17[4];
      *((_DWORD *)v22 + 32) = v17[5];
      *((_DWORD *)v22 + 33) = v17[6];
      *((_DWORD *)v22 + 34) = v17[7];
      *((_DWORD *)v22 + 35) = v17[8];
      *((_OWORD *)v22 + 9) = _xmm;
      *((_WORD *)v22 + 84) = 0;
      *((_BYTE *)v22 + 170) = 0;
    }
    else
    {
      v22 = 0LL;
    }
    if ( v22 )
    {
      v8 = 0;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0x39u, 0LL);
    }
    v28 = v32;
    v32 = v22;
    if ( v28 )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
      v22 = v32;
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v8, 0x31Fu, 0LL);
    }
    else
    {
      *((_BYTE *)v22 + 52) = 1;
      *((_OWORD *)v22 + 2) = 0LL;
      *((_DWORD *)v22 + 12) = 0;
      v29 = *((_DWORD *)a1 + 808);
      if ( v29 )
        v14 = *(_DWORD *)(*((_QWORD *)a1 + 406) + 4LL * (unsigned int)(v29 - 1));
      *(_QWORD *)&v39 = v32;
      v38 = v14;
      v36 = (struct IBitmapRealization *)0x3F8000003F800000LL;
      v37 = 1065353216;
      v32 = 0LL;
      v8 = CDrawingContext::FillRectanglesWithDrawListBrush(a1);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v39);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v8, 0x32Au, 0LL);
    }
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v32);
  }
  return (unsigned int)v8;
}
