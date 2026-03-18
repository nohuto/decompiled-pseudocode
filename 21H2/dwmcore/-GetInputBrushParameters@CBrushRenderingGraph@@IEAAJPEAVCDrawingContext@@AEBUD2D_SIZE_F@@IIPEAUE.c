/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180053F34
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x180054EEC (-GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     FindBaseSimpleInputBrush @ 0x1800541E8 (FindBaseSimpleInputBrush.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180054228 (-GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x1800554AC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18005A4E0 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008EDD0 (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800AD0B8 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801133BE (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801158B0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x1801E50F0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801E5144 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x1802AC97C (-DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x1802ACA10 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v8; // rbx
  __int64 v9; // r12
  struct CBrush *NamedInput; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  int IntermediateSurfaceBrush; // esi
  CDrawListBrush *v15; // rcx
  CSurfaceDrawListBrush *v16; // rax
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v19; // rdi
  struct _D3DCOLORVALUE *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // al
  CColorDrawListBrush *v24; // r12
  __int64 v25; // rcx
  __int64 v27; // xmm1_8
  __int64 v28; // rdx
  CGeometryOnlyDrawListBrush *v29; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CDrawListBrush *v32; // rax
  CSurfaceDrawListBrush *v33; // rcx
  CSurfaceDrawListBrush *v34; // rdx
  int v35; // edi
  CColorDrawListBrush *v36; // rcx
  CDrawListBrush *v37; // rax
  CSurfaceDrawListBrush *v38; // rdx
  __int64 v39; // rax
  CColorDrawListBrush *v40; // rcx
  FLOAT v41; // xmm0_4
  FLOAT v42; // xmm1_4
  __int128 v43; // xmm0
  int v44; // eax
  CColorDrawListBrush *v45; // rcx
  unsigned int v46; // [rsp+20h] [rbp-E0h]
  CDrawListBrush *v47; // [rsp+30h] [rbp-D0h] BYREF
  CSurfaceDrawListBrush *v48; // [rsp+38h] [rbp-C8h] BYREF
  CSurfaceDrawListBrush *v49; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v50; // [rsp+48h] [rbp-B8h] BYREF
  char v51; // [rsp+58h] [rbp-A8h]
  CColorDrawListBrush *v52; // [rsp+60h] [rbp-A0h] BYREF
  struct CColorDrawListBrush *v53[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+DCh] [rbp-24h]
  char v58; // [rsp+E0h] [rbp-20h]
  _BYTE v59[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v60; // [rsp+100h] [rbp+0h]
  __int128 v61; // [rsp+104h] [rbp+4h]
  CSurfaceDrawListBrush *v62; // [rsp+118h] [rbp+18h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+140h] [rbp+40h] BYREF

  v52 = a2;
  v49 = 0LL;
  v8 = 0LL;
  v9 = a4;
  *((_QWORD *)a6 + 3) = 0LL;
  *((_QWORD *)a6 + 4) = 0LL;
  LODWORD(v47) = *((_DWORD *)a6 + 12);
  NamedInput = CBrushRenderingGraph::GetNamedInput(this, (unsigned int)v47);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v59, a2, a3);
  v12 = (*(__int64 (__fastcall **)(struct CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)NamedInput + 312LL))(
          NamedInput,
          a2,
          a3);
  IntermediateSurfaceBrush = v12;
  if ( v12 < 0 )
  {
    v46 = 166;
    goto LABEL_97;
  }
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(struct CBrush *, _BYTE *))(*(_QWORD *)NamedInput + 320LL))(
                               NamedInput,
                               v59);
  if ( IntermediateSurfaceBrush < 0 )
  {
    v20 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_86;
  }
  v16 = v62;
  v62 = 0LL;
  v48 = v16;
  std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v49, &v48);
  if ( v48 )
    std::default_delete<CDrawListBrush>::operator()(v15, v48);
  v8 = v49;
  if ( !v49 )
  {
    v20 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
LABEL_84:
    v43 = v61;
    v44 = v60;
    *((_BYTE *)a6 + 45) = 1;
    *(_OWORD *)&v20->r = v43;
    *((_DWORD *)a6 + 10) = v44;
LABEL_86:
    v24 = v52;
    goto LABEL_20;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(this, (unsigned int)v47);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v53, (CSurfaceDrawListBrush *)((char *)v8 + 8), SurfaceTransform);
    v27 = v54;
    *(_OWORD *)v28 = *(_OWORD *)v53;
    *(_QWORD *)(v28 + 16) = v27;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v8);
  v19 = BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush
      && !CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * v9), a5) )
    {
      goto LABEL_10;
    }
    v56 = 0;
    v55 = 0LL;
    v57 = 257;
    v58 = 0;
    v47 = 0LL;
    CBrushDrawListGenerator::AttachInput(v59, 0LL, &v49);
    if ( CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * v9), a5) )
    {
      LOWORD(v57) = 0;
    }
    else
    {
      *(_QWORD *)&v50.right = 0LL;
      *(_QWORD *)&v50.left = &v47;
      v51 = 1;
      IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v50.right);
      if ( v51 )
      {
        v29 = **(CGeometryOnlyDrawListBrush ***)&v50.left;
        **(_QWORD **)&v50.left = *(_QWORD *)&v50.right;
        if ( v29 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v29, 1u);
      }
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v29, 0LL, 0, IntermediateSurfaceBrush, 0xF4u, 0LL);
        goto LABEL_50;
      }
      width = a3->width;
      height = a3->height;
      v32 = v47;
      v50.left = 0.0;
      v50.top = 0.0;
      v50.right = width;
      *((_BYTE *)v47 + 52) = 1;
      *((_DWORD *)v32 + 12) = 0;
      v50.bottom = height;
      *((struct D2D_RECT_F *)v32 + 2) = v50;
      *(_QWORD *)&v55 = v47;
    }
    v48 = 0LL;
    *(_QWORD *)&v50.left = &v48;
    *(_QWORD *)&v50.right = 0LL;
    v51 = 1;
    IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                 (CBrushDrawListGenerator *)v59,
                                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v55,
                                 (struct CSurfaceDrawListBrush **)&v50.right);
    if ( v51 )
    {
      v33 = **(CSurfaceDrawListBrush ***)&v50.left;
      **(_QWORD **)&v50.left = *(_QWORD *)&v50.right;
      if ( v33 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v33, 1u);
    }
    if ( IntermediateSurfaceBrush >= 0 )
    {
      v34 = v49;
      v8 = v48;
      v48 = 0LL;
      v49 = v8;
      if ( v34 )
        std::default_delete<CDrawListBrush>::operator()(v33, v34);
      v35 = v60 | 0x100;
      CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v59);
      v60 = v35;
      if ( v48 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v48, 1u);
      v15 = v47;
      if ( v47 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v47, 1u);
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, IntermediateSurfaceBrush, 0xFDu, 0LL);
    if ( v48 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v48, 1u);
