/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180036970
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001E8EC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800208EC (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x1800209A0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800364EC (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1800373BC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180037C10 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003A8F0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18003AABC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ADA4 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180049EE0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18004AA40 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18004CAFC (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x1800C326C (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct EffectStage *a5,
        struct CDrawListCache *a6)
{
  const struct D2D_SIZE_F *v8; // rdi
  int v10; // r15d
  unsigned int v11; // esi
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int DrawList; // eax
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v18; // edx
  __int64 i; // rcx
  bool v21; // zf
  CSurfaceDrawListBrush *v22; // rcx
  CSurfaceDrawListBrush *v23; // rax
  __int64 v24; // rcx
  CColorDrawListBrush *v25; // rcx
  unsigned int v26; // r8d
  CSurfaceDrawListBrush *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r8d
  CGeometryOnlyDrawListBrush *v30; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CSurfaceDrawListBrush *v33; // rax
  __int128 v34; // xmm0
  unsigned int v35; // r8d
  CSurfaceDrawListBrush *v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v37; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v38; // [rsp+41h] [rbp-BFh]
  CSurfaceDrawListBrush *v39; // [rsp+50h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush **v40; // [rsp+58h] [rbp-A8h]
  struct CColorDrawListBrush *v41; // [rsp+60h] [rbp-A0h] BYREF
  char v42; // [rsp+68h] [rbp-98h]
  __int128 v43; // [rsp+70h] [rbp-90h]
  struct CRenderingTechnique *v44; // [rsp+80h] [rbp-80h]
  CDrawListCache *v45; // [rsp+88h] [rbp-78h]
  _QWORD v46[2]; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+A0h] [rbp-60h]
  __int16 v48; // [rsp+ECh] [rbp-14h]
  char v49; // [rsp+EEh] [rbp-12h]
  CSurfaceDrawListBrush **v50; // [rsp+F0h] [rbp-10h] BYREF
  CSurfaceDrawListBrush *v51; // [rsp+F8h] [rbp-8h] BYREF
  char v52; // [rsp+100h] [rbp+0h]
  _BYTE v53[16]; // [rsp+120h] [rbp+20h] BYREF
  int v54; // [rsp+130h] [rbp+30h]
  int v55; // [rsp+134h] [rbp+34h]
  int v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+13Ch] [rbp+3Ch]
  int v58; // [rsp+140h] [rbp+40h]
  _QWORD v59[4]; // [rsp+148h] [rbp+48h]
  unsigned int v60; // [rsp+168h] [rbp+68h]
  char v61; // [rsp+16Ch] [rbp+6Ch]
  _BYTE v62[2304]; // [rsp+170h] [rbp+70h] BYREF

  v45 = a6;
  v8 = a3;
  *(_QWORD *)&v43 = a3;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v53, a2);
  v10 = 0;
  v11 = 0;
  v44 = *(struct CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a5);
  if ( !*((_DWORD *)a5 + 1) )
  {
LABEL_12:
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v36[0] = 0LL;
    v58 = (int)FLOAT_1_0;
    v61 = 1;
    v54 = v10;
    if ( !a4 )
    {
      v41 = 0LL;
      v40 = v36;
      v42 = 1;
      v17 = CGeometryOnlyDrawListBrush::Create(&v41);
      if ( v42 )
      {
        v30 = *v40;
        *v40 = v41;
        if ( v30 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v30, 1u);
      }
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v17, 0x48Cu, 0LL);
LABEL_50:
        if ( v36[0] )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v36[0], 1u);
        goto LABEL_17;
      }
      width = v8->width;
      height = v8->height;
      v33 = v36[0];
      *(_QWORD *)&v43 = 0LL;
      *((_QWORD *)&v43 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      v34 = v43;
      *((_BYTE *)v36[0] + 52) = 1;
      *((_DWORD *)v33 + 12) = 50529027;
      *((_OWORD *)v33 + 2) = v34;
      a4 = v36[0];
    }
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)&v50, a2, v44, a5);
    v47 = 0;
    v46[1] = &v50;
    v48 = 1;
    v49 = 0;
    v46[0] = a4;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v53,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v46,
                 (struct CDrawListEntryBuilder *)v62);
    v17 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(v45, a2, (struct CDrawListEntryBuilder *)v62);
      if ( v36[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v36[0], 1u);
      v17 = 0;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DrawList, 0x497u, 0LL);
    goto LABEL_50;
  }
  while ( 1 )
  {
    v12 = (char *)a5 + 128 * (unsigned __int64)v11;
    if ( !v12[76] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v12 + 11) + 8LL))(
             *((_QWORD *)v12 + 11),
             2LL) )
      {
        v13 = *((_QWORD *)v12 + 11);
        if ( *(_BYTE *)(v13 + 52) )
        {
          if ( *(_BYTE *)(v13 + 168) && *((_BYTE *)v44 + 44 * v11 + 78) )
            *(_BYTE *)(v13 + 52) = 0;
        }
      }
      v39 = (CSurfaceDrawListBrush *)*((_QWORD *)v12 + 11);
      CBrushDrawListGenerator::AttachInput(v53, v11, &v39);
      if ( v39 )
        std::default_delete<CShape>::operator()(v14, (__int64 (__fastcall ***)(_QWORD, __int64))v39);
      goto LABEL_10;
    }
    v36[0] = 0LL;
    if ( v12[77] )
      break;
    v51 = 0LL;
    v21 = v12[132] == 0;
    v50 = v36;
    v52 = 1;
    v37 = InterpolationMode::FromD2D1InterpolationMode(v21);
    v38 = 257;
    v17 = CSurfaceDrawListBrush::CreateWithTextureTransform(
            (struct CSurfaceDrawListBrush *)(v12 + 8),
            (__int16 *)&v37,
            (__int64)(v12 + 80),
            &v51);
    if ( v52 )
    {
      v22 = *v50;
      *v50 = v51;
      if ( v22 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
    }
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v17, 0x45Eu, 0LL);
      if ( v36[0] )
        CSurfaceDrawListBrush::`vector deleting destructor'(v36[0], 1u);
      goto LABEL_17;
    }
    v23 = v36[0];
    v36[0] = 0LL;
    v39 = v23;
    CBrushDrawListGenerator::AttachInput(v53, v11, &v39);
    if ( v39 )
      std::default_delete<CShape>::operator()(v24, (__int64 (__fastcall ***)(_QWORD, __int64))v39);
    if ( v36[0] )
      CSurfaceDrawListBrush::`vector deleting destructor'(v36[0], 1u);
