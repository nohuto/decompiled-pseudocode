/*
 * XREFs of ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000F284 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000FB10 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18005A504 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18005A5C0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800860E4 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::GenerateDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v8; // rax
  int v9; // esi
  struct CVisual *v10; // rax
  float *EffectiveShadowIntermediates; // rax
  struct CDrawingContext *v12; // rdx
  float v13; // xmm2_4
  float v14; // xmm3_4
  struct CDrawListBrush *v15; // rcx
  int ShadowOpacityBrush; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  int DrawList; // eax
  unsigned int v34; // ecx
  float v36; // xmm2_4
  int v37; // xmm1_4
  CGeometryOnlyDrawListBrush *v38; // rcx
  int v39; // r9d
  CGeometryOnlyDrawListBrush *v40; // rax
  __int128 v41; // xmm0
  CNineGridDrawListBrush *v42; // rcx
  float v43; // xmm0_4
  __int64 v44; // rcx
  CGeometryOnlyDrawListBrush *v45; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v46; // [rsp+38h] [rbp-C8h] BYREF
  char v47; // [rsp+48h] [rbp-B8h]
  struct CDrawListBrush *v48[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v49; // [rsp+60h] [rbp-A0h]
  __m128 v50; // [rsp+68h] [rbp-98h] BYREF
  CNineGridDrawListBrush *v51; // [rsp+78h] [rbp-88h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+DCh] [rbp-24h]
  char v55; // [rsp+E0h] [rbp-20h]
  _BYTE v56[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+130h] [rbp+30h]
  _BYTE v58[16]; // [rsp+140h] [rbp+40h] BYREF
  int v59; // [rsp+150h] [rbp+50h]
  __int128 v60; // [rsp+154h] [rbp+54h]
  _BYTE v61[4432]; // [rsp+190h] [rbp+90h] BYREF

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v58, a2, a3);
  v54 = 257;
  v53 = 0;
  v52 = 0LL;
  v8 = *((_QWORD *)a2 + 3);
  v9 = 0;
  v55 = 0;
  v51 = 0LL;
  v10 = (struct CVisual *)(*(__int64 (__fastcall **)(char *))(v8 + 32))((char *)a2 + 24);
  EffectiveShadowIntermediates = (float *)CDropShadow::GetEffectiveShadowIntermediates(this, v10);
  v13 = *((float *)this + 23) * EffectiveShadowIntermediates[12];
  if ( v13 < 1.0 )
  {
    v36 = v13 * *((float *)this + 21);
    v37 = *((_DWORD *)this + 19);
    LODWORD(v60) = *((_DWORD *)this + 18);
    DWORD2(v60) = *((_DWORD *)this + 20);
    *((float *)&v60 + 3) = v36;
    DWORD1(v60) = v37;
  }
  else
  {
    v60 = *(_OWORD *)((char *)this + 72);
  }
  v14 = *((float *)this + 22);
  v48[0] = (struct CDrawListBrush *)&v45;
  v45 = 0LL;
  v48[1] = 0LL;
  v49 = 1;
  ShadowOpacityBrush = CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
                         (CDropShadow::ShadowIntermediates *)EffectiveShadowIntermediates,
                         v12,
                         a3,
                         v14,
                         &v48[1]);
  if ( v49 )
  {
    v15 = v48[1];
    v17 = *(_QWORD *)v48[0];
    *(_QWORD *)v48[0] = v48[1];
    if ( v17 )
      std::default_delete<CDrawListBrush>::operator()(v15, v17);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, &dword_180346338, 3u, ShadowOpacityBrush, 0x15Du, 0LL);
    if ( v45 )
      std::default_delete<CDrawListBrush>::operator()(v44, v45);
    goto LABEL_49;
  }
  if ( v45 )
  {
    CBrushDrawListGenerator::AttachInput(v58, 1LL, &v45);
    if ( v45 )
      std::default_delete<CDrawListBrush>::operator()(v18, v45);
  }
  v57 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 368), (struct CMILMatrix *)v56);
  if ( COERCE_FLOAT(*((_DWORD *)this + 26) & _xmm) >= 0.0000011920929
    && !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(v56) )
  {
    goto LABEL_20;
  }
  width = a3->width;
  height = a3->height;
  v50.m128_u64[0] = 0LL;
  LODWORD(v21) = *((_DWORD *)this + 24) ^ _xmm;
  LODWORD(v22) = *((_DWORD *)this + 25) ^ _xmm;
  v23 = v21 + *((float *)this + 27);
  v24 = v21 + *((float *)this + 29);
  v50.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v25 = v22 + *((float *)this + 28);
  v26 = v22 + *((float *)this + 30);
  v27 = *((float *)this + 22);
  v46.left = v23;
  v28 = _mm_shuffle_ps(v50, v50, 85).m128_f32[0] - v27;
  v46.top = v25;
  v29 = _mm_shuffle_ps(v50, v50, 255).m128_f32[0] + v27;
  v46.right = v24;
  v30 = _mm_shuffle_ps(v50, v50, 170).m128_f32[0] + v27;
  v46.bottom = v26;
  *((float *)v48 + 1) = v28;
  *(float *)v48 = 0.0 - v27;
  v48[1] = (struct CDrawListBrush *)__PAIR64__(LODWORD(v29), LODWORD(v30));
  if ( v23 < (float)(0.0 - v27) )
  {
    v46.left = v50.m128_f32[0] - v27;
    v23 = 0.0 - v27;
  }
  if ( v25 < v28 )
  {
    v25 = v28;
    v46.top = v28;
  }
  if ( v30 < v24 )
    v46.right = v30;
  if ( v29 < v26 )
  {
    v46.bottom = v29;
    v26 = v29;
  }
  if ( IsEmpty(&v46) )
    goto LABEL_20;
  v45 = 0LL;
  *(_QWORD *)&v46.right = 0LL;
  v47 = 1;
  v50.m128_f32[0] = v23 - v32;
  v50.m128_f32[1] = v25 - v28;
  v50.m128_f32[2] = v30 - v31;
  v50.m128_f32[3] = v29 - v26;
  *(_QWORD *)&v46.left = &v45;
  ShadowOpacityBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v46.right);
  if ( v47 )
  {
    v38 = **(CGeometryOnlyDrawListBrush ***)&v46.left;
    **(_QWORD **)&v46.left = *(_QWORD *)&v46.right;
    if ( v38 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v38, 1u);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v38, &dword_180346338, 3u, ShadowOpacityBrush, 0x180u, 0LL);
LABEL_44:
    if ( v45 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v45, 1u);
    goto LABEL_49;
  }
  v40 = v45;
  v41 = *(_OWORD *)v48;
  LOBYTE(v39) = 1;
  v48[1] = 0LL;
  v49 = 1;
  *((_BYTE *)v45 + 52) = 1;
  *((_OWORD *)v40 + 2) = v41;
  *((_DWORD *)v40 + 12) = 50529027;
  v48[0] = (struct CDrawListBrush *)&v51;
  *(_QWORD *)&v46.left = v45;
  v45 = 0LL;
  ShadowOpacityBrush = CNineGridDrawListBrush::Create(
                         (unsigned int)&v46,
                         (unsigned int)&v50,
                         (unsigned int)&v50,
                         v39,
                         (__int64)&v48[1]);
  if ( *(_QWORD *)&v46.left )
    std::default_delete<CDrawListBrush>::operator()(v42, *(_QWORD *)&v46.left);
  if ( v49 )
  {
    v42 = *(CNineGridDrawListBrush **)v48[0];
    *(_QWORD *)v48[0] = v48[1];
    if ( v42 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v42, 1u);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v42, &dword_180346338, 3u, ShadowOpacityBrush, 0x188u, 0LL);
    goto LABEL_44;
  }
  LODWORD(v43) = *((_DWORD *)this + 26) & _xmm;
  *(_QWORD *)&v52 = v51;
  if ( v43 >= 0.0000011920929 )
    v9 = 128;
  if ( v45 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v45, 1u);
LABEL_20:
  v59 = v9;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v58,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v52,
               (struct CDrawListEntryBuilder *)v61);
  ShadowOpacityBrush = DrawList;
  if ( DrawList >= 0 )
  {
    CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v61);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_180346338, 3u, DrawList, 0x19Cu, 0LL);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
LABEL_49:
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v58);
LABEL_22:
  if ( v51 )
    CNineGridDrawListBrush::`scalar deleting destructor'(v51, 1u);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v58);
  return (unsigned int)ShadowOpacityBrush;
}
