/*
 * XREFs of ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180046F60 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180062408 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180069EDC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800EAEBC (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180208034 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1802087CC (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::Draw(
        CLinearGradientLegacyMilBrush *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        const struct MilRectF *a4)
{
  int GradientColor; // eax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  const __m128i *v19; // rbx
  __int64 v20; // rcx
  __m128 v21; // xmm1
  __int64 v22; // rcx
  __m128 v23; // xmm1
  __int64 v24; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // xmm0_4
  int v30; // xmm1_4
  int v31; // xmm2_4
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  CGeometryOnlyDrawListBrush *v36; // rcx
  int v37; // xmm0_4
  struct D2D_SIZE_F v38; // rax
  __int64 v39; // rcx
  int DrawList; // eax
  int v41; // r9d
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  _DWORD v44[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v45[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v46[2]; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+CCh] [rbp-34h]
  char v49; // [rsp+D0h] [rbp-30h]
  struct D2D_SIZE_F v50[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct CGeometryOnlyDrawListBrush *v51[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v52; // [rsp+100h] [rbp+0h]
  _BYTE v53[8]; // [rsp+110h] [rbp+10h] BYREF
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]

  v50[0].width = *((float *)a4 + 2) - *(float *)a4;
  v50[0].height = *((float *)a4 + 3) - *((float *)a4 + 1);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v53, a2, v50);
  v48 = 257;
  v46[1] = 0LL;
  v47 = 0;
  v49 = 0;
  memset(v45, 0, sizeof(v45));
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>((__int64)this, v45);
  v9 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, GradientColor, 0x2Fu);
    goto LABEL_25;
  }
  *(_OWORD *)v51 = *(_OWORD *)a4;
  if ( operator!=((float *)this + 16, (float *)v51) || memcmp_0((char *)this + 168, (char *)this + 80, 0x58uLL) )
  {
    v10 = *((_QWORD *)this + 32);
    v11 = *((double *)this + 17);
    v12 = *((double *)this + 18);
    *(float *)v44 = v11;
    v13 = *((double *)this + 19);
    *(float *)&v44[1] = v12;
    v14 = *((double *)this + 20);
    *(float *)v51 = v13;
    *((float *)v51 + 1) = v14;
    if ( v10 )
    {
      CPtrArrayBase::Remove((CPtrArrayBase *)(v10 + 24));
      *((_QWORD *)this + 32) = 0LL;
    }
    v15 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(this);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x3Fu);
      goto LABEL_25;
    }
    ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_1803D2090)(
      *((_QWORD *)this + 33) + SDWORD2(xmmword_1803D2090),
      &CLinearGradientBrush::sc_StartPoint,
      v44);
    ((void (__fastcall *)(_QWORD, void *, struct CGeometryOnlyDrawListBrush **))xmmword_1803D20C8)(
      *((_QWORD *)this + 33) + SDWORD2(xmmword_1803D20C8),
      &CLinearGradientBrush::sc_EndPoint,
      v51);
    v17 = *((_QWORD *)&v45[1] + 1);
    v18 = *((_QWORD *)this + 34) + SDWORD2(xmmword_1803D17B8);
    v50[0].width = *(FLOAT *)*((_DWORD **)&v45[1] + 1);
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803D17B8)(
      v18,
      &CColorGradientStop::sc_Offset,
      v50);
    v19 = *(const __m128i **)&v45[0];
    v20 = *((_QWORD *)this + 34) + SDWORD2(xmmword_1803D1780);
    v21 = (__m128)_mm_loadu_si128(*(const __m128i **)&v45[0]);
    LODWORD(v50[0].width) = v21.m128_i32[0];
    LODWORD(v50[1].height) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
    LODWORD(v50[0].height) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    LODWORD(v50[1].width) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803D1780)(
      v20,
      &CColorGradientStop::sc_Color,
      v50);
    v22 = *((_QWORD *)this + 35) + SDWORD2(xmmword_1803D17B8);
    v50[0].width = *(FLOAT *)(v17 + 4);
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803D17B8)(
      v22,
      &CColorGradientStop::sc_Offset,
      v50);
    v23 = (__m128)_mm_loadu_si128(v19 + 1);
    v24 = *((_QWORD *)this + 35) + SDWORD2(xmmword_1803D1780);
    LODWORD(v50[0].width) = v23.m128_i32[0];
    LODWORD(v50[1].height) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
    LODWORD(v50[0].height) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
    LODWORD(v50[1].width) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803D1780)(
      v24,
      &CColorGradientStop::sc_Color,
      v50);
    Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(*((_QWORD *)this + 33) + 24LL));
    v27 = CPtrArrayBase::InsertAt(v26, (__int64)this, Count);
    v9 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x4Fu);
      goto LABEL_25;
    }
    *((_QWORD *)this + 32) = *((_QWORD *)this + 33);
    v29 = *((_DWORD *)a4 + 1);
    v30 = *((_DWORD *)a4 + 2);
    v31 = *((_DWORD *)a4 + 3);
    *((_DWORD *)this + 16) = *(_DWORD *)a4;
    *((_DWORD *)this + 17) = v29;
    *((_DWORD *)this + 18) = v30;
    *((_DWORD *)this + 19) = v31;
    v32 = *((_OWORD *)this + 6);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)this + 5);
    v33 = *((_OWORD *)this + 7);
    *(_OWORD *)((char *)this + 184) = v32;
    v34 = *((_OWORD *)this + 8);
    *(_OWORD *)((char *)this + 200) = v33;
    v35 = *((_OWORD *)this + 9);
    *(_OWORD *)((char *)this + 216) = v34;
    *(_QWORD *)&v34 = *((_QWORD *)this + 20);
    *(_OWORD *)((char *)this + 232) = v35;
    *((_QWORD *)this + 31) = v34;
  }
  v50[0] = 0LL;
  v51[0] = (struct CGeometryOnlyDrawListBrush *)v50;
  v51[1] = 0LL;
  v52 = 1;
  v9 = CGeometryOnlyDrawListBrush::Create(&v51[1]);
  if ( v52 )
  {
    v36 = *(CGeometryOnlyDrawListBrush **)v51[0];
    *(_QWORD *)v51[0] = v51[1];
    if ( v36 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v36, 1);
  }
  if ( v9 < 0 )
  {
    v41 = v9;
    v43 = 91;
  }
  else
  {
    v37 = v55;
    v38 = v50[0];
    v51[0] = 0LL;
    LODWORD(v51[1]) = v54;
    *(_BYTE *)(*(_QWORD *)v50 + 52LL) = 1;
    *(_DWORD *)(*(_QWORD *)&v38 + 48LL) = 50529027;
    HIDWORD(v51[1]) = v37;
    *(_OWORD *)(*(_QWORD *)&v38 + 32LL) = *(_OWORD *)v51;
    v39 = *((_QWORD *)this + 33);
    v46[0] = v50[0];
    DrawList = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v39 + 320LL))(v39, v53);
    v9 = DrawList;
    if ( DrawList < 0 )
    {
      v43 = 99;
    }
    else
    {
      DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)v53, (__int64)v46, a3);
      v9 = DrawList;
      if ( DrawList >= 0 )
        goto LABEL_20;
      v43 = 100;
    }
    v41 = DrawList;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v36, 0LL, 0LL, v41, v43);
LABEL_20:
  if ( v50[0] )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)v50, 1);
LABEL_25:
  std::vector<float>::_Tidy((__int64)&v45[1] + 8);
  if ( *(_QWORD *)&v45[0] )
    std::_Deallocate<16,0>(*(void **)&v45[0], (*(_QWORD *)&v45[1] - *(_QWORD *)&v45[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v53);
  return (unsigned int)v9;
}