LABEL_50:
    if ( v47 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v47, 1u);
    goto LABEL_52;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
          BaseSimpleInputBrush,
          0LL) )
  {
LABEL_10:
    v20 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_11;
  }
  v20 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  v47 = 0LL;
  *(_QWORD *)&v50.right = 0LL;
  *(_QWORD *)&v50.left = &v47;
  v51 = 1;
  *(_OWORD *)((char *)a6 + 24) = v61;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(
                               (const struct _D3DCOLORVALUE *)((char *)a6 + 24),
                               (struct CColorDrawListBrush **)&v50.right);
  if ( v51 )
  {
    v36 = **(CColorDrawListBrush ***)&v50.left;
    **(_QWORD **)&v50.left = *(_QWORD *)&v50.right;
    if ( v36 )
      CColorDrawListBrush::`vector deleting destructor'(v36, 1u);
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    CDrawListBrush::CopyPrimitiveClamp(v47, (const struct CDrawListBrush *)v19);
    v15 = v47;
    *(_OWORD *)((char *)v47 + 8) = *(_OWORD *)(v19 + 8);
    *((_QWORD *)v15 + 3) = *(_QWORD *)(v19 + 24);
    if ( v8 == (CSurfaceDrawListBrush *)v19 )
    {
      v37 = v47;
      v38 = v8;
      v47 = 0LL;
      v8 = v37;
      v49 = v37;
      if ( !v38 )
        goto LABEL_11;
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL)
           || (v39 = *(_QWORD *)v8,
               v48 = v47,
               v47 = 0LL,
               (*(void (__fastcall **)(CSurfaceDrawListBrush *, CSurfaceDrawListBrush **))(v39 + 40))(v8, &v48),
               (v38 = v48) == 0LL) )
    {
LABEL_63:
      v15 = v47;
      if ( v47 )
        CColorDrawListBrush::`vector deleting destructor'(v47, 1u);
LABEL_11:
      if ( v8 )
      {
        matrix = *(D2D1_MATRIX_3X2_F *)((char *)v8 + 8);
        if ( !D2D1IsMatrixInvertible(&matrix) )
        {
          v24 = v52;
          IntermediateSurfaceBrush = -2003304441;
          goto LABEL_70;
        }
        v21 = FindBaseSimpleInputBrush(v8);
        v22 = v21;
        if ( v21 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, 2LL) )
        {
          CDrawListBitmap::operator=(a6, v22 + 56);
          v23 = 0;
        }
        else
        {
          v23 = 1;
        }
        *((_BYTE *)a6 + 45) = v23;
        if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 5LL)
          && !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 4LL) )
        {
          v24 = v52;
LABEL_19:
          *((_DWORD *)a6 + 10) = v60;
          *((_QWORD *)a6 + 7) = v8;
          v8 = 0LL;
LABEL_20:
          if ( IntermediateSurfaceBrush != -2147024846
            && IntermediateSurfaceBrush != -2147022876
            && IntermediateSurfaceBrush != -2003304441 )
          {
            if ( IntermediateSurfaceBrush < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, IntermediateSurfaceBrush, 0x163u, 0LL);
              goto LABEL_25;
            }
            goto LABEL_24;
          }
