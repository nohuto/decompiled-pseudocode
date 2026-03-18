/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025FB2C
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020B018 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180049D5C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18004A5C0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004A600 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004A6D4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800539F4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800555E4 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180056938 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18005712C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180057D20 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180058404 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180058540 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C3570 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7F90 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180178AC0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178BAC (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017A024 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017A134 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18025F470 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
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
  unsigned int v56; // r8d
  CGeometry *v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 (__fastcall *v63)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **); // rdi
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  CGeometry *v68; // rcx
  int ShapeData; // eax
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r9
  int v74; // eax
  float v75; // xmm1_4
  int v76; // eax
  __int64 v77; // rcx
  struct CShape **v78; // rcx
  struct CShape **v79; // rcx
  unsigned int v80; // r8d
  unsigned int v81; // r8d
  int v82; // eax
  __int64 v83; // rcx
  unsigned int v84; // ebx
  struct ID2D1StrokeStyle1 *v86; // [rsp+28h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v87; // [rsp+38h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v88; // [rsp+40h] [rbp-C8h] BYREF
  CDrawListCache *v89; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v90; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+58h] [rbp-B0h]
  struct CShape *v92; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+68h] [rbp-A0h]
  struct CShape *v94; // [rsp+70h] [rbp-98h] BYREF
  __int64 v95; // [rsp+78h] [rbp-90h]
  struct CShape *v96; // [rsp+80h] [rbp-88h] BYREF
  char v97; // [rsp+88h] [rbp-80h]
  struct D2D_SIZE_F v98; // [rsp+90h] [rbp-78h] BYREF
  CGeometryOnlyDrawListBrush *v99; // [rsp+98h] [rbp-70h] BYREF
  __int128 v100; // [rsp+A0h] [rbp-68h]
  _DWORD *v101; // [rsp+B0h] [rbp-58h]
  __int128 v102; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v103; // [rsp+C8h] [rbp-40h]
  _QWORD v104[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v105; // [rsp+E8h] [rbp-20h]
  __int16 v106; // [rsp+134h] [rbp+2Ch]
  char v107; // [rsp+136h] [rbp+2Eh]
  struct CGeometryOnlyDrawListBrush *v108[2]; // [rsp+138h] [rbp+30h] BYREF
  int v109; // [rsp+148h] [rbp+40h]
  int v110; // [rsp+14Ch] [rbp+44h]
  struct _D3DCOLORVALUE v111; // [rsp+150h] [rbp+48h] BYREF
  struct _D3DCOLORVALUE v112; // [rsp+160h] [rbp+58h] BYREF
  struct D2D_MATRIX_3X2_F v113; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v114[40]; // [rsp+188h] [rbp+80h] BYREF
  int v115; // [rsp+1D0h] [rbp+C8h]
  struct CDrawListEntry **v116[288]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = &v113;
  *(_QWORD *)&v113.m[2][0] = 0LL;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_OWORD *)&v113.m11 = _xmm;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v116);
  v89 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v89);
  v3 = CDrawListCache::Create(&v89);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
    goto LABEL_90;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 63);
  v101 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v5 == v101 )
    goto LABEL_90;
  v6 = v89;
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
        v68 = *(v7 - 4);
        v96 = 0LL;
        v97 = 0;
        ShapeData = CGeometry::GetShapeData(v68, 0LL, (struct CShapePtr *)&v96);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v71 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v71 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x50u, 0LL);
          }
          else
          {
            v73 = *((_QWORD *)this + 41);
            *(struct _D3DCOLORVALUE *)&v112.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
            v74 = *(_DWORD *)(v73 + 3232);
            if ( v74 )
              v75 = *(float *)(*(_QWORD *)(v73 + 3248) + 4LL * (unsigned int)(v74 - 1));
            else
              v75 = *(float *)&FLOAT_1_0;
            v112.a = v112.a * v75;
            v76 = CDrawingContext::FillShapeWithColor((CDrawingContext *)v73, v96, &v112);
            if ( v76 >= 0 )
            {
              v31 = &v96;
              goto LABEL_56;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x56u, 0LL);
          }
        }
        v79 = &v96;
LABEL_88:
        CShapePtr::Release((CShapePtr *)v79);
        goto LABEL_90;
      case 3:
        v57 = *(v7 - 4);
        v87 = 0LL;
        v92 = 0LL;
        LOBYTE(v93) = 0;
        v58 = CGeometry::GetShapeData(v57, 0LL, (struct CShapePtr *)&v92);
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x62u, 0LL);
        }
        else
        {
          v60 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v60 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x67u, 0LL);
          }
          else
          {
            v62 = (__int64)*(v7 - 1);
            v63 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v62 + 344LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v87);
            v64 = v63(v62, *((_QWORD *)this + 41), v7 - 3, &v87);
            if ( v64 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x6Bu, 0LL);
            }
            else
            {
              (*(void (**)(void))(*(_QWORD *)v87 + 32LL))();
              v66 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v92, v87);
              if ( v66 >= 0 )
              {
                v19 = &v92;
                goto LABEL_48;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x6Fu, 0LL);
            }
          }
        }
        v78 = &v92;
