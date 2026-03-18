/*
 * XREFs of ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801BFAE8
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BF640 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180009DDC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800683F0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x1800755B8 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x1801BF5AC (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(
        CCompositionSkyBoxBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawListPrimitive **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int i; // ebx
  int v10; // eax
  CTransform3D *v11; // rcx
  const struct CMILMatrix *Matrix; // rax
  const struct MilPoint4F *v13; // rdx
  __int64 v14; // rbx
  int v15; // xmm0_4
  _DWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // r11
  int v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  unsigned int v28; // [rsp+58h] [rbp-A8h]
  _DWORD *v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+6Ch] [rbp-94h]
  _DWORD *v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  _QWORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v36[4]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v37; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v38; // [rsp+E0h] [rbp-20h] BYREF
  int v39; // [rsp+E8h] [rbp-18h]
  _DWORD v40[64]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v41[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  v26 = 0;
  v27 = 0;
  v28 = 0;
  v36[0] = _xmm;
  v36[2] = _xmm;
  v36[1] = _xmm;
  v25 = 0LL;
  v37 = 32085;
  v36[3] = _xmm;
  v6 = DynArrayImpl<0>::Grow((__int64)&v25, 2u, 36, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x12Fu, 0LL);
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      v10 = *((_DWORD *)this + 28);
      if ( _bittest(&v10, i) )
        DynArray<unsigned short,0>::AddMultipleAndSet((__int64)&v25, (__int64 *)((char *)&unk_1803056C0 + 12 * i));
    }
    CMILMatrix::Scale((CMILMatrix *)v36, *((float *)this + 27), *((float *)this + 27), *((float *)this + 27));
    CMILMatrix::Translate((CMILMatrix *)v36, *((float *)this + 24), *((float *)this + 25), *((float *)this + 26));
    v11 = (CTransform3D *)*((_QWORD *)this + 11);
    if ( v11 )
    {
      Matrix = CTransform3D::GetMatrix(v11, a2 + 1);
      CMILMatrix::Multiply((CMILMatrix *)v36, Matrix);
    }
    CMILMatrix::Translate((CMILMatrix *)v36, a2[1].width * 0.5, a2[1].height * 0.5, 0.0);
    v13 = (const struct MilPoint4F *)&unk_180305710;
    v14 = 8LL;
    do
    {
      CMILMatrix::Transform((CMILMatrix *)v36, v13, (struct MilPoint4F *)&v38, 1);
      v15 = HIDWORD(v38);
      v17 = *v16;
      *(_DWORD *)((char *)&v40[3] + v18) = -1;
      *(_DWORD *)((char *)&v40[7] + v18) = 0;
      *(_DWORD *)((char *)&v41[2] + v18) = 0;
      v19 = v38;
      *(_DWORD *)((char *)&v41[1] + v18) = v15;
      *(_DWORD *)((char *)&v40[1] + v18) = v15;
      *(_DWORD *)((char *)&v40[2] + v18) = v39;
      v20 = v16[1] ^ _xmm;
      *(_DWORD *)((char *)&v40[4] + v18) = v17;
      v21 = v16[2];
      v13 = (const struct MilPoint4F *)(v16 + 4);
      *(_DWORD *)((char *)&v40[5] + v18) = v20;
      *(_DWORD *)((char *)v40 + v18) = v19;
      *(_DWORD *)((char *)&v40[6] + v18) = v21;
      *(_DWORD *)((char *)v41 + v18) = v19;
      *(_DWORD *)((char *)&v41[3] + v18) = 1065353216;
      *(_OWORD *)((char *)&v40[68] + v18) = *(_OWORD *)((char *)&v40[4] + v18);
      --v14;
    }
    while ( v14 );
    v32 = v40;
    v29 = v41;
    v38 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
    v33 = 32;
    v34 = 8;
    v30 = 32;
    v31 = 8;
    if ( !(_QWORD)v25 && v28 )
    {
      ((void (__fastcall *)(_QWORD, const struct MilPoint4F *))`gsl::details::get_terminate_handler'::`2'::handler)(
        0LL,
        v13);
      __debugbreak();
    }
    v35[0] = v28;
    v35[1] = v25;
    v22 = CDrawListPrimitive::Create(0, (__int64)&v32, (__int64)&v29, 2u, (__int64)v35, (__int64)&v38, 0, a3);
    v8 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x16Fu, 0LL);
    else
      v8 = 0;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v25);
  return v8;
}
