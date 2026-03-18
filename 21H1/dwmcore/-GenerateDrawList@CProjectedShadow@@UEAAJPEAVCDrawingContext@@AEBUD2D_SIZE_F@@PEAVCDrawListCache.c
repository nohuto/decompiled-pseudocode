/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180006FDC (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18000F0B8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1800373BC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180037C10 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003A8F0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18003AABC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ADA4 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18004CAFC (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
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
  CGeometryOnlyDrawListBrush **v16; // rcx
  __int64 v17; // rdx
  CProjectedShadowReceiver *v18; // rcx
  CGeometryOnlyDrawListBrush **v19; // rcx
  __int64 v20; // rdx
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  __int64 v28; // xmm1_8
  __int64 v29; // rdx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // eax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  int DrawList; // eax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  int v40; // eax
  CGeometryOnlyDrawListBrush *v41; // [rsp+38h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v42[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v43[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v44; // [rsp+68h] [rbp-A0h]
  _OWORD v45[2]; // [rsp+6Ch] [rbp-9Ch]
  int v46; // [rsp+8Ch] [rbp-7Ch]
  __int128 v47; // [rsp+90h] [rbp-78h]
  __int128 v48; // [rsp+A0h] [rbp-68h]
  int v49; // [rsp+B0h] [rbp-58h]
  char v50; // [rsp+B4h] [rbp-54h]
  char v51; // [rsp+B5h] [rbp-53h]
  char v52; // [rsp+B6h] [rbp-52h]
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-40h]
  unsigned int v55[2]; // [rsp+D0h] [rbp-38h] BYREF
  struct CGeometryOnlyDrawListBrush *v56; // [rsp+D8h] [rbp-30h] BYREF
  float v57; // [rsp+E0h] [rbp-28h]
  float v58; // [rsp+E4h] [rbp-24h]
  _BYTE v59[20]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v60; // [rsp+FCh] [rbp-Ch]
  char v61; // [rsp+134h] [rbp+2Ch]
  _BYTE v62[2304]; // [rsp+138h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 10);
  LOBYTE(v57) = 1;
  v56 = 0LL;
  v8 = *(_QWORD *)(v4 + 56);
  *(_QWORD *)v55 = &v41;
  v41 = 0LL;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create(&v56);
  if ( LOBYTE(v57) )
  {
    v9 = **(CGeometryOnlyDrawListBrush ***)v55;
    **(_QWORD **)v55 = v56;
    if ( v9 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1u);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, CasterShadowInputBrush, 0x1BDu, 0LL);
    if ( v41 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v41, 1u);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 132);
    v12 = *(_DWORD *)(v8 + 136);
    v13 = v41;
    v42[0] = 0LL;
    LODWORD(v42[1]) = v11;
    *((_BYTE *)v41 + 52) = 1;
    *((_DWORD *)v13 + 12) = 50529027;
    HIDWORD(v42[1]) = v12;
    *((_OWORD *)v13 + 2) = *(_OWORD *)v42;
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 46);
    v15 = v41;
    if ( v14 )
    {
      v40 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 10) + 56LL) + 132LL),
              v41,
              a4);
      CasterShadowInputBrush = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v40, 0x1D2u, 0LL);
    }
    else
    {
      v43[1] = 0LL;
      *(_QWORD *)v55 = v42;
      v44 = 0;
      v50 = 1;
      v52 = 0;
      v43[0] = v41;
      v42[0] = 0LL;
      v56 = 0LL;
      LOBYTE(v57) = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, &v56);
      if ( LOBYTE(v57) )
      {
        v16 = *(CGeometryOnlyDrawListBrush ***)v55;
        v17 = **(_QWORD **)v55;
        **(_QWORD **)v55 = v56;
        if ( v17 )
          std::default_delete<CShape>::operator()(v16, v17);
      }
      if ( CasterShadowInputBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, CasterShadowInputBrush, 0x1DBu, 0LL);
      }
      else
      {
        v18 = (CProjectedShadowReceiver *)*((_QWORD *)this + 10);
        *(_QWORD *)v55 = &v41;
        v41 = 0LL;
        v56 = 0LL;
        LOBYTE(v57) = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(v18, a2, &v56);
        if ( LOBYTE(v57) )
        {
          v19 = *(CGeometryOnlyDrawListBrush ***)v55;
          v20 = **(_QWORD **)v55;
          **(_QWORD **)v55 = v56;
          if ( v20 )
            std::default_delete<CShape>::operator()(v19, v20);
        }
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, CasterShadowInputBrush, 0x1DFu, 0LL);
        }
        else
        {
          if ( COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(*((_DWORD *)this + 48) & _xmm) >= 0.000081380211 )
          {
            v30 = *(_OWORD *)((char *)this + 172);
            v31 = *(_OWORD *)((char *)this + 188);
            v46 = *((_DWORD *)this + 51);
            v32 = *((_DWORD *)this + 60);
            v45[0] = v30;
            v44 = 1;
            v33 = *((_OWORD *)this + 13);
            v49 = v32;
            v45[1] = v31;
            v34 = *((_OWORD *)this + 14);
            v47 = v33;
            v48 = v34;
          }
          else
          {
            v21 = *((float *)this + 51);
            v22 = *((float *)this + 43);
            v23 = *((float *)this + 44);
            v24 = *((float *)this + 46);
            v25 = *((float *)this + 47);
            v26 = *((float *)this + 49);
            v27 = *((float *)this + 50);
            *(float *)v55 = v22;
            *(float *)&v55[1] = v23;
            v56 = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v25), LODWORD(v24));
            v57 = v26;
            v58 = v27;
            if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.000081380211 )
            {
              *(float *)v55 = v22 / v21;
              *(float *)&v55[1] = v23 / v21;
              *(float *)&v56 = v24 / v21;
              *((float *)&v56 + 1) = v25 / v21;
              v57 = v26 / v21;
              v58 = v27 / v21;
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v53,
              (CGeometryOnlyDrawListBrush *)((char *)v42[0] + 8),
              (const struct D2D1::Matrix3x2F *)v55);
            v28 = v54;
            *(_OWORD *)v29 = v53;
            *(_QWORD *)(v29 + 16) = v28;
          }
          CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v59, a2);
          v35 = *(_OWORD *)((char *)this + 344);
          v61 = 0;
          v60 = v35;
          CBrushDrawListGenerator::AttachInput(v59, 0LL, v42);
          CBrushDrawListGenerator::AttachInput(v59, 1LL, &v41);
          v51 = 1;
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v59,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v43,
                       (struct CDrawListEntryBuilder *)v62);
          CasterShadowInputBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, DrawList, 0x208u, 0LL);
          else
            CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v62);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v59);
        }
        if ( v41 )
          std::default_delete<CShape>::operator()(v38, v41);
      }
      if ( v42[0] )
        std::default_delete<CShape>::operator()(v38, v42[0]);
    }
    if ( v15 )
      std::default_delete<CShape>::operator()(v38, v15);
  }
  return (unsigned int)CasterShadowInputBrush;
}
