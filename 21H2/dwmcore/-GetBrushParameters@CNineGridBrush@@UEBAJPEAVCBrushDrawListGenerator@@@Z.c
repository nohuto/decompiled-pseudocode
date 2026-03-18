/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18005BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18005A504 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18005A5C0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008EDD0 (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18020B49C (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  const struct D2D_SIZE_F *v2; // r15
  unsigned int v3; // xmm0_4
  struct CDrawingContext *v5; // rdx
  unsigned int v7; // xmm1_4
  struct CGeometryOnlyDrawListBrush *v8; // rbx
  char v9; // r12
  CComponentTransform2D *v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  __int64 v14; // rcx
  int v15; // xmm1_4
  unsigned int v16; // xmm0_4
  int v17; // r15d
  char v18; // r9
  CNineGridDrawListBrush *v19; // rcx
  struct CGeometryOnlyDrawListBrush *v20; // rdx
  const struct D2D1::Matrix3x2F *v21; // rcx
  __int64 v22; // rcx
  CGeometryOnlyDrawListBrush *v24; // rcx
  FLOAT v25; // xmm1_4
  unsigned int v26; // xmm0_4
  CGeometryOnlyDrawListBrush *v27; // rax
  __int128 v28; // xmm1
  __int64 v29; // rcx
  FLOAT width; // xmm1_4
  unsigned int v31; // xmm0_4
  __int128 v32; // xmm1
  __int64 v33; // xmm1_8
  __int64 v34; // rdx
  CGeometryOnlyDrawListBrush *v35[2]; // [rsp+30h] [rbp-99h] BYREF
  struct CGeometryOnlyDrawListBrush *v36[2]; // [rsp+40h] [rbp-89h] BYREF
  char v37; // [rsp+50h] [rbp-79h]
  __int128 v38; // [rsp+58h] [rbp-71h] BYREF
  __int128 v39; // [rsp+68h] [rbp-61h] BYREF
  __int64 v40; // [rsp+78h] [rbp-51h]
  __int128 v41; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v42[16]; // [rsp+90h] [rbp-39h] BYREF
  int v43; // [rsp+A0h] [rbp-29h]
  __int128 v44; // [rsp+A4h] [rbp-25h]
  CGeometryOnlyDrawListBrush *v45; // [rsp+B8h] [rbp-11h]

  v2 = (const struct D2D_SIZE_F *)((char *)a2 + 8);
  *(float *)&v3 = *((float *)this + 25) * *((float *)this + 24);
  v5 = *(struct CDrawingContext **)a2;
  *(float *)&v7 = *((float *)this + 27) * *((float *)this + 26);
  v8 = 0LL;
  v36[0] = 0LL;
  *(_QWORD *)&v38 = __PAIR64__(v7, v3);
  v9 = 0;
  *((_QWORD *)&v38 + 1) = __PAIR64__(
                            *((float *)this + 31) * *((float *)this + 30),
                            *((float *)this + 29) * *((float *)this + 28));
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v42, v5, v2);
  if ( !*((_BYTE *)this + 153) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 56LL))(
           *((_QWORD *)this + 11),
           180LL) )
    {
      v10 = *(CComponentTransform2D **)(*((_QWORD *)this + 11) + 120LL);
      if ( v10 )
      {
        if ( !CComponentTransform2D::IsIdentity(v10) )
        {
          v13 = -2147022876;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
            McTemplateU0q_EventWriteTransfer(v29, &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT, 2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(v29, &dword_1803464A8, 2u, -2147022876, 0x284u, 0LL);
          goto LABEL_44;
        }
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 320LL))(*((_QWORD *)this + 11), v42);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1803464A8, 2u, v11, 0x289u, 0LL);
LABEL_44:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_20;
  }
  v35[0] = v45;
  v45 = 0LL;
  std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(v36, v35);
  if ( v35[0] )
    std::default_delete<CDrawListBrush>::operator()(v14, v35[0]);
  v8 = v36[0];
  if ( v36[0] )
  {
    if ( !*((_BYTE *)v36[0] + 52) )
    {
      if ( *((_BYTE *)this + 152) )
      {
        width = v2->width;
        v9 = 1;
        v35[0] = 0LL;
        v41 = v38;
        v31 = *((_DWORD *)a2 + 3);
        *((_BYTE *)v36[0] + 52) = 1;
        v35[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v31, LODWORD(width));
        v32 = *(_OWORD *)v35;
        *((_DWORD *)v8 + 12) = 50529027;
        *((_OWORD *)v8 + 2) = v32;
      }
      v17 = v43;
      if ( !v9 )
        goto LABEL_17;
      goto LABEL_12;
    }
    v15 = *((_DWORD *)this + 26);
    LODWORD(v35[0]) = *((_DWORD *)this + 24);
    v16 = *((_DWORD *)this + 28);
    HIDWORD(v35[0]) = v15;
    v35[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 30), v16);
    v41 = *(_OWORD *)v35;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 20) = v44;
    if ( !*((_BYTE *)this + 152) )
    {
      v17 = v43;
      goto LABEL_17;
    }
    v35[0] = 0LL;
    v36[0] = (struct CGeometryOnlyDrawListBrush *)v35;
    v41 = v38;
    v36[1] = 0LL;
    v37 = 1;
    v13 = CGeometryOnlyDrawListBrush::Create(&v36[1]);
    if ( v37 )
    {
      v24 = *(CGeometryOnlyDrawListBrush **)v36[0];
      *(_QWORD *)v36[0] = v36[1];
      if ( v24 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v24, 1);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v24, &dword_1803464A8, 2u, v13, 0x29Au, 0LL);
      if ( v35[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35[0], 1);
      goto LABEL_44;
    }
    v25 = v2->width;
    v26 = *((_DWORD *)a2 + 3);
    v27 = v35[0];
    v36[0] = 0LL;
    v36[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v26, LODWORD(v25));
    v28 = *(_OWORD *)v36;
    *((_BYTE *)v35[0] + 52) = 1;
    *((_DWORD *)v27 + 12) = 50529027;
    *((_OWORD *)v27 + 2) = v28;
    v36[0] = v35[0];
  }
  v17 = v43;
