/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020D9D8 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18003732C (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180037C10 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18003A34C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003A8F0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003A930 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18003AABC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ADA4 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18003AEE0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18004CAFC (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18004D5B4 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800A8544 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18017B6D0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B7BC (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017CC34 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017CD44 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180261EE0 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // r13
  int v3; // eax
  __int64 v4; // rcx
  _DWORD *v5; // r12
  CDrawListCache *v6; // rbx
  struct ID2D1StrokeStyle1 **v7; // r15
  CGeometry *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **); // rdi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct CShape **v19; // rcx
  CGeometry *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // eax
  float v27; // xmm1_4
  float v28; // xmm3_4
  int v29; // eax
  __int64 v30; // rcx
  struct CShape **v31; // rcx
  float v32; // xmm6_4
  float v33; // xmm7_4
  struct CDrawingContext *v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  struct CGeometryOnlyDrawListBrush *v39; // rcx
  int v40; // edi
  unsigned int v41; // r8d
  CGeometryOnlyDrawListBrush *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r8d
  int v45; // xmm1_4
  CGeometryOnlyDrawListBrush *v46; // rax
  __int64 v47; // xmm1_8
  struct CGeometryOnlyDrawListBrush *v48; // rcx
  int v49; // edi
  unsigned int v50; // r8d
  CGeometryOnlyDrawListBrush *v51; // rax
  int DrawList; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // r8d
  CGeometry *v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 (__fastcall *v66)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **); // rdi
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  CGeometry *v71; // rcx
  int ShapeData; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // r9
  int v77; // eax
  float v78; // xmm1_4
  int v79; // eax
  __int64 v80; // rcx
  struct CShape **v81; // rcx
  struct CShape **v82; // rcx
  unsigned int v83; // r8d
  unsigned int v84; // r8d
  int v85; // eax
  __int64 v86; // rcx
  unsigned int v87; // ebx
  struct ID2D1StrokeStyle1 *v89; // [rsp+28h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v90; // [rsp+38h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v91; // [rsp+40h] [rbp-C8h] BYREF
  CDrawListCache *v92; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v93; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+58h] [rbp-B0h]
  struct CShape *v95; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+68h] [rbp-A0h]
  struct CShape *v97; // [rsp+70h] [rbp-98h] BYREF
  __int64 v98; // [rsp+78h] [rbp-90h]
  struct CShape *v99; // [rsp+80h] [rbp-88h] BYREF
  char v100; // [rsp+88h] [rbp-80h]
  struct D2D_SIZE_F v101; // [rsp+90h] [rbp-78h] BYREF
  CGeometryOnlyDrawListBrush *v102; // [rsp+98h] [rbp-70h] BYREF
  __int128 v103; // [rsp+A0h] [rbp-68h]
  _DWORD *v104; // [rsp+B0h] [rbp-58h]
  __int128 v105; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-40h]
  _QWORD v107[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v108; // [rsp+E8h] [rbp-20h]
  __int16 v109; // [rsp+134h] [rbp+2Ch]
  char v110; // [rsp+136h] [rbp+2Eh]
  struct CGeometryOnlyDrawListBrush *v111[2]; // [rsp+138h] [rbp+30h] BYREF
  int v112; // [rsp+148h] [rbp+40h]
  int v113; // [rsp+14Ch] [rbp+44h]
  struct _D3DCOLORVALUE v114; // [rsp+150h] [rbp+48h] BYREF
  struct _D3DCOLORVALUE v115; // [rsp+160h] [rbp+58h] BYREF
  struct D2D_MATRIX_3X2_F v116; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v117[40]; // [rsp+188h] [rbp+80h] BYREF
  int v118; // [rsp+1D0h] [rbp+C8h]
  struct CDrawListEntry **v119[288]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = &v116;
  *(_QWORD *)&v116.m[2][0] = 0LL;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_OWORD *)&v116.m11 = _xmm;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v119);
  v92 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v92);
  v3 = CDrawListCache::Create(&v92);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
    goto LABEL_90;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 63);
  v104 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v5 == v104 )
    goto LABEL_90;
  v6 = v92;
  v7 = (struct ID2D1StrokeStyle1 **)(v5 + 10);
  while ( 1 )
  {
    switch ( *v5 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v7 - 4);
        *((_BYTE *)this + 528) = 1;
        goto LABEL_58;
      case 2:
        v71 = *(v7 - 4);
        v99 = 0LL;
        v100 = 0;
        ShapeData = CGeometry::GetShapeData(v71, 0LL, (struct CShapePtr *)&v99);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v74 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v74 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x50u, 0LL);
          }
          else
          {
            v76 = *((_QWORD *)this + 41);
            *(struct _D3DCOLORVALUE *)&v115.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
            v77 = *(_DWORD *)(v76 + 3232);
            if ( v77 )
              v78 = *(float *)(*(_QWORD *)(v76 + 3248) + 4LL * (unsigned int)(v77 - 1));
            else
              v78 = *(float *)&FLOAT_1_0;
            v115.a = v115.a * v78;
            v79 = CDrawingContext::FillShapeWithColor((CDrawingContext *)v76, v99, &v115);
            if ( v79 >= 0 )
            {
              v31 = &v99;
              goto LABEL_56;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x56u, 0LL);
          }
        }
        v82 = &v99;
