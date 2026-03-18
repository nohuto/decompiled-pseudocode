/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180010030
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18000DB78 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800103C8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180010428 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800104E0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180037C10 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003A8F0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003A930 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A99C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006FBF0 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // esi
  unsigned int *v5; // r15
  unsigned int v6; // xmm0_4
  struct CDrawingContext *v7; // rdx
  struct CGeometryOnlyDrawListBrush *v8; // rbx
  unsigned int v9; // xmm1_4
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // xmm1_4
  unsigned int v15; // xmm0_4
  CNineGridDrawListBrush *v16; // rcx
  struct CGeometryOnlyDrawListBrush *v17; // rdx
  const struct D2D1::Matrix3x2F *v18; // rcx
  __int64 v19; // xmm1_8
  __int64 v20; // rdx
  __int64 v21; // rcx
  CComponentTransform2D *v23; // rcx
  __int64 v24; // rcx
  __int128 v25; // xmm0
  CGeometryOnlyDrawListBrush *v26; // rcx
  unsigned int v27; // xmm1_4
  unsigned int v28; // xmm0_4
  CGeometryOnlyDrawListBrush *v29; // rax
  __int128 v30; // xmm1
  unsigned int v31; // xmm1_4
  unsigned int v32; // xmm0_4
  __int128 v33; // xmm1
  CGeometryOnlyDrawListBrush *v34[2]; // [rsp+30h] [rbp-99h] BYREF
  struct CGeometryOnlyDrawListBrush *v35[2]; // [rsp+40h] [rbp-89h] BYREF
  char v36; // [rsp+50h] [rbp-79h]
  __int128 v37; // [rsp+58h] [rbp-71h] BYREF
  __int128 v38; // [rsp+68h] [rbp-61h] BYREF
  __int64 v39; // [rsp+78h] [rbp-51h]
  __int128 v40; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v41[16]; // [rsp+90h] [rbp-39h] BYREF
  int v42; // [rsp+A0h] [rbp-29h]
  __int128 v43; // [rsp+A4h] [rbp-25h]
  CGeometryOnlyDrawListBrush *v44; // [rsp+B8h] [rbp-11h]
  char v45; // [rsp+DCh] [rbp+13h]

  v4 = -2147022876;
  if ( dword_18034D358 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034D358);
    if ( dword_18034D358 == -1 )
    {
      dword_180347AE4 = -2147022876;
      Init_thread_footer(&dword_18034D358);
    }
  }
  v5 = (unsigned int *)((char *)a2 + 8);
  *(float *)&v6 = *((float *)this + 23) * *((float *)this + 22);
  v7 = *(struct CDrawingContext **)a2;
  v8 = 0LL;
  *(float *)&v9 = *((float *)this + 25) * *((float *)this + 24);
  v35[0] = 0LL;
  *(_QWORD *)&v37 = __PAIR64__(v9, v6);
  *((_QWORD *)&v37 + 1) = __PAIR64__(
                            *((float *)this + 29) * *((float *)this + 28),
                            *((float *)this + 27) * *((float *)this + 26));
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v41,
    v7,
    (const struct D2D_SIZE_F *)a2 + 1);
  if ( !*((_BYTE *)this + 145) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 56LL))(
           *((_QWORD *)this + 10),
           180LL) )
    {
      v23 = *(CComponentTransform2D **)(*((_QWORD *)this + 10) + 104LL);
      if ( v23 )
      {
        if ( !CComponentTransform2D::IsIdentity(v23) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McTemplateU0q_EventWriteTransfer(v24, &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT, 2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_180347AE0, 2u, -2147022876, 0x284u, 0LL);
          goto LABEL_45;
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 320LL))(*((_QWORD *)this + 10), v41);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180347AE0, 2u, v10, 0x289u, 0LL);
LABEL_45:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_17;
  }
  v34[0] = v44;
  v44 = 0LL;
  std::unique_ptr<CDrawListPrimitive>::operator=(v35, v34);
  if ( v34[0] )
    std::default_delete<CShape>::operator()(v12, v34[0]);
  v8 = v35[0];
  if ( v35[0] )
  {
    if ( *((_BYTE *)v35[0] + 52) )
    {
      v14 = *((_DWORD *)this + 24);
      LODWORD(v34[0]) = *((_DWORD *)this + 22);
      v15 = *((_DWORD *)this + 26);
      HIDWORD(v34[0]) = v14;
      v34[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 28), v15);
      v40 = *(_OWORD *)v34;
    }
    else
    {
      if ( !*((_BYTE *)this + 144) )
        goto LABEL_14;
      v31 = *v5;
      v34[0] = 0LL;
      v40 = v37;
      v32 = *((_DWORD *)a2 + 3);
      *((_BYTE *)v35[0] + 52) = 1;
      v34[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v32, v31);
      v33 = *(_OWORD *)v34;
      *((_DWORD *)v8 + 12) = 50529027;
      *((_OWORD *)v8 + 2) = v33;
    }
  }
  else
  {
    v25 = v43;
    *((_BYTE *)a2 + 76) = v45;
    *(_OWORD *)((char *)a2 + 20) = v25;
    if ( !*((_BYTE *)this + 144) )
      goto LABEL_14;
    v34[0] = 0LL;
    v35[0] = (struct CGeometryOnlyDrawListBrush *)v34;
    v40 = v37;
    v35[1] = 0LL;
    v36 = 1;
    v4 = CGeometryOnlyDrawListBrush::Create(&v35[1]);
    if ( v36 )
    {
      v26 = *(CGeometryOnlyDrawListBrush **)v35[0];
      *(_QWORD *)v35[0] = v35[1];
      if ( v26 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v26, 1u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, &dword_180347AE0, 2u, v4, 0x29Cu, 0LL);
      if ( v34[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34[0], 1u);
      goto LABEL_45;
    }
    v27 = *v5;
    v28 = *((_DWORD *)a2 + 3);
    v29 = v34[0];
    v35[0] = 0LL;
    v35[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v28, v27);
    v30 = *(_OWORD *)v35;
    *((_BYTE *)v34[0] + 52) = 1;
    *((_DWORD *)v29 + 12) = 50529027;
    *((_OWORD *)v29 + 2) = v30;
    v35[0] = v34[0];
  }
  LOBYTE(v13) = *((_BYTE *)this + 144);
  *(_QWORD *)&v38 = v34;
  v34[0] = 0LL;
  *((_QWORD *)&v38 + 1) = 0LL;
  LOBYTE(v39) = 1;
  v4 = CNineGridDrawListBrush::Create((unsigned int)v35, (unsigned int)&v40, (unsigned int)&v37, v13, (__int64)&v38 + 8);
  if ( (_BYTE)v39 )
  {
    v16 = *(CNineGridDrawListBrush **)v38;
    *(_QWORD *)v38 = *((_QWORD *)&v38 + 1);
    if ( v16 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v16, 1u);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, &dword_180347AE0, 2u, v4, 0x2CAu, 0LL);
    if ( v34[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v34[0], 1u);
    v8 = v35[0];
    goto LABEL_45;
  }
  v17 = v35[0];
  v8 = v34[0];
  v34[0] = 0LL;
  v35[0] = v8;
  if ( v17 )
  {
    std::default_delete<CShape>::operator()(v16, v17);
    if ( v34[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v34[0], 1u);
  }
LABEL_14:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 120)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v38, (struct CGeometryOnlyDrawListBrush *)((char *)v8 + 8), v18);
    v19 = v39;
    *(_OWORD *)v20 = v38;
    *(_QWORD *)(v20 + 16) = v19;
  }
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v35);
  v4 = 0;
  v8 = v35[0];
  *((_DWORD *)a2 + 4) = v42;
LABEL_17:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v41);
  if ( v8 )
    std::default_delete<CShape>::operator()(v21, v8);
  return (unsigned int)v4;
}