LABEL_12:
  v18 = *((_BYTE *)this + 152);
  *(_QWORD *)&v39 = v35;
  v35[0] = 0LL;
  *((_QWORD *)&v39 + 1) = 0LL;
  LOBYTE(v40) = 1;
  v13 = CNineGridDrawListBrush::Create(
          (struct CNineGridDrawListBrush *)v36,
          (int)&v41,
          (int)&v38,
          v18,
          (CNineGridDrawListBrush **)&v39 + 1);
  if ( (_BYTE)v40 )
  {
    v19 = *(CNineGridDrawListBrush **)v39;
    *(_QWORD *)v39 = *((_QWORD *)&v39 + 1);
    if ( v19 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v19, 1);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, &dword_1803464A8, 2u, v13, 0x2CAu, 0LL);
    if ( v35[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v35[0], 1);
    v8 = v36[0];
    goto LABEL_44;
  }
  v20 = v36[0];
  v8 = v35[0];
  v35[0] = 0LL;
  v36[0] = v8;
  if ( v20 )
  {
    std::default_delete<CDrawListBrush>::operator()(v19, v20);
    if ( v35[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v35[0], 1);
  }
LABEL_17:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 128)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v39, (struct CGeometryOnlyDrawListBrush *)((char *)v8 + 8), v21);
    v33 = v40;
    *(_OWORD *)v34 = v39;
    *(_QWORD *)(v34 + 16) = v33;
  }
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v36);
  v8 = v36[0];
  v13 = 0;
  *((_DWORD *)a2 + 4) = v17;
LABEL_20:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42);
  if ( v8 )
    std::default_delete<CDrawListBrush>::operator()(v22, v8);
  return (unsigned int)v13;
}