LABEL_83:
        CShapePtr::Release((CShapePtr *)v78);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v87);
        goto LABEL_90;
    }
    if ( *v5 == 4 )
      break;
    if ( *v5 == 5 )
    {
      v20 = *(v7 - 4);
      v94 = 0LL;
      LOBYTE(v95) = 0;
      v21 = CGeometry::GetShapeData(v20, 0LL, (struct CShapePtr *)&v94);
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
          *(struct _D3DCOLORVALUE *)&v111.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
          v26 = *(_DWORD *)(v25 + 3232);
          if ( v26 )
            v27 = *(float *)(*(_QWORD *)(v25 + 3248) + 4LL * (unsigned int)(v26 - 1));
          else
            v27 = *(float *)&FLOAT_1_0;
          v28 = *((float *)v7 - 2);
          v86 = *v7;
          v111.a = v111.a * v27;
          v29 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v25, v94, &v111, v28, v86);
          if ( v29 >= 0 )
          {
            v31 = &v94;
LABEL_56:
            CShapePtr::Release((CShapePtr *)v31);
            goto LABEL_58;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC9u, 0LL);
        }
      }
      v79 = &v94;
      goto LABEL_88;
    }
    if ( *v5 == 6 )
    {
      v8 = *(v7 - 4);
      v87 = 0LL;
      v90 = 0LL;
      LOBYTE(v91) = 0;
      v9 = CGeometry::GetShapeData(v8, 0LL, (struct CShapePtr *)&v90);
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
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v87);
          v15 = v14(v13, *((_QWORD *)this + 41), v7 - 3, &v87);
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDEu, 0LL);
          }
          else
          {
            (*(void (**)(void))(*(_QWORD *)v87 + 32LL))();
            v17 = CDrawingContext::StrokeShapeWithBrush(*((CDrawingContext **)this + 41), v90, v87, *(float *)v7, v7[1]);
            if ( v17 >= 0 )
            {
              v19 = &v90;
LABEL_48:
              CShapePtr::Release((CShapePtr *)v19);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v87);
              goto LABEL_58;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE4u, 0LL);
          }
        }
      }
      v78 = &v90;
      goto LABEL_83;
    }
LABEL_58:
    v5 += 14;
    v7 += 7;
    if ( v5 == v101 )
      goto LABEL_90;
  }
  v32 = *((float *)v7 - 6) - *((float *)v7 - 8);
  v33 = *((float *)v7 - 5) - *((float *)v7 - 7);
  v34 = (struct CDrawingContext *)*((_QWORD *)this + 41);
  v87 = 0LL;
  v98.width = v32;
  v98.height = v33;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v114, v34, &v98);
  v35 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*(v7 - 2) + 320LL))(*(v7 - 2), v114);
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
  if ( v115 )
    goto LABEL_33;
  v88 = 0LL;
  v108[0] = (struct CGeometryOnlyDrawListBrush *)&v88;
  v108[1] = 0LL;
  LOBYTE(v109) = 1;
  v40 = CGeometryOnlyDrawListBrush::Create(&v108[1]);
  if ( (_BYTE)v109 )
  {
    v39 = v108[1];
    v42 = *(CGeometryOnlyDrawListBrush **)v108[0];
    *(_QWORD *)v108[0] = v108[1];
    if ( v42 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42, 1, v41);
  }
  if ( v40 >= 0 )
  {
    v99 = v88;
    v88 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v114, 0, &v99);
    if ( v99 )
      std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v99);
    if ( v88 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v88, 1, v44);
LABEL_33:
    v45 = *((_DWORD *)v7 - 7);
    *(_OWORD *)v108 = _xmm;
    v109 = *((_DWORD *)v7 - 8);
    v110 = v45;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v102,
      (const struct D2D1::Matrix3x2F *)v108,
      (const struct D2D1::Matrix3x2F *)v1);
    v47 = v103;
    *(_OWORD *)((char *)v46 + 8) = v102;
    *((_QWORD *)v46 + 3) = v47;
    if ( *((_BYTE *)v46 + 52) )
    {
      v108[1] = 0LL;
      v108[0] = (struct CGeometryOnlyDrawListBrush *)&v87;
      LOBYTE(v109) = 1;
      v49 = CGeometryOnlyDrawListBrush::Create(&v108[1]);
      if ( (_BYTE)v109 )
      {
        v48 = v108[1];
        v51 = *(CGeometryOnlyDrawListBrush **)v108[0];
        *(_QWORD *)v108[0] = v108[1];
        if ( v51 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v51, 1, v50);
      }
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v48, 0LL, 0, v49, 0x9Du, 0LL);
        goto LABEL_76;
      }
      v46 = v87;
    }
    *(_QWORD *)&v100 = 0LL;
    *((_BYTE *)v46 + 52) = 1;
    *((_DWORD *)v46 + 12) = 50529027;
    *((_QWORD *)&v100 + 1) = __PAIR64__(LODWORD(v33), LODWORD(v32));
    v104[1] = 0LL;
    v105 = 0;
    *((_OWORD *)v46 + 2) = v100;
    v104[0] = v87;
    v106 = 1;
    v107 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v114,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v104,
                 (struct CDrawListEntryBuilder *)v116);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, DrawList, 0xACu, 0LL);
      goto LABEL_76;
    }
    CDrawListCache::Update(v6, *((struct CDrawingContext **)this + 41), v116);
    v54 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v6);
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0xAFu, 0LL);
      goto LABEL_76;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v116);
    CDrawListCache::Invalidate(v6);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v114);
    if ( v87 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v87, 1, v56);
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, v40, 0x88u, 0LL);
  if ( v88 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v88, 1, v80);
LABEL_76:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v114);
  if ( v87 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v87, 1, v81);
LABEL_90:
  v82 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  v84 = v82;
  if ( v82 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0xECu, 0LL);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v89);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v116);
  return v84;
}
