/*
 * XREFs of ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18020E868
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1800B3CC4 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x18020E3BC (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180261134 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  const struct MilPoint4F *v16; // rdi
  __int64 v17; // rsi
  int v18; // xmm0_4
  int v19; // eax
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // eax
  __int128 v23; // xmm0
  gsl::details *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _QWORD v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  unsigned int v32; // [rsp+68h] [rbp-98h]
  int v33[2]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+7Ch] [rbp-84h]
  int v36[2]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+8Ch] [rbp-74h]
  _OWORD v39[4]; // [rsp+90h] [rbp-70h] BYREF
  char v40; // [rsp+D0h] [rbp-30h]
  char v41; // [rsp+D1h] [rbp-2Fh]
  __int64 v42; // [rsp+E0h] [rbp-20h] BYREF
  int v43; // [rsp+E8h] [rbp-18h]
  _DWORD v44[64]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v45[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  v30 = 0;
  v31 = 0;
  v32 = 0;
  v39[0] = _xmm;
  v39[2] = _xmm;
  v39[1] = _xmm;
  v29 = 0LL;
  v40 = 85;
  v39[3] = _xmm;
  v41 = v41 & 0xC0 | 0x17;
  v6 = DynArrayImpl<0>::Grow((unsigned __int64)&v29, 2u, 36, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x129u);
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      v10 = *((_DWORD *)this + 30);
      if ( _bittest(&v10, i) )
        DynArray<unsigned short,0>::AddMultipleAndSet(
          (unsigned __int64)&v29,
          (__int64 *)((char *)&unk_18038C050 + 12 * i));
    }
    CMILMatrix::Scale((CMILMatrix *)v39, *((float *)this + 29), *((float *)this + 29), *((float *)this + 29));
    CMILMatrix::Translate((CMILMatrix *)v39, *((float *)this + 26), *((float *)this + 27), *((float *)this + 28));
    v11 = (CTransform3D *)*((_QWORD *)this + 12);
    if ( v11 )
    {
      Matrix = CTransform3D::GetMatrix(v11, a2 + 1);
      CMILMatrix::Multiply((CMILMatrix *)v39, Matrix, v13, v14);
    }
    CMILMatrix::Translate((CMILMatrix *)v39, a2[1].width * 0.5, a2[1].height * 0.5, 0.0);
    v15 = 0LL;
    v16 = (const struct MilPoint4F *)&unk_18038C0A0;
    v17 = 8LL;
    do
    {
      CMILMatrix::Transform((CMILMatrix *)v39, v16, (struct MilPoint4F *)&v42, 1u);
      v18 = HIDWORD(v42);
      v19 = *(_DWORD *)v16;
      v44[v15 + 3] = -1;
      v44[v15 + 7] = 0;
      v45[v15 + 2] = 0;
      v20 = v42;
      v45[v15 + 1] = v18;
      v44[v15 + 1] = v18;
      v44[v15 + 2] = v43;
      v21 = *((_DWORD *)v16 + 1) ^ _xmm;
      v44[v15 + 4] = v19;
      v22 = *((_DWORD *)v16 + 2);
      v16 = (const struct MilPoint4F *)((char *)v16 + 16);
      v44[v15 + 5] = v21;
      v44[v15] = v20;
      v44[v15 + 6] = v22;
      v45[v15] = v20;
      v45[v15 + 3] = 1065353216;
      v23 = *(_OWORD *)&v44[v15 + 4];
      v15 += 8LL;
      *(_OWORD *)&v44[v15 + 60] = v23;
      --v17;
    }
    while ( v17 );
    *(_QWORD *)v36 = v44;
    v42 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
    v37 = 32;
    v38 = 8;
    *(_QWORD *)v33 = v45;
    v34 = 32;
    v35 = 8;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v28, v32);
    if ( v28[0] == -1LL || (v24 = (gsl::details *)v29) == 0LL && v28[0] )
    {
      gsl::details::terminate(v24);
      __debugbreak();
    }
    v28[1] = v29;
    v25 = CDrawListPrimitive::Create((__int64)v36, (int)v33, 2, (__int64)v28, (__int64)&v42, 0, (__int64 *)a3);
    v8 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x168u);
    else
      v8 = 0;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v29);
  return v8;
}
