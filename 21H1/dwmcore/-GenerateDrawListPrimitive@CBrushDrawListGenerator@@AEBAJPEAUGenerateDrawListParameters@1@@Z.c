/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180050C90
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     _lambda_b48b3c6d6c3f7194206dbcda051fd9f4_::operator() @ 0x180050AB4 (_lambda_b48b3c6d6c3f7194206dbcda051fd9f4_--operator().c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x1800127B0 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180012AF0 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180051568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180052854 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180052DF0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006D89C (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B7B20 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800B8C44 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18015A4F0 (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180168250 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801A09B8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A0CFC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A11C8 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A1294 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A1334 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801A1BFC (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801A299C (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  char v3; // r12
  CBrushDrawListGenerator *v5; // r13
  bool v6; // si
  unsigned int v7; // r8d
  unsigned int i; // r14d
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned int v11; // xmm0_4
  int v12; // xmm1_4
  bool v13; // cf
  char v14; // al
  int v15; // edx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdi
  int v23; // eax
  CShape *v24; // rsi
  __int128 v25; // xmm1
  CShape *v26; // rcx
  _QWORD *v27; // rax
  char *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, __int64); // rdx
  __int64 v33; // rcx
  char v34; // r15
  __int64 v35; // r8
  unsigned int v36; // esi
  _QWORD *v37; // r13
  __int64 v38; // rdi
  _DWORD *v39; // r14
  const struct D2D_MATRIX_3X2_F *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  char v44; // si
  __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // al
  unsigned int *v48; // rcx
  unsigned int v49; // xmm1_4
  unsigned int v50; // xmm0_4
  __int128 v51; // xmm0
  CDrawListEntryBuilder *v52; // rcx
  int v53; // eax
  _BYTE *v54; // rbx
  _BYTE *v55; // rbx
  _BYTE *v56; // rbx
  __int64 v58; // rcx
  __int64 (__fastcall ***v59)(_QWORD, _QWORD *); // rcx
  CShape *v60; // rdx
  __int64 v61; // rax
  __m128 v62; // xmm3
  __m128 v63; // xmm2
  int v64; // r8d
  int v65; // ecx
  int inserted; // eax
  HANDLE ProcessHeap; // rax
  HANDLE v68; // rax
  HANDLE v69; // rax
  CShape *v70; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v71; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v72; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v73[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v74; // [rsp+70h] [rbp-90h] BYREF
  char v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+81h] [rbp-7Fh]
  int v77; // [rsp+89h] [rbp-77h]
  __int16 v78; // [rsp+8Dh] [rbp-73h]
  char v79; // [rsp+8Fh] [rbp-71h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  _DWORD *v82; // [rsp+A0h] [rbp-60h]
  float v83[6]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v84[2]; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v85; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v86; // [rsp+D8h] [rbp-28h]
  LPVOID *v87; // [rsp+E0h] [rbp-20h]
  _BYTE v88[64]; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID v89; // [rsp+128h] [rbp+28h] BYREF
  _BYTE *v90; // [rsp+130h] [rbp+30h]
  LPVOID *p_lpMem; // [rsp+138h] [rbp+38h]
  _BYTE v92[128]; // [rsp+140h] [rbp+40h] BYREF
  LPVOID lpMem; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v94; // [rsp+1C8h] [rbp+C8h]
  char *v95; // [rsp+1D0h] [rbp+D0h]
  _BYTE v96[128]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v97; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v98[4]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v99; // [rsp+270h] [rbp+170h]
  _DWORD v100[52]; // [rsp+280h] [rbp+180h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  v3 = 0;
  *(_QWORD *)v83 = this;
  v5 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v6 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 8) - 1.0) & _xmm) < 0.0000011920929;
    v7 = *((_DWORD *)a2 + 25);
    for ( i = 0; i < v7; *(_QWORD *)&v98[2 * v9] = v10 )
    {
      v9 = i;
      v10 = *((_QWORD *)a2 + i + 7);
      if ( v10 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + i + 7), 2LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL) )
            v10 = 0LL;
          goto LABEL_11;
        }
        if ( !v6 )
        {
LABEL_90:
          v6 = 0;
          goto LABEL_11;
        }
        if ( !*(_BYTE *)(v10 + 96) )
        {
          v58 = *(_QWORD *)(v10 + 56);
          if ( v58 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58) )
              goto LABEL_90;
          }
          else
          {
            v59 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*(_QWORD *)(v10 + 64)
                                                             + 8LL
                                                             + *(int *)(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 8LL) + 8LL));
            if ( *(_DWORD *)((**v59)(v59, v84) + 4) != 3 )
              goto LABEL_90;
          }
        }
        v6 = 1;
      }