LABEL_88:
        CShapePtr::Release((CShapePtr *)v82);
        goto LABEL_90;
      case 3:
        v60 = *(v7 - 4);
        v90 = 0LL;
        v95 = 0LL;
        LOBYTE(v96) = 0;
        v61 = CGeometry::GetShapeData(v60, 0LL, (struct CShapePtr *)&v95);
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x62u, 0LL);
        }
        else
        {
          v63 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v63 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x67u, 0LL);
          }
          else
          {
            v65 = (__int64)*(v7 - 1);
            v66 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v65 + 344LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v90);
            v67 = v66(v65, *((_QWORD *)this + 41), v7 - 3, &v90);
            if ( v67 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x6Bu, 0LL);
            }
            else
            {
              (*(void (**)(void))(*(_QWORD *)v90 + 32LL))();
              v69 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v95, v90);
              if ( v69 >= 0 )
              {
                v19 = &v95;
                goto LABEL_48;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x6Fu, 0LL);
            }
          }
        }
        v81 = &v95;
LABEL_83:
        CShapePtr::Release((CShapePtr *)v81);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v90);
        goto LABEL_90;
    }
    if ( *v5 == 4 )
      break;
    if ( *v5 == 5 )
    {
      v20 = *(v7 - 4);
      v97 = 0LL;
      LOBYTE(v98) = 0;
      v21 = CGeometry::GetShapeData(v20, 0LL, (struct CShapePtr *)&v97);
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xBBu, 0LL);
      }
      else
      {
        v23 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xC0u, 0LL);
        }
        else
        {
          v25 = *((_QWORD *)this + 41);
          *(struct _D3DCOLORVALUE *)&v114.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
          v26 = *(_DWORD *)(v25 + 3232);
          if ( v26 )
            v27 = *(float *)(*(_QWORD *)(v25 + 3248) + 4LL * (unsigned int)(v26 - 1));
          else
            v27 = *(float *)&FLOAT_1_0;
          v28 = *((float *)v7 - 2);
          v89 = *v7;
          v114.a = v114.a * v27;
          v29 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v25, v97, &v114, v28, v89);
          if ( v29 >= 0 )
          {
            v31 = &v97;
LABEL_56:
            CShapePtr::Release((CShapePtr *)v31);
            goto LABEL_58;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC9u, 0LL);
        }
      }
      v82 = &v97;
      goto LABEL_88;
    }
    if ( *v5 == 6 )
    {
      v8 = *(v7 - 4);
      v90 = 0LL;
      v93 = 0LL;
      LOBYTE(v94) = 0;
      v9 = CGeometry::GetShapeData(v8, 0LL, (struct CShapePtr *)&v93);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD5u, 0LL);
      }
      else
      {
        v11 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDAu, 0LL);
        }
        else
        {
          v13 = (__int64)*(v7 - 1);
          v14 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v13 + 344LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v90);
          v15 = v14(v13, *((_QWORD *)this + 41), v7 - 3, &v90);
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDEu, 0LL);
          }
          else
          {
            (*(void (**)(void))(*(_QWORD *)v90 + 32LL))();
            v17 = CDrawingContext::StrokeShapeWithBrush(*((CDrawingContext **)this + 41), v93, v90, *(float *)v7, v7[1]);
            if ( v17 >= 0 )
            {
              v19 = &v93;
LABEL_48:
              CShapePtr::Release((CShapePtr *)v19);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v90);
              goto LABEL_58;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE4u, 0LL);
          }
        }
      }
      v81 = &v93;
      goto LABEL_83;
    }
