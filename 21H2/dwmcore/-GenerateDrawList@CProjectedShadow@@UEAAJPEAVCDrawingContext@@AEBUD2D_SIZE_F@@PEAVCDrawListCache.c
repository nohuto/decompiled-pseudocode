/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180006350 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180008BC4 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051950 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180051998 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054CC4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180056A18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800575F0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800578D8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800583B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088338 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800936CC (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x180094488 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18009463C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1800947C8 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800947FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectedShadow::GenerateDrawList(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  __int64 v8; // rbx
  CGeometryOnlyDrawListBrush *v9; // rcx
  int CasterShadowInputBrush; // edi
  int v11; // xmm1_4
  int v12; // xmm0_4
  CGeometryOnlyDrawListBrush *v13; // rax
  CBrushRenderingGraph *v14; // rcx
  CGeometryOnlyDrawListBrush *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  CGeometryOnlyDrawListBrush **v18; // rcx
  CGeometryOnlyDrawListBrush *v19; // rdx
  CProjectedShadowReceiver *v20; // rcx
  CGeometryOnlyDrawListBrush **v21; // rcx
  CGeometryOnlyDrawListBrush *v22; // rdx
  float v23; // xmm2_4
  int v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  __int64 v31; // xmm1_8
  __int64 v32; // rdx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // eax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  int DrawList; // eax
  unsigned int v40; // ecx
  CGeometryOnlyDrawListBrush *v42; // [rsp+38h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v43[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v44[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+68h] [rbp-A0h]
  _OWORD v46[2]; // [rsp+6Ch] [rbp-9Ch]
  int v47; // [rsp+8Ch] [rbp-7Ch]
  __int128 v48; // [rsp+90h] [rbp-78h]
  __int128 v49; // [rsp+A0h] [rbp-68h]
  int v50; // [rsp+B0h] [rbp-58h]
  char v51; // [rsp+B4h] [rbp-54h]
  char v52; // [rsp+B5h] [rbp-53h]
  char v53; // [rsp+B6h] [rbp-52h]
  __int128 v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h]
  CGeometryOnlyDrawListBrush **v56; // [rsp+D0h] [rbp-38h] BYREF
  struct CGeometryOnlyDrawListBrush *v57; // [rsp+D8h] [rbp-30h] BYREF
  float v58; // [rsp+E0h] [rbp-28h]
  float v59; // [rsp+E4h] [rbp-24h]
  _BYTE v60[20]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v61; // [rsp+FCh] [rbp-Ch]
  char v62; // [rsp+134h] [rbp+2Ch]
  _BYTE v63[2304]; // [rsp+138h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 10);
  LOBYTE(v58) = 1;
  v57 = 0LL;
  v8 = *(_QWORD *)(v4 + 56);
  v56 = &v42;
  v42 = 0LL;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create(&v57);
  if ( LOBYTE(v58) )
  {
    v9 = *v56;
    *v56 = v57;
    if ( v9 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1u);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, CasterShadowInputBrush, 0x1BDu, 0LL);
    if ( v42 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42, 1u);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 132);
    v12 = *(_DWORD *)(v8 + 136);
    v13 = v42;
    v43[0] = 0LL;
    LODWORD(v43[1]) = v11;
    *((_BYTE *)v42 + 52) = 1;
    *((_DWORD *)v13 + 12) = 50529027;
    HIDWORD(v43[1]) = v12;
    *((_OWORD *)v13 + 2) = *(_OWORD *)v43;
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 46);
    v15 = v42;
    if ( v14 )
    {
      v16 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 10) + 56LL) + 132LL),
              v42,
              a4);
      CasterShadowInputBrush = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1D2u, 0LL);
    }
    else
    {
      v44[1] = 0LL;
      v56 = v43;
      v45 = 0;
      v51 = 1;
      v53 = 0;
      v44[0] = v42;
      v43[0] = 0LL;
      v57 = 0LL;
      LOBYTE(v58) = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, &v57);
      if ( LOBYTE(v58) )
      {
        v18 = v56;
        v19 = *v56;
        *v56 = v57;
        if ( v19 )
          std::default_delete<CShape>::operator()(v18, v19);
      }
      if ( CasterShadowInputBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, CasterShadowInputBrush, 0x1DBu, 0LL);
      }
      else
      {
        v20 = (CProjectedShadowReceiver *)*((_QWORD *)this + 10);
        v56 = &v42;
        v42 = 0LL;
        v57 = 0LL;
        LOBYTE(v58) = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(v20, a2, &v57);
        if ( LOBYTE(v58) )
        {
          v21 = v56;
          v22 = *v56;
          *v56 = v57;
          if ( v22 )
            std::default_delete<CShape>::operator()(v21, v22);
        }
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, CasterShadowInputBrush, 0x1DFu, 0LL);
        }
        else
        {
          if ( IsCloseRealZero(*((float *)this + 45), 0.000081380211)
            && IsCloseRealZero(*((float *)this + 48), 0.000081380211) )
          {
            v23 = *((float *)this + 51);
            v24 = *((_DWORD *)this + 44);
            v25 = *((float *)this + 46);
            v26 = *((float *)this + 47);
            v27 = *((float *)this + 49);
            v28 = *((float *)this + 50);
            LODWORD(v56) = *((_DWORD *)this + 43);
            HIDWORD(v56) = v24;
            v57 = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v26), LODWORD(v25));
            v58 = v27;
            v59 = v28;
            if ( !IsCloseRealZero(v23, 0.000081380211) && !IsCloseRealOne(v23, 0.000081380211) )
            {
              *(float *)&v56 = v29 / v23;
              *((float *)&v56 + 1) = v30 / v23;
              *(float *)&v57 = v25 / v23;
              *((float *)&v57 + 1) = v26 / v23;
              v58 = v27 / v23;
              v59 = v28 / v23;
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v54,
              (CGeometryOnlyDrawListBrush *)((char *)v43[0] + 8),
              (const struct D2D1::Matrix3x2F *)&v56);
            v31 = v55;
            *(_OWORD *)v32 = v54;
            *(_QWORD *)(v32 + 16) = v31;
          }
          else
          {
            v33 = *(_OWORD *)((char *)this + 172);
            v34 = *(_OWORD *)((char *)this + 188);
            v47 = *((_DWORD *)this + 51);
            v35 = *((_DWORD *)this + 60);
            v46[0] = v33;
            v45 = 1;
            v36 = *((_OWORD *)this + 13);
            v50 = v35;
            v46[1] = v34;
            v37 = *((_OWORD *)this + 14);
            v48 = v36;
            v49 = v37;
          }
          CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v60, a2);
          v38 = *(_OWORD *)((char *)this + 344);
          v62 = 0;
          v61 = v38;
          CBrushDrawListGenerator::AttachInput(v60, 0LL, v43);
          CBrushDrawListGenerator::AttachInput(v60, 1LL, &v42);
          v52 = 1;
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v63);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v60,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v44,
                       (struct CDrawListEntryBuilder *)v63);
          CasterShadowInputBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, DrawList, 0x208u, 0LL);
          else
            CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v63);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v63);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v60);
        }
        if ( v42 )
          std::default_delete<CShape>::operator()(v17, v42);
      }
      if ( v43[0] )
        std::default_delete<CShape>::operator()(v17, v43[0]);
    }
    if ( v15 )
      std::default_delete<CShape>::operator()(v17, v15);
  }
  return (unsigned int)CasterShadowInputBrush;
}