LABEL_10:
    v10 |= *((_DWORD *)v12 + 18);
    if ( ++v11 >= *((_DWORD *)a5 + 1) )
    {
      v8 = (const struct D2D_SIZE_F *)v43;
      goto LABEL_12;
    }
  }
  v41 = 0LL;
  v40 = v36;
  v42 = 1;
  v17 = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)(v12 + 56), &v41);
  if ( v42 )
  {
    v25 = *v40;
    *v40 = v41;
    if ( v25 )
      CColorDrawListBrush::`vector deleting destructor'(v25, 1, v26);
  }
  if ( v17 >= 0 )
  {
    v27 = v36[0];
    v36[0] = 0LL;
    v39 = v27;
    CBrushDrawListGenerator::AttachInput(v53, v11, &v39);
    if ( v39 )
      std::default_delete<CShape>::operator()(v28, (__int64 (__fastcall ***)(_QWORD, __int64))v39);
    if ( v36[0] )
      CColorDrawListBrush::`vector deleting destructor'(v36[0], 1, v29);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, v17, 0x465u, 0LL);
  if ( v36[0] )
    CColorDrawListBrush::`vector deleting destructor'(v36[0], 1, v35);
LABEL_17:
  v18 = v60;
  for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a5 + 128 * (unsigned __int64)(unsigned int)i + 76) )
    {
      v59[i] = 0LL;
      v18 = v60;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v53);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
  return (unsigned int)v17;
}