LABEL_58:
    v5 += 14;
    v7 += 7;
    if ( v5 == v104 )
      goto LABEL_90;
  }
  v32 = *((float *)v7 - 6) - *((float *)v7 - 8);
  v33 = *((float *)v7 - 5) - *((float *)v7 - 7);
  v34 = (struct CDrawingContext *)*((_QWORD *)this + 41);
  v90 = 0LL;
  v101.width = v32;
  v101.height = v33;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v117, v34, &v101);
  v35 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*(v7 - 2) + 320LL))(*(v7 - 2), v117);
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x80u, 0LL);
    goto LABEL_76;
  }
  v37 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x82u, 0LL);
    goto LABEL_76;
  }
  if ( v118 )
    goto LABEL_33;
  v91 = 0LL;
  v111[0] = (struct CGeometryOnlyDrawListBrush *)&v91;
  v111[1] = 0LL;
  LOBYTE(v112) = 1;
  v40 = CGeometryOnlyDrawListBrush::Create(&v111[1]);
  if ( (_BYTE)v112 )
  {
    v39 = v111[1];
    v42 = *(CGeometryOnlyDrawListBrush **)v111[0];
    *(_QWORD *)v111[0] = v111[1];
    if ( v42 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42, 1, v41);
  }
  if ( v40 >= 0 )
  {
    v102 = v91;
    v91 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v117, 0, &v102);
    if ( v102 )
      std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v102);
    if ( v91 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v91, 1, v44);
LABEL_33:
    v45 = *((_DWORD *)v7 - 7);
    *(_OWORD *)v111 = _xmm;
    v112 = *((_DWORD *)v7 - 8);
    v113 = v45;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v105,
      (const struct D2D1::Matrix3x2F *)v111,
      (const struct D2D1::Matrix3x2F *)v1);
    v47 = v106;
    *(_OWORD *)((char *)v46 + 8) = v105;
    *((_QWORD *)v46 + 3) = v47;
    if ( *((_BYTE *)v46 + 52) )
    {
      v111[1] = 0LL;
      v111[0] = (struct CGeometryOnlyDrawListBrush *)&v90;
      LOBYTE(v112) = 1;
      v49 = CGeometryOnlyDrawListBrush::Create(&v111[1]);
      if ( (_BYTE)v112 )
      {
        v48 = v111[1];
        v51 = *(CGeometryOnlyDrawListBrush **)v111[0];
        *(_QWORD *)v111[0] = v111[1];
        if ( v51 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v51, 1, v50);
      }
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v48, 0LL, 0, v49, 0x9Du, 0LL);
        goto LABEL_76;
      }
      v46 = v90;
    }
    *(_QWORD *)&v103 = 0LL;
    *((_BYTE *)v46 + 52) = 1;
    *((_DWORD *)v46 + 12) = 50529027;
    *((_QWORD *)&v103 + 1) = __PAIR64__(LODWORD(v33), LODWORD(v32));
    v107[1] = 0LL;
    v108 = 0;
    *((_OWORD *)v46 + 2) = v103;
    v107[0] = v90;
    v109 = 1;
    v110 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v117,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v107,
                 (struct CDrawListEntryBuilder *)v119);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, DrawList, 0xACu, 0LL);
      goto LABEL_76;
    }
    CDrawListCache::Update(v6, *((struct CDrawingContext **)this + 41), v119);
    v54 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v6);
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0xAFu, 0LL);
      goto LABEL_76;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v119);
    CDrawListCache::Invalidate(v6, v56, v57, v58);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v117);
    if ( v90 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v90, 1, v59);
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, v40, 0x88u, 0LL);
  if ( v91 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v91, 1, v83);
LABEL_76:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v117);
  if ( v90 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v90, 1, v84);
LABEL_90:
  v85 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  v87 = v85;
  if ( v85 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0xECu, 0LL);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v92);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v119);
  return v87;
}