LABEL_70:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
            McTemplateU0q_EventWriteTransfer(
              v15,
              &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
              (unsigned int)IntermediateSurfaceBrush);
          *((_BYTE *)a6 + 45) = 1;
          *((_DWORD *)a6 + 10) = 0;
          IntermediateSurfaceBrush = 0;
LABEL_24:
          if ( !*((_BYTE *)a6 + 45) )
            goto LABEL_25;
          v12 = CDrawListBitmap::SetTransparent(a6, v24);
          IntermediateSurfaceBrush = v12;
          if ( v12 >= 0 )
          {
            if ( *((_QWORD *)a6 + 7) )
              goto LABEL_25;
            v52 = 0LL;
            v53[0] = (struct CColorDrawListBrush *)&v52;
            v53[1] = 0LL;
            LOBYTE(v54) = 1;
            IntermediateSurfaceBrush = CColorDrawListBrush::Create(v20, &v53[1]);
            if ( (_BYTE)v54 )
            {
              v45 = *(CColorDrawListBrush **)v53[0];
              *(_QWORD *)v53[0] = v53[1];
              if ( v45 )
                CColorDrawListBrush::`vector deleting destructor'(v45, 1u);
            }
            if ( IntermediateSurfaceBrush >= 0 )
            {
              *((_QWORD *)a6 + 7) = v52;
              goto LABEL_25;
            }
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v45, 0LL, 0, IntermediateSurfaceBrush, 0x170u, 0LL);
            v40 = v52;
            goto LABEL_67;
          }
          v46 = 360;
LABEL_97:
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v46, 0LL);
          goto LABEL_25;
        }
        v41 = a3->width;
        v50.left = 0.0;
        v50.top = 0.0;
        v42 = a3->height;
        v50.right = v41;
        v50.bottom = v42;
        v48 = 0LL;
        v53[1] = 0LL;
        v24 = v52;
        v53[0] = (struct CColorDrawListBrush *)&v48;
        LOBYTE(v54) = 1;
        IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(v52, &v50);
        if ( (_BYTE)v54 )
        {
          v15 = *(CDrawListBrush **)v53[0];
          *(_QWORD *)v53[0] = v53[1];
          if ( v15 )
            CEmptyRegionDrawListBrush::`scalar deleting destructor'(v15, 1u);
        }
        if ( IntermediateSurfaceBrush >= 0 )
        {
          v8 = v48;
          v48 = 0LL;
          if ( v49 )
          {
            std::default_delete<CDrawListBrush>::operator()(v15, v49);
            v15 = v48;
            if ( v48 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v48, 1u);
          }
          goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, IntermediateSurfaceBrush, 0x148u, 0LL);
        if ( v48 )
          CEmptyRegionDrawListBrush::`scalar deleting destructor'(v48, 1u);
LABEL_52:
        v8 = v49;
        goto LABEL_25;
      }
      goto LABEL_84;
    }
    std::default_delete<CDrawListBrush>::operator()(v15, v38);
    goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v36, 0LL, 0, IntermediateSurfaceBrush, 0xD4u, 0LL);
  v40 = v47;
LABEL_67:
  if ( v40 )
    CColorDrawListBrush::`vector deleting destructor'(v40, 1u);
LABEL_25:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v59);
  if ( v8 )
    std::default_delete<CDrawListBrush>::operator()(v25, v8);
  return (unsigned int)IntermediateSurfaceBrush;
}