LABEL_11:
      v7 = *((_DWORD *)a2 + 25);
      ++i;
    }
    v11 = *((_DWORD *)a2 + 50);
    v12 = *((_DWORD *)a2 + 51);
    HIDWORD(v71) = *((_DWORD *)a2 + 49);
    *(_QWORD *)&v72 = (char *)a2 + 8;
    BYTE12(v72) = *((_BYTE *)a2 + 210);
    v13 = *((_BYTE *)a2 + 211) != 0;
    v14 = *((_BYTE *)a2 + 208);
    DWORD2(v71) = v12;
    *(_WORD *)((char *)&v72 + 13) = 0;
    HIBYTE(v72) = 0;
    *(_QWORD *)&v71 = __PAIR64__(v11, v7);
    v15 = *((_DWORD *)v5 + 4) | (v14 != 0 ? 0x10 : 0) | (v13 ? 0x20 : 0);
    if ( *((_BYTE *)a2 + 209) || (v16 = 1, !v6) )
      v16 = 0;
    v17 = (__int64 *)*((_QWORD *)a2 + 14);
    DWORD2(v72) = v16 | v15;
    v84[0] = v7;
    v18 = *v17;
    v84[1] = v98;
    v70 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, CShape **))(v18 + 24))(v17, v84, &v70);
    v21 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x206u, 0LL);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v70);
      return (unsigned int)v21;
    }
    v22 = *((_QWORD *)a2 + 13);
    v23 = 2;
    v24 = v70;
    v25 = v72;
    *(_OWORD *)v22 = v71;
    *(_OWORD *)(v22 + 16) = v25;
    if ( *(_DWORD *)v22 > 2u )
      v23 = 4;
    *(_DWORD *)v22 = v23;
    v26 = *(CShape **)(v22 + 32);
    if ( v26 != v24 )
    {
      if ( v24 )
      {
        (**(void (__fastcall ***)(CShape *))v24)(v24);
        v26 = *(CShape **)(v22 + 32);
      }
      *(_QWORD *)(v22 + 32) = v24;
      if ( v26 )
        (*(void (__fastcall **)(CShape *))(*(_QWORD *)v26 + 8LL))(v26);
    }
    *(_DWORD *)(v22 + 2276) = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)v24 + 32LL))(v24);
    v27 = *(_QWORD **)(v22 + 16);
    *(_WORD *)(v22 + 2297) = 0;
    if ( !*v27 && !v27[2] || *(_DWORD *)(v22 + 12) == 1 )
      *(_BYTE *)(v22 + 28) = 0;
    if ( (*(_BYTE *)(v22 + 24) & 0x10) != 0 || !*v27 )
      *(_BYTE *)(v22 + 2296) = CCommonRegistryData::EnableCpuClipping;
    else
      *(_BYTE *)(v22 + 2296) = 0;
    if ( (__int64)(*(_QWORD *)(v22 + 200) - *(_QWORD *)(v22 + 192)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v22 + 192,
        0LL);
    if ( (__int64)(*(_QWORD *)(v22 + 1192) - *(_QWORD *)(v22 + 1184)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v22 + 1184,
        0LL);
    if ( (__int64)(*(_QWORD *)(v22 + 2192) - *(_QWORD *)(v22 + 2184)) >> 1 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        v22 + 2184,
        0LL);
    *(_DWORD *)(v22 + 2176) = 0;
    *(_DWORD *)(v22 + 2272) = 0;
    if ( v70 )
      (*(void (__fastcall **)(CShape *))(*(_QWORD *)v70 + 8LL))(v70);
  }
  v70 = 0LL;
  v28 = (char *)a2 + 56;
  *(_QWORD *)v98 = &v70;
  v29 = *((unsigned int *)a2 + 24);
  *(_QWORD *)&v98[2] = 0LL;
  LOBYTE(v99) = 1;
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && v29 )
    goto LABEL_134;
  v30 = *((unsigned int *)a2 + 30);
  v73[0] = v29;
  v73[1] = (char *)a2 + 56;
  v21 = CBrushDrawListGenerator::ComputeBrushClamp(v73, v30, (char *)a2 + 124, &v98[2]);
  if ( (_BYTE)v99 )
  {
    v31 = *(_QWORD *)v98;
    v32 = **(__int64 (__fastcall *****)(_QWORD, __int64))v98;
    **(_QWORD **)v98 = *(_QWORD *)&v98[2];
    if ( v32 )
      std::default_delete<CShape>::operator()(v31, v32);
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v21, 0x219u, 0LL);
    v60 = v70;
    if ( !v70 )
      return (unsigned int)v21;
    goto LABEL_103;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v70 + 16LL))(v70) )
  {
LABEL_102:
    v60 = v70;
    if ( !v70 )
      return (unsigned int)v21;
LABEL_103:
    std::default_delete<CShape>::operator()(v33, (__int64 (__fastcall ***)(_QWORD, __int64))v60);
    return (unsigned int)v21;
  }
  if ( *((_BYTE *)a2 + 209) && CShape::IsAxisAlignedRectangle(v70) )
    v3 = 1;
  v73[0] = 0LL;
  v34 = 1;
  memset_0(v100, 0, sizeof(v100));
  LOBYTE(v35) = 0;
  v36 = 0;
  if ( *((_DWORD *)a2 + 24) )
  {
    v37 = 0LL;
    while ( 1 )
    {
      v38 = *((_QWORD *)a2 + v36 + 7);
      if ( v38 )
      {
        if ( v34 && *((_DWORD *)a2 + 49) != 1 && *(_BYTE *)(v38 + 52) && *(_DWORD *)(v38 + 48) != 50529027 )
          v34 = v35;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v38 + 8LL))(*((_QWORD *)a2 + v36 + 7), 2LL) )
        {
          v39 = &v100[13 * v36];
          if ( v3 )
          {
            CSurfaceDrawListBrush::ComputeLocalToSourceTransform((CSurfaceDrawListBrush *)v38, (struct Matrix3x3 *)v39);
LABEL_51:
            LOBYTE(v35) = 0;
          }
          else
          {
            *v39 = *(_DWORD *)(v38 + 8);
            v39[1] = *(_DWORD *)(v38 + 12);
            v39[2] = 0;
            v39[3] = *(_DWORD *)(v38 + 16);
            v39[4] = *(_DWORD *)(v38 + 20);
            v39[5] = 0;
            v39[6] = *(_DWORD *)(v38 + 24);
            v39[7] = *(_DWORD *)(v38 + 28);
            v39[8] = 1065353216;
            if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v39, (struct Matrix3x3 *)v39) )
            {
              v42 = Matrix3x3::operator*(v41, &v71, v38 + 108);
              *(_OWORD *)v39 = *(_OWORD *)v42;
              *((_OWORD *)v39 + 1) = *(_OWORD *)(v42 + 16);
              v39[8] = *(_DWORD *)(v42 + 32);
              goto LABEL_51;
            }
            *(_QWORD *)v39 = 2139095040LL;
            *((_QWORD *)v39 + 1) = v35;
            *((_QWORD *)v39 + 2) = 2139095040LL;
            *((_QWORD *)v39 + 3) = v35;
            v39[8] = 1065353216;
          }
          v43 = *((_DWORD *)a2 + 30);
          if ( _bittest(&v43, v36) )
          {
            v61 = Matrix3x3::operator*((char *)a2 + 160, &v71, v39);
            LOBYTE(v35) = 0;
            *(_OWORD *)v39 = *(_OWORD *)v61;
            *((_OWORD *)v39 + 1) = *(_OWORD *)(v61 + 16);
            v39[8] = *(_DWORD *)(v61 + 32);
          }
          else if ( !v37
                 && *(_BYTE *)(v38 + 169)
                 && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v38 + 8), v40) )
          {
            v37 = v84;
            v62 = (__m128)*(unsigned int *)(v38 + 160);
            v63 = (__m128)*(unsigned int *)(v38 + 164);
            v63.m128_f32[0] = (float)((float)(v63.m128_f32[0] * *(float *)(v38 + 16))
                                    + (float)(*(float *)(v38 + 160) * *(float *)(v38 + 8)))
                            + *(float *)(v38 + 24);
            v62.m128_f32[0] = (float)((float)(v62.m128_f32[0] * *(float *)(v38 + 12))
                                    + (float)(*(float *)(v38 + 164) * *(float *)(v38 + 20)))
                            + *(float *)(v38 + 28);
            v84[0] = _mm_unpacklo_ps(v63, v62).m128_u64[0];
          }
          if ( *(_BYTE *)(v38 + 168) )
            *(_OWORD *)(v39 + 9) = _xmm;
          else
            *(_OWORD *)(v39 + 9) = *(_OWORD *)(v38 + 144);
          goto LABEL_57;
        }
        LOBYTE(v35) = 0;
      }
