/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180045CD0
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x180049034 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180008608 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1800086E0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x180009E6C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x18000A4B4 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18002040C (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x1800204C0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180045C98 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     FindBaseSimpleInputBrush @ 0x180046010 (FindBaseSimpleInputBrush.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180046094 (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x180048904 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180049D5C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18004A5C0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004A600 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18004A66C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004A6D4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18004C460 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C3570 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019F2B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CDrawListBrush **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v6; // rbx
  struct _D3DCOLORVALUE *v9; // r12
  struct CBrush *NamedInput; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int IntermediateSurfaceBrush; // esi
  CDrawListBrush *v15; // rcx
  struct CColorDrawListBrush *v16; // rax
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // al
  CDrawListBrush *v23; // rdi
  CD3DDevice **v24; // r15
  __int64 v25; // rcx
  FLOAT v27; // xmm0_4
  CEmptyRegionDrawListBrush *v28; // rcx
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  CGeometryOnlyDrawListBrush *v33; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CDrawListBrush *v36; // rax
  __int128 v37; // xmm0
  CSurfaceDrawListBrush *v38; // rcx
  CSurfaceDrawListBrush *v39; // rdx
  int v40; // edi
  CColorDrawListBrush *v41; // rcx
  unsigned int v42; // r8d
  CDrawListBrush *v43; // rcx
  __int64 (__fastcall **v44)(_QWORD, __int64); // rax
  __int64 v45; // rcx
  unsigned int v46; // r8d
  unsigned int v47; // r8d
  CColorDrawListBrush *v48; // rcx
  __int128 v49; // xmm0
  int v50; // eax
  CColorDrawListBrush *v51; // rcx
  unsigned int v52; // r8d
  unsigned int v53; // [rsp+20h] [rbp-E0h]
  CDrawListBrush *v54; // [rsp+30h] [rbp-D0h] BYREF
  struct CColorDrawListBrush *v55[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v56; // [rsp+48h] [rbp-B8h]
  CSurfaceDrawListBrush *v57; // [rsp+50h] [rbp-B0h] BYREF
  CColorDrawListBrush *v58; // [rsp+58h] [rbp-A8h] BYREF
  CSurfaceDrawListBrush *v59; // [rsp+60h] [rbp-A0h] BYREF
  struct CColorDrawListBrush *v60[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  _QWORD v62[2]; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+90h] [rbp-70h]
  __int16 v64; // [rsp+DCh] [rbp-24h]
  char v65; // [rsp+DEh] [rbp-22h]
  _BYTE v66[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+F4h] [rbp-Ch]
  struct CColorDrawListBrush *v69; // [rsp+108h] [rbp+8h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+130h] [rbp+30h] BYREF

  v58 = a2;
  v6 = 0LL;
  v57 = 0LL;
  LODWORD(v54) = a4;
  v9 = (struct _D3DCOLORVALUE *)((char *)a6 + 48);
  *((_QWORD *)a6 + 6) = 0LL;
  *((_QWORD *)a6 + 7) = 0LL;
  LODWORD(v59) = *((_DWORD *)a6 + 18);
  NamedInput = CBrushRenderingGraph::GetNamedInput((CBrushRenderingGraph *)this, (unsigned int)v59);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v66, a2, a3);
  v12 = (*(__int64 (__fastcall **)(struct CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)NamedInput + 312LL))(
          NamedInput,
          a2,
          a3);
  IntermediateSurfaceBrush = v12;
  if ( v12 < 0 )
  {
    v53 = 146;
    goto LABEL_89;
  }
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(struct CBrush *, _BYTE *))(*(_QWORD *)NamedInput + 320LL))(
                               NamedInput,
                               v66);
  if ( IntermediateSurfaceBrush < 0 )
    goto LABEL_78;
  v16 = v69;
  v69 = 0LL;
  v55[0] = v16;
  std::unique_ptr<CDrawListPrimitive>::operator=((__int64 *)&v57, (__int64 *)v55);
  if ( v55[0] )
    std::default_delete<CShape>::operator()((__int64)v15, (__int64 (__fastcall ***)(_QWORD, __int64))v55[0]);
  v6 = v57;
  if ( !v57 )
  {
LABEL_77:
    v49 = v68;
    v50 = v67;
    *((_BYTE *)a6 + 69) = 1;
    *(_OWORD *)&v9->r = v49;
    *((_DWORD *)a6 + 16) = v50;
LABEL_78:
    v24 = (CD3DDevice **)v58;
    goto LABEL_19;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(
                                                        (CBrushRenderingGraph *)this,
                                                        (unsigned int)v59);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v60, (CSurfaceDrawListBrush *)((char *)v6 + 8), SurfaceTransform);
    v29 = v61;
    *(_OWORD *)v30 = *(_OWORD *)v60;
    *(_QWORD *)(v30 + 16) = v29;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v6);
  v19 = BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush )
    {
      v15 = this[18];
      v31 = 44LL * a5;
      v32 = *((_QWORD *)v15 + (unsigned int)v54);
      if ( !*(_BYTE *)(v32 + v31 + 76) && !*(_BYTE *)(v32 + v31 + 77) )
        goto LABEL_10;
    }
    CBrushDrawListGenerator::AttachInput(v66, 0LL, &v57);
    v54 = 0LL;
    v55[0] = (struct CColorDrawListBrush *)&v54;
    v55[1] = 0LL;
    v56 = 1;
    IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(&v55[1]);
    if ( v56 )
    {
      v33 = *(CGeometryOnlyDrawListBrush **)v55[0];
      *(_QWORD *)v55[0] = v55[1];
      if ( v33 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33, 1u);
    }
    if ( IntermediateSurfaceBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v33, 0LL, 0, IntermediateSurfaceBrush, 0xD1u, 0LL);
    }
    else
    {
      width = a3->width;
      height = a3->height;
      v36 = v54;
      v55[0] = 0LL;
      *(FLOAT *)&v55[1] = width;
      *((_BYTE *)v54 + 52) = 1;
      *((_DWORD *)v36 + 12) = 50529027;
      *((FLOAT *)&v55[1] + 1) = height;
      v37 = *(_OWORD *)v55;
      v55[1] = 0LL;
      v56 = 1;
      *((_OWORD *)v36 + 2) = v37;
      v62[0] = v54;
      v55[0] = (struct CColorDrawListBrush *)&v59;
      v62[1] = 0LL;
      v63 = 0;
      v64 = 1;
      v65 = 0;
      v59 = 0LL;
      IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                   (CBrushDrawListGenerator *)v66,
                                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v62,
                                   &v55[1]);
      if ( v56 )
      {
        v38 = *(CSurfaceDrawListBrush **)v55[0];
        *(_QWORD *)v55[0] = v55[1];
        if ( v38 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v38, 1u);
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        v39 = v57;
        v6 = v59;
        v59 = 0LL;
        v57 = v6;
        if ( v39 )
          std::default_delete<CShape>::operator()((__int64)v38, (__int64 (__fastcall ***)(_QWORD, __int64))v39);
        v40 = v67;
        CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v66);
        v67 = v40 | 0x100;
        if ( v59 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v59, 1u);
        v15 = v54;
        if ( v54 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v54, 1u);
