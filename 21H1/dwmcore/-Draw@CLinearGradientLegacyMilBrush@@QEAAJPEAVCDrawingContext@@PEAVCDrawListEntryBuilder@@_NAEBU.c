/*
 * XREFs of ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B92E4
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800A7D8C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003A8F0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003A930 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800BF3E8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EBD5F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1801782E4 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B9074 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B9798 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::Draw(
        CLinearGradientLegacyMilBrush *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        const struct MilRectF *a5)
{
  int GradientColor; // eax
  __int64 v9; // rcx
  int v10; // ebx
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
  int v25; // xmm0_4
  int v26; // xmm2_4
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  CGeometryOnlyDrawListBrush *v31; // rcx
  unsigned int v32; // r8d
  int v33; // xmm0_4
  struct D2D_SIZE_F v34; // rax
  __int64 v35; // rcx
  int DrawList; // eax
  unsigned int v37; // r8d
  int v38; // r9d
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  _DWORD v41[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v42[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+80h] [rbp-80h]
  __int16 v45; // [rsp+CCh] [rbp-34h]
  char v46; // [rsp+CEh] [rbp-32h]
  struct D2D_SIZE_F v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct CGeometryOnlyDrawListBrush *v48[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v49; // [rsp+F0h] [rbp-10h]
  _BYTE v50[8]; // [rsp+100h] [rbp+0h] BYREF
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]

  v47[0].width = *((float *)a5 + 2) - *(float *)a5;
  v47[0].height = *((float *)a5 + 3) - *((float *)a5 + 1);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v50, a2, v47);
  v43[1] = 0LL;
  v44 = 0;
  v46 = 0;
  v45 = a4 == 0;
  memset(v42, 0, sizeof(v42));
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>((__int64)this, v42);
  v10 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, GradientColor, 0x32u, 0LL);
    goto LABEL_21;
  }
  *(_OWORD *)v48 = *(_OWORD *)a5;
  if ( operator!=((float *)this + 14, (float *)v48) || memcmp_0((char *)this + 160, (char *)this + 72, 0x58uLL) )
  {
    v11 = *((double *)this + 16);
    v12 = *((double *)this + 17);
    *(float *)v41 = v11;
    v13 = *((double *)this + 18);
    *(float *)&v41[1] = v12;
    v14 = *((double *)this + 19);
    *(float *)v48 = v13;
    *((float *)v48 + 1) = v14;
    v15 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(this);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3Au, 0LL);
      goto LABEL_21;
    }
    ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_1803481A0)(
      *((_QWORD *)this + 31) + SDWORD2(xmmword_1803481A0),
      &CLinearGradientBrush::sc_StartPoint,
      v41);
    ((void (__fastcall *)(_QWORD, void *, struct CGeometryOnlyDrawListBrush **))xmmword_1803481D8)(
      *((_QWORD *)this + 31) + SDWORD2(xmmword_1803481D8),
      &CLinearGradientBrush::sc_EndPoint,
      v48);
    v17 = *((_QWORD *)&v42[1] + 1);
    v18 = *((_QWORD *)this + 32) + SDWORD2(xmmword_180347C98);
    v47[0].width = *(FLOAT *)*((_DWORD **)&v42[1] + 1);
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_180347C98)(
      v18,
      &CColorGradientStop::sc_Offset,
      v47);
    v19 = *(const __m128i **)&v42[0];
    v20 = *((_QWORD *)this + 32) + SDWORD2(xmmword_180347CD0);
    v21 = (__m128)_mm_loadu_si128(*(const __m128i **)&v42[0]);
    LODWORD(v47[0].width) = v21.m128_i32[0];
    LODWORD(v47[1].height) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
    LODWORD(v47[0].height) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    LODWORD(v47[1].width) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_180347CD0)(
      v20,
      &CColorGradientStop::sc_Color,
      v47);
    v22 = *((_QWORD *)this + 33) + SDWORD2(xmmword_180347C98);
    v47[0].width = *(FLOAT *)(v17 + 4);
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_180347C98)(
      v22,
      &CColorGradientStop::sc_Offset,
      v47);
    v23 = (__m128)_mm_loadu_si128(v19 + 1);
    v24 = *((_QWORD *)this + 33) + SDWORD2(xmmword_180347CD0);
    LODWORD(v47[1].height) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
    LODWORD(v47[0].width) = v23.m128_i32[0];
    LODWORD(v47[0].height) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
    LODWORD(v47[1].width) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_180347CD0)(
      v24,
      &CColorGradientStop::sc_Color,
      v47);
    v25 = *((_DWORD *)a5 + 1);
    v23.m128_i32[0] = *((_DWORD *)a5 + 2);
    v26 = *((_DWORD *)a5 + 3);
    *((_DWORD *)this + 14) = *(_DWORD *)a5;
    *((_DWORD *)this + 15) = v25;
    *((_DWORD *)this + 16) = v23.m128_i32[0];
    *((_DWORD *)this + 17) = v26;
    v27 = *(_OWORD *)((char *)this + 88);
    *((_OWORD *)this + 10) = *(_OWORD *)((char *)this + 72);
    v28 = *(_OWORD *)((char *)this + 104);
    *((_OWORD *)this + 11) = v27;
    v29 = *(_OWORD *)((char *)this + 120);
    *((_OWORD *)this + 12) = v28;
    v30 = *(_OWORD *)((char *)this + 136);
    *((_OWORD *)this + 13) = v29;
    *(_QWORD *)&v29 = *((_QWORD *)this + 19);
    *((_OWORD *)this + 14) = v30;
    *((_QWORD *)this + 30) = v29;
  }
  v47[0] = 0LL;
  v48[0] = (struct CGeometryOnlyDrawListBrush *)v47;
  v48[1] = 0LL;
  v49 = 1;
  v10 = CGeometryOnlyDrawListBrush::Create(&v48[1]);
  if ( v49 )
  {
    v31 = *(CGeometryOnlyDrawListBrush **)v48[0];
    *(_QWORD *)v48[0] = v48[1];
    if ( v31 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v31, 1, v32);
  }
  if ( v10 < 0 )
  {
    v38 = v10;
    v40 = 83;
  }
  else
  {
    v33 = v52;
    v34 = v47[0];
    v48[0] = 0LL;
    LODWORD(v48[1]) = v51;
    *(_BYTE *)(*(_QWORD *)v47 + 52LL) = 1;
    *(_DWORD *)(*(_QWORD *)&v34 + 48LL) = 50529027;
    HIDWORD(v48[1]) = v33;
    *(_OWORD *)(*(_QWORD *)&v34 + 32LL) = *(_OWORD *)v48;
    v35 = *((_QWORD *)this + 31);
    v43[0] = v47[0];
    DrawList = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 320LL))(v35, v50);
    v10 = DrawList;
    if ( DrawList < 0 )
    {
      v40 = 91;
    }
    else
    {
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)v50,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v43,
                   a3);
      v10 = DrawList;
      if ( DrawList >= 0 )
        goto LABEL_17;
      v40 = 92;
    }
    v38 = DrawList;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v31, 0LL, 0, v38, v40, 0LL);
LABEL_17:
  if ( v47[0] )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)v47, 1, v37);
LABEL_21:
  std::vector<float>::_Tidy((__int64)&v42[1] + 8);
  if ( *(_QWORD *)&v42[0] )
    std::_Deallocate<16,0>(*(void **)&v42[0], (*(_QWORD *)&v42[1] - *(_QWORD *)&v42[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v50);
  return (unsigned int)v10;
}