LABEL_57:
      if ( ++v36 >= *((_DWORD *)a2 + 24) )
      {
        v73[0] = v37;
        v28 = (char *)a2 + 56;
        v5 = *(CBrushDrawListGenerator **)v83;
        break;
      }
    }
  }
  v85 = v88;
  v86 = v88;
  v44 = 6;
  v87 = &v89;
  v89 = v92;
  v90 = v92;
  p_lpMem = &lpMem;
  lpMem = v96;
  v94 = v96;
  v95 = &v97;
  v45 = *(_QWORD *)v70;
  v72 = 0LL;
  BYTE8(v72) = 6;
  v71 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, float *))(v45 + 40))(v70, v83) || LODWORD(v83[0]) != 1 )
  {
    v44 = 7;
    BYTE8(v72) = 7;
    *(_QWORD *)&v71 = v70;
    if ( v34 && (!*((_BYTE *)a2 + 208) || !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 3)) )
      goto LABEL_65;
    if ( v28 || !*((_DWORD *)a2 + 24) )
    {
      v64 = *((_DWORD *)a2 + 30);
      v65 = *((_DWORD *)a2 + 49);
      *(_QWORD *)v98 = *((unsigned int *)a2 + 24);
      *(_QWORD *)&v98[2] = v28;
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        v65,
        (unsigned int)v98,
        v64,
        (_DWORD)a2 + 124,
        (__int64)&v85);
      *((_QWORD *)&v71 + 1) = &v85;
      goto LABEL_65;
    }