LABEL_10:
        if ( v6 )
        {
          matrix = *(D2D1_MATRIX_3X2_F *)((char *)v6 + 8);
          if ( !D2D1IsMatrixInvertible(&matrix) )
          {
            v24 = (CD3DDevice **)v58;
            IntermediateSurfaceBrush = -2003304441;
            goto LABEL_71;
          }
          v20 = FindBaseSimpleInputBrush(v6);
          v21 = v20;
          if ( v20 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, 2LL) )
          {
            CDrawListBitmap::operator=(a6, v21 + 56);
            v22 = 0;
          }
          else
          {
            v22 = 1;
          }
          *((_BYTE *)a6 + 69) = v22;
          if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 5LL) )
          {
            v23 = v6;
            if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 4LL) )
            {
              v24 = (CD3DDevice **)v58;
LABEL_18:
              v6 = 0LL;
              *((_DWORD *)a6 + 16) = v67;
              *((_QWORD *)a6 + 10) = v23;
LABEL_19:
              if ( IntermediateSurfaceBrush != -2147024846
                && IntermediateSurfaceBrush != -2147022876
                && IntermediateSurfaceBrush != -2003304441 )
              {
LABEL_22:
                if ( IntermediateSurfaceBrush < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, IntermediateSurfaceBrush, 0x13Eu, 0LL);
                  goto LABEL_24;
                }
                if ( !*((_BYTE *)a6 + 69) )
                  goto LABEL_24;
                v12 = CDrawListBitmap::SetTransparent(a6, v24);
                IntermediateSurfaceBrush = v12;
                if ( v12 >= 0 )
                {
                  if ( *((_QWORD *)a6 + 10) )
                    goto LABEL_24;
                  v58 = 0LL;
                  v60[0] = (struct CColorDrawListBrush *)&v58;
                  v60[1] = 0LL;
                  LOBYTE(v61) = 1;
                  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v9, &v60[1]);
                  if ( (_BYTE)v61 )
                  {
                    v51 = *(CColorDrawListBrush **)v60[0];
                    *(_QWORD *)v60[0] = v60[1];
                    if ( v51 )
                      CColorDrawListBrush::`vector deleting destructor'(v51, 1, v52);
                  }
                  if ( IntermediateSurfaceBrush >= 0 )
                  {
                    *((_QWORD *)a6 + 10) = v58;
                    goto LABEL_24;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v51, 0LL, 0, IntermediateSurfaceBrush, 0x14Bu, 0LL);
                  v48 = v58;
                  goto LABEL_68;
                }
                v53 = 323;
LABEL_89:
                MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v53, 0LL);
                goto LABEL_24;
              }
LABEL_71:
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
                McTemplateU0q_EventWriteTransfer(
                  v15,
                  &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
                  (unsigned int)IntermediateSurfaceBrush);
              *((_BYTE *)a6 + 69) = 1;
              *((_DWORD *)a6 + 16) = 0;
              IntermediateSurfaceBrush = 0;
              goto LABEL_22;
            }
          }
          v27 = a3->width;
          v55[0] = 0LL;
          v55[1] = (struct CColorDrawListBrush *)__PAIR64__(LODWORD(a3->height), LODWORD(v27));
          v54 = 0LL;
          v60[1] = 0LL;
          v24 = (CD3DDevice **)v58;
          v60[0] = (struct CColorDrawListBrush *)&v54;
          LOBYTE(v61) = 1;
          IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(
                                       v58,
                                       (struct D2D_RECT_F *)v55,
                                       (__int64 *)&v57,
                                       &v60[1]);
          if ( (_BYTE)v61 )
          {
            v28 = *(CEmptyRegionDrawListBrush **)v60[0];
            *(_QWORD *)v60[0] = v60[1];
            if ( v28 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v28, 1);
          }
          if ( IntermediateSurfaceBrush >= 0 )
          {
            v15 = 0LL;
            v23 = v54;
            v54 = 0LL;
            if ( v57 )
            {
              std::default_delete<CShape>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v57);
              v15 = v54;
            }
            if ( v15 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v15, 1);
            goto LABEL_18;
          }
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, IntermediateSurfaceBrush, 0x123u, 0LL);
          if ( v54 )
            CEmptyRegionDrawListBrush::`scalar deleting destructor'(v54, 1);
LABEL_57:
          v6 = v57;
          goto LABEL_24;
        }
        goto LABEL_77;
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v38, 0LL, 0, IntermediateSurfaceBrush, 0xD8u, 0LL);
      if ( v59 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v59, 1u);
    }
    if ( v54 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v54, 1u);
    goto LABEL_57;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
          BaseSimpleInputBrush,
          0LL) )
    goto LABEL_10;
  v54 = 0LL;
  v55[0] = (struct CColorDrawListBrush *)&v54;
  v55[1] = 0LL;
  *(_OWORD *)&v9->r = v68;
  v56 = 1;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v9, &v55[1]);
  if ( v56 )
  {
    v41 = *(CColorDrawListBrush **)v55[0];
    *(_QWORD *)v55[0] = v55[1];
    if ( v41 )
      CColorDrawListBrush::`vector deleting destructor'(v41, 1, v42);
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    CDrawListBrush::CopyPrimitiveClamp(v54, (const struct CDrawListBrush *)v19);
    v43 = v54;
    *(_OWORD *)((char *)v54 + 8) = *(_OWORD *)(v19 + 8);
    *((_QWORD *)v43 + 3) = *(_QWORD *)(v19 + 24);
    v44 = *(__int64 (__fastcall ***)(_QWORD, __int64))v6;
    v55[0] = v54;
    v54 = 0LL;
    ((__int64 (__fastcall **)(CSurfaceDrawListBrush *, __int64))v44)[5](v6, (__int64)v55);
    if ( v55[0] )
      std::default_delete<CShape>::operator()(v45, (__int64 (__fastcall ***)(_QWORD, __int64))v55[0]);
    v15 = v54;
    if ( v54 )
      CColorDrawListBrush::`vector deleting destructor'(v54, 1, v46);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v41, 0LL, 0, IntermediateSurfaceBrush, 0xC3u, 0LL);
  v48 = v54;
LABEL_68:
  if ( v48 )
    CColorDrawListBrush::`vector deleting destructor'(v48, 1, v47);
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v66);
  if ( v6 )
    std::default_delete<CShape>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v6);
  return (unsigned int)IntermediateSurfaceBrush;
}
