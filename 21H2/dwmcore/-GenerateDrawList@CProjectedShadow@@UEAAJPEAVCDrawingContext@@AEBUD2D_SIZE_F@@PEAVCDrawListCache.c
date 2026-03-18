/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180234894 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18023551C (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
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
  __int64 v18; // rcx
  CGeometryOnlyDrawListBrush *v19; // rdx
  CProjectedShadowReceiver *v20; // rcx
  __int64 v21; // rcx
  CGeometryOnlyDrawListBrush *v22; // rdx
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  __int64 v30; // xmm1_8
  __int64 v31; // rdx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // eax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int DrawList; // eax
  __int64 v38; // rcx
  CGeometryOnlyDrawListBrush *v40; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v41; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+60h] [rbp-A0h]
  __int128 v44; // [rsp+64h] [rbp-9Ch]
  __int128 v45; // [rsp+74h] [rbp-8Ch]
  int v46; // [rsp+84h] [rbp-7Ch]
  __int128 v47; // [rsp+88h] [rbp-78h]
  __int128 v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+A8h] [rbp-58h]
  __int16 v50; // [rsp+ACh] [rbp-54h]
  char v51; // [rsp+AEh] [rbp-52h]
  __int16 v52; // [rsp+AFh] [rbp-51h]
  __int128 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h]
  CGeometryOnlyDrawListBrush **v55; // [rsp+D8h] [rbp-28h] BYREF
  struct CGeometryOnlyDrawListBrush *v56; // [rsp+E0h] [rbp-20h] BYREF
  float v57; // [rsp+E8h] [rbp-18h]
  float v58; // [rsp+ECh] [rbp-14h]
  _BYTE v59[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v60; // [rsp+104h] [rbp+4h]
  _BYTE v61[4432]; // [rsp+140h] [rbp+40h] BYREF

  v4 = *((_QWORD *)this + 11);
  LOBYTE(v57) = 1;
  v56 = 0LL;
  v8 = *(_QWORD *)(v4 + 64);
  v55 = &v40;
  v40 = 0LL;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create(&v56);
  if ( LOBYTE(v57) )
  {
    v9 = *v55;
    *v55 = v56;
    if ( v9 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0LL, CasterShadowInputBrush, 0x1BDu);
    if ( v40 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v40, 1);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 140);
    v12 = *(_DWORD *)(v8 + 144);
    v13 = v40;
    *(_QWORD *)&v41 = 0LL;
    DWORD2(v41) = v11;
    *((_BYTE *)v40 + 52) = 1;
    *((_DWORD *)v13 + 12) = 50529027;
    HIDWORD(v41) = v12;
    *((_OWORD *)v13 + 2) = v41;
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 47);
    v15 = v40;
    if ( v14 )
    {
      v16 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 11) + 64LL) + 140LL),
              v40,
              a4);
      CasterShadowInputBrush = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x1D2u);
    }
    else
    {
      v42[1] = 0LL;
      v55 = (CGeometryOnlyDrawListBrush **)&v41;
      v43 = 0;
      v50 = 257;
      v52 = 0;
      v42[0] = v40;
      *(_QWORD *)&v41 = 0LL;
      v56 = 0LL;
      LOBYTE(v57) = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, &v56);
      if ( LOBYTE(v57) )
      {
        v18 = (__int64)v55;
        v19 = *v55;
        *v55 = v56;
        if ( v19 )
          std::default_delete<CDrawListBrush>::operator()(v18, (__int64 (__fastcall ***)(_QWORD, __int64))v19);
      }
      if ( CasterShadowInputBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, CasterShadowInputBrush, 0x1DBu);
      }
      else
      {
        v20 = (CProjectedShadowReceiver *)*((_QWORD *)this + 11);
        v55 = &v40;
        v40 = 0LL;
        v56 = 0LL;
        LOBYTE(v57) = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(v20, a2, &v56);
        if ( LOBYTE(v57) )
        {
          v21 = (__int64)v55;
          v22 = *v55;
          *v55 = v56;
          if ( v22 )
            std::default_delete<CDrawListBrush>::operator()(v21, (__int64 (__fastcall ***)(_QWORD, __int64))v22);
        }
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, CasterShadowInputBrush, 0x1DFu);
        }
        else
        {
          if ( COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(*((_DWORD *)this + 50) & _xmm) >= 0.000081380211 )
          {
            v32 = *(_OWORD *)((char *)this + 180);
            v33 = *(_OWORD *)((char *)this + 196);
            v46 = *((_DWORD *)this + 53);
            v34 = *((_DWORD *)this + 62);
            v44 = v32;
            v43 = 1;
            v35 = *(_OWORD *)((char *)this + 216);
            v49 = v34;
            v45 = v33;
            v36 = *(_OWORD *)((char *)this + 232);
            v47 = v35;
            v48 = v36;
          }
          else
          {
            v23 = *((float *)this + 53);
            v24 = *((float *)this + 45);
            v25 = *((float *)this + 46);
            v26 = *((float *)this + 48);
            v27 = *((float *)this + 49);
            v28 = *((float *)this + 51);
            v29 = *((float *)this + 52);
            v55 = (CGeometryOnlyDrawListBrush **)__PAIR64__(LODWORD(v25), LODWORD(v24));
            v56 = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v27), LODWORD(v26));
            v57 = v28;
            v58 = v29;
            if ( COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.000081380211 )
            {
              *(float *)&v55 = v24 / v23;
              *((float *)&v55 + 1) = v25 / v23;
              *(float *)&v56 = v26 / v23;
              *((float *)&v56 + 1) = v27 / v23;
              v57 = v28 / v23;
              v58 = v29 / v23;
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v53,
              (const struct D2D1::Matrix3x2F *)(v41 + 8),
              (const struct D2D1::Matrix3x2F *)&v55);
            v30 = v54;
            *(_OWORD *)v31 = v53;
            *(_QWORD *)(v31 + 16) = v30;
          }
          CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v59, a2);
          v60 = *((_OWORD *)this + 22);
          CBrushDrawListGenerator::AttachInput((__int64)v59, 0, &v41);
          CBrushDrawListGenerator::AttachInput((__int64)v59, 1u, &v40);
          v51 = 1;
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v59,
                       (__int64)v42,
                       (struct CDrawListEntryBuilder *)v61);
          CasterShadowInputBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, DrawList, 0x208u);
          else
            CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v61);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v59);
        }
        if ( v40 )
          std::default_delete<CDrawListBrush>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v40);
      }
      if ( (_QWORD)v41 )
        std::default_delete<CDrawListBrush>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v41);
    }
    if ( v15 )
      std::default_delete<CDrawListBrush>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v15);
  }
  return (unsigned int)CasterShadowInputBrush;
}