LABEL_134:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_OWORD *)v83 = 0LL;
  v21 = (*(__int64 (__fastcall **)(CShape *, float *, _QWORD))(*(_QWORD *)v70 + 32LL))(v70, v83, 0LL);
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v21, 0x273u, 0LL);
LABEL_127:
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v85);
    goto LABEL_102;
  }
  v71 = *(_OWORD *)v83;
  if ( v34 )
  {
    if ( *((_DWORD *)a2 + 49) == 1 )
      LODWORD(v72) = 0;
    else
      LODWORD(v72) = 50529027;
  }
  else
  {
    if ( !v28 && *((_DWORD *)a2 + 24) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    *(_QWORD *)v98 = *((unsigned int *)a2 + 24);
    *(_QWORD *)&v98[2] = v28;
    CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
      (__int64 *)v98,
      (const struct D2D_MATRIX_3X2_F *)&v71,
      &v72);
    v44 = BYTE8(v72);
  }
LABEL_65:
  v81 = *((unsigned int *)a2 + 25);
  v82 = v100;
  v47 = *((_BYTE *)v5 + 76);
  v76 = 0LL;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  if ( v47 )
  {
    v48 = v98;
    *(_OWORD *)v98 = *(_OWORD *)((char *)v5 + 20);
  }
  else
  {
    v48 = (unsigned int *)v83;
    v83[3] = *((float *)v5 + 8);
    *(float *)&v49 = v83[3] * *((float *)v5 + 6);
    *(float *)&v50 = v83[3] * *((float *)v5 + 7);
    v83[0] = v83[3] * *((float *)v5 + 5);
    *(_QWORD *)&v83[1] = __PAIR64__(v50, v49);
  }
  v75 = v47;
  v21 = 0;
  v80 = v73[0];
  v51 = *(_OWORD *)v48;
  v52 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
  v74 = v51;
  if ( ((v44 & 1) != 0 || *((float *)&v71 + 2) > *(float *)&v71 && *((float *)&v71 + 3) > *((float *)&v71 + 1))
    && ((v44 & 2) != 0 || (v44 & 4) != 0) )
  {
    if ( v3 )
    {
      inserted = CDrawListEntryBuilder::InsertWARP(
                   v52,
                   (const struct PrimitiveGeometryDesc *)&v71,
                   (const struct PrimitiveVertexAttributesDesc *)&v74,
                   0LL);
      v21 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0, inserted, 0x7Bu, 0LL);
    }
    else
    {
      *(_OWORD *)v98 = v71;
      v99 = v72;
      v53 = CDrawListEntryBuilder::InsertHW(v52, v98, &v74, 0LL);
      v21 = v53;
      if ( v53 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0, v53, 0x7Fu, 0LL);
    }
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0, v21, 0x2A8u, 0LL);
    goto LABEL_127;
  }
  v54 = lpMem;
  if ( (v94 - (_BYTE *)lpMem) >> 3 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v54 = lpMem;
  }
  lpMem = 0LL;
  if ( v54 != v96 && v54 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v54);
  }
  v55 = v89;
  if ( (v90 - (_BYTE *)v89) >> 3 )
  {
    detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(
      &v89,
      0LL);
    v55 = v89;
  }
  v89 = 0LL;
  if ( v55 != v92 && v55 )
  {
    v68 = GetProcessHeap();
    HeapFree(v68, 0, v55);
  }
  v56 = v85;
  if ( (v86 - (_BYTE *)v85) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v85);
    v56 = v85;
  }
  v85 = 0LL;
  if ( v56 != v88 && v56 )
  {
    v69 = GetProcessHeap();
    HeapFree(v69, 0, v56);
  }
  if ( v70 )
    (**(void (__fastcall ***)(CShape *, __int64))v70)(v70, 1LL);
  return (unsigned int)v21;
}
