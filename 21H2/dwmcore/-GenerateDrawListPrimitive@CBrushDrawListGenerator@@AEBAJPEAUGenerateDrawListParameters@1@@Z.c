/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094B70
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054CC4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094AA0 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007474 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180007CC4 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180007FC4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18006BD4C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180095690 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800959F8 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180098544 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C0640 (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800C2130 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180156238 (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18016264C (-terminate@details@gsl@@YAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180163E10 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x18019CBC8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019CEBC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D388 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D454 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D4F4 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x18019DDBC (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x18019EB58 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  CBrushDrawListGenerator *v4; // r13
  bool v5; // di
  unsigned int v6; // eax
  char v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // al
  __int64 (__fastcall ***v14)(_QWORD, _QWORD *); // rcx
  int v15; // xmm1_4
  bool v16; // cf
  char v17; // al
  int v18; // edx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rbx
  int v26; // eax
  CShape *v27; // rdi
  __int128 v28; // xmm1
  CShape *v29; // rcx
  _QWORD *v30; // rax
  gsl::details *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 (__fastcall ***v35)(_QWORD, __int64); // rdx
  __int64 v36; // rcx
  char v37; // r15
  _QWORD *v38; // r13
  __int64 v39; // r9
  int v40; // r12d
  unsigned int i; // r14d
  __int64 v42; // rdi
  _DWORD *v43; // rbx
  const struct D2D_MATRIX_3X2_F *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __m128 v49; // xmm3
  __m128 v50; // xmm2
  char v51; // di
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r8d
  char v56; // cl
  __int128 *v57; // rax
  unsigned int v58; // xmm1_4
  unsigned int v59; // xmm0_4
  CDrawListEntryBuilder *v60; // rcx
  int inserted; // eax
  int v62; // eax
  _BYTE *v63; // rdi
  HANDLE ProcessHeap; // rax
  _BYTE *v65; // rdi
  HANDLE v66; // rax
  _BYTE *v67; // rdi
  HANDLE v68; // rax
  char v70; // [rsp+30h] [rbp-D0h]
  CShape *v71; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v72; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v73; // [rsp+50h] [rbp-B0h] BYREF
  int v74; // [rsp+68h] [rbp-98h] BYREF
  CBrushDrawListGenerator *v75; // [rsp+70h] [rbp-90h]
  __int128 v76; // [rsp+78h] [rbp-88h] BYREF
  char v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+89h] [rbp-77h]
  int v79; // [rsp+91h] [rbp-6Fh]
  __int16 v80; // [rsp+95h] [rbp-6Bh]
  char v81; // [rsp+97h] [rbp-69h]
  _QWORD *v82; // [rsp+98h] [rbp-68h]
  __int64 v83; // [rsp+A0h] [rbp-60h]
  _DWORD *v84; // [rsp+A8h] [rbp-58h]
  __int128 v85; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v86[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v87; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v88; // [rsp+D8h] [rbp-28h]
  _BYTE **v89; // [rsp+E0h] [rbp-20h]
  _BYTE v90[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE *v91; // [rsp+128h] [rbp+28h] BYREF
  _BYTE *v92; // [rsp+130h] [rbp+30h]
  _BYTE **v93; // [rsp+138h] [rbp+38h]
  _BYTE v94[128]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v95; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v96; // [rsp+1C8h] [rbp+C8h]
  char *v97; // [rsp+1D0h] [rbp+D0h]
  _BYTE v98[128]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v99; // [rsp+258h] [rbp+158h] BYREF
  __int128 v100; // [rsp+260h] [rbp+160h] BYREF
  __int128 v101; // [rsp+270h] [rbp+170h]
  _DWORD v102[52]; // [rsp+280h] [rbp+180h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  v75 = this;
  v4 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v5 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 8) - 1.0) & _xmm) < 0.0000011920929;
    v6 = *((_DWORD *)a2 + 25);
    v7 = 0;
    v8 = 0;
    v9 = v6;
    if ( v6 )
    {
      do
      {
        v10 = v8;
        v11 = *((_QWORD *)a2 + v8 + 7);
        if ( v11 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v11 + 8LL))(
                 *((_QWORD *)a2 + v8 + 7),
                 2LL,
                 v9) )
          {
            v5 = v5
              && (*(_BYTE *)(v11 + 96)
               || ((v12 = *(_QWORD *)(v11 + 56)) == 0
                 ? (v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*(_QWORD *)(v11 + 64)
                                                                     + 8LL
                                                                     + *(int *)(*(_QWORD *)(*(_QWORD *)(v11 + 64) + 8LL)
                                                                              + 8LL)),
                    v13 = *(_DWORD *)((**v14)(v14, v86) + 4) == 3)
                 : (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12)),
                   v13));
            if ( v7 || *(_BYTE *)(v11 + 169) )
              v7 = 1;
          }
          else if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1LL) )
          {
            v11 = 0LL;
          }
        }
        v6 = *((_DWORD *)a2 + 25);
        ++v8;
        *((_QWORD *)&v100 + v10) = v11;
        v9 = v6;
      }
      while ( v8 < v6 );
      v4 = v75;
    }
    v15 = *((_DWORD *)a2 + 51);
    *(_QWORD *)&v72 = __PAIR64__(*((_DWORD *)a2 + 50), v6);
    HIDWORD(v72) = *((_DWORD *)a2 + 49);
    *(_QWORD *)&v73 = (char *)a2 + 8;
    BYTE12(v73) = *((_BYTE *)a2 + 210);
    v16 = *((_BYTE *)a2 + 211) != 0;
    v17 = *((_BYTE *)a2 + 208);
    DWORD2(v72) = v15;
    *(_WORD *)((char *)&v73 + 13) = 0;
    HIBYTE(v73) = 0;
    v18 = *((_DWORD *)v4 + 4) | (v7 != 0 ? 0x40 : 0) | (v17 != 0 ? 0x10 : 0) | (v16 ? 0x20 : 0);
    if ( *((_BYTE *)a2 + 209) || (v19 = 1, !v5) )
      v19 = 0;
    v20 = (__int64 *)*((_QWORD *)a2 + 14);
    DWORD2(v73) = v19 | v18;
    *(_QWORD *)&v85 = (unsigned int)v9;
    v21 = *v20;
    *((_QWORD *)&v85 + 1) = &v100;
    v71 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, CShape **))(v21 + 24))(v20, &v85, &v71);
    v24 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x20Bu, 0LL);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v71);
      return (unsigned int)v24;
    }
    v25 = *((_QWORD *)a2 + 13);
    v26 = 2;
    v27 = v71;
    v28 = v73;
    *(_OWORD *)v25 = v72;
    *(_OWORD *)(v25 + 16) = v28;
    if ( *(_DWORD *)v25 > 2u )
      v26 = 4;
    *(_DWORD *)v25 = v26;
    v29 = *(CShape **)(v25 + 32);
    if ( v29 != v27 )
    {
      if ( v27 )
      {
        (**(void (__fastcall ***)(CShape *))v27)(v27);
        v29 = *(CShape **)(v25 + 32);
      }
      *(_QWORD *)(v25 + 32) = v27;
      if ( v29 )
        (*(void (__fastcall **)(CShape *))(*(_QWORD *)v29 + 8LL))(v29);
    }
    *(_DWORD *)(v25 + 2276) = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)v27 + 32LL))(v27);
    v30 = *(_QWORD **)(v25 + 16);
    *(_WORD *)(v25 + 2297) = 0;
    if ( !*v30 && !v30[2] || *(_DWORD *)(v25 + 12) == 1 )
      *(_BYTE *)(v25 + 28) = 0;
    if ( (*(_BYTE *)(v25 + 24) & 0x10) != 0 || !*v30 )
      *(_BYTE *)(v25 + 2296) = CCommonRegistryData::EnableCpuClipping;
    else
      *(_BYTE *)(v25 + 2296) = 0;
    if ( (__int64)(*(_QWORD *)(v25 + 200) - *(_QWORD *)(v25 + 192)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v25 + 192,
        0LL);
    if ( (__int64)(*(_QWORD *)(v25 + 1192) - *(_QWORD *)(v25 + 1184)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v25 + 1184,
        0LL);
    if ( (__int64)(*(_QWORD *)(v25 + 2192) - *(_QWORD *)(v25 + 2184)) >> 1 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        v25 + 2184,
        0LL);
    *(_DWORD *)(v25 + 2176) = 0;
    *(_DWORD *)(v25 + 2272) = 0;
    if ( v71 )
      (*(void (__fastcall **)(CShape *))(*(_QWORD *)v71 + 8LL))(v71);
  }
  v71 = 0LL;
  v31 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
  *(_QWORD *)&v100 = &v71;
  v32 = *((unsigned int *)a2 + 24);
  *((_QWORD *)&v100 + 1) = 0LL;
  LOBYTE(v101) = 1;
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && v32 )
    goto LABEL_144;
  v33 = *((unsigned int *)a2 + 30);
  *((_QWORD *)&v85 + 1) = (char *)a2 + 56;
  *(_QWORD *)&v85 = v32;
  v24 = CBrushDrawListGenerator::ComputeBrushClamp(&v85, v33, (char *)a2 + 124, (char *)&v100 + 8);
  if ( (_BYTE)v101 )
  {
    v34 = v100;
    v35 = *(__int64 (__fastcall ****)(_QWORD, __int64))v100;
    *(_QWORD *)v100 = *((_QWORD *)&v100 + 1);
    if ( v35 )
      std::default_delete<CShape>::operator()(v34, v35);
  }
  if ( v24 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v71 + 16LL))(v71) )
      goto LABEL_141;
    if ( !*((_BYTE *)a2 + 209) || (v70 = 1, !CShape::IsAxisAlignedRectangle(v71)) )
      v70 = 0;
    v37 = 1;
    v38 = 0LL;
    memset_0(v102, 0, sizeof(v102));
    LOBYTE(v39) = 0;
    v40 = 50529027;
    for ( i = 0; i < *((_DWORD *)a2 + 24); ++i )
    {
      v42 = *((_QWORD *)a2 + i + 7);
      if ( v42 )
      {
        if ( v37 && *((_DWORD *)a2 + 49) != 1 && *(_BYTE *)(v42 + 52) && *(_DWORD *)(v42 + 48) != 50529027 )
          v37 = v39;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v42 + 8LL))(*((_QWORD *)a2 + i + 7), 2LL) )
        {
          v43 = &v102[13 * i];
          if ( v70 )
          {
            CSurfaceDrawListBrush::ComputeLocalToSourceTransform((CSurfaceDrawListBrush *)v42, (struct Matrix3x3 *)v43);
            LOBYTE(v39) = 0;
          }
          else
          {
            *v43 = *(_DWORD *)(v42 + 8);
            v43[1] = *(_DWORD *)(v42 + 12);
            v43[2] = 0;
            v43[3] = *(_DWORD *)(v42 + 16);
            v43[4] = *(_DWORD *)(v42 + 20);
            v43[5] = 0;
            v43[6] = *(_DWORD *)(v42 + 24);
            v43[7] = *(_DWORD *)(v42 + 28);
            v43[8] = 1065353216;
            if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v43, (struct Matrix3x3 *)v43) )
            {
              v46 = Matrix3x3::operator*(v45, &v72, v42 + 108);
              *(_OWORD *)v43 = *(_OWORD *)v46;
              *((_OWORD *)v43 + 1) = *(_OWORD *)(v46 + 16);
              v43[8] = *(_DWORD *)(v46 + 32);
            }
            else
            {
              *(_QWORD *)v43 = 2139095040LL;
              *((_QWORD *)v43 + 1) = v39;
              *((_QWORD *)v43 + 2) = 2139095040LL;
              *((_QWORD *)v43 + 3) = v39;
              v43[8] = 1065353216;
            }
          }
          v47 = *((_DWORD *)a2 + 30);
          if ( _bittest(&v47, i) )
          {
            v48 = Matrix3x3::operator*((char *)a2 + 160, &v72, v43);
            *(_OWORD *)v43 = *(_OWORD *)v48;
            *((_OWORD *)v43 + 1) = *(_OWORD *)(v48 + 16);
            v43[8] = *(_DWORD *)(v48 + 32);
          }
          else if ( !v38
                 && *(_BYTE *)(v42 + 170)
                 && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v42 + 8), v44) )
          {
            v38 = v86;
            v49 = (__m128)*(unsigned int *)(v42 + 160);
            v50 = (__m128)*(unsigned int *)(v42 + 164);
            v50.m128_f32[0] = (float)((float)(v50.m128_f32[0] * *(float *)(v42 + 16))
                                    + (float)(*(float *)(v42 + 160) * *(float *)(v42 + 8)))
                            + *(float *)(v42 + 24);
            v49.m128_f32[0] = (float)((float)(v49.m128_f32[0] * *(float *)(v42 + 12))
                                    + (float)(*(float *)(v42 + 164) * *(float *)(v42 + 20)))
                            + *(float *)(v42 + 28);
            v86[0] = _mm_unpacklo_ps(v50, v49).m128_u64[0];
          }
          if ( *(_BYTE *)(v42 + 168) )
            *(_OWORD *)(v43 + 9) = _xmm;
          else
            *(_OWORD *)(v43 + 9) = *(_OWORD *)(v42 + 144);
        }
        else
        {
          LOBYTE(v39) = 0;
        }
      }
    }
    v87 = v90;
    v88 = v90;
    v51 = 6;
    v89 = &v91;
    v91 = v94;
    v92 = v94;
    v93 = &v95;
    v95 = v98;
    v96 = v98;
    v97 = &v99;
    v52 = *(_QWORD *)v71;
    v73 = 0LL;
    BYTE8(v73) = 6;
    v72 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(CShape *, int *))(v52 + 40))(v71, &v74) && v74 == 1 )
    {
      v85 = 0LL;
      v24 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v71 + 32LL))(v71, &v85, 0LL);
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v24, 0x278u, 0LL);
LABEL_97:
        CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v87);
        goto LABEL_141;
      }
      v72 = v85;
      if ( v37 )
      {
        if ( *((_DWORD *)a2 + 49) == 1 )
          v40 = 0;
        LODWORD(v73) = v40;
      }
      else
      {
        v54 = *((unsigned int *)a2 + 24);
        if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && *((_DWORD *)a2 + 24) )
        {
          gsl::details::terminate((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56));
          JUMPOUT(0x180095680LL);
        }
        *((_QWORD *)&v100 + 1) = (char *)a2 + 56;
        *(_QWORD *)&v100 = v54;
        CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
          (__int64 *)&v100,
          (const struct D2D_MATRIX_3X2_F *)&v72,
          &v73);
        v51 = BYTE8(v73);
      }
LABEL_105:
      v83 = *((unsigned int *)a2 + 25);
      v84 = v102;
      v78 = 0LL;
      v79 = 0;
      v80 = 0;
      v56 = *((_BYTE *)v75 + 76);
      v81 = 0;
      if ( v56 )
      {
        v57 = &v100;
        v100 = *(_OWORD *)((char *)v75 + 20);
      }
      else
      {
        HIDWORD(v85) = *((_DWORD *)v75 + 8);
        *(float *)&v58 = *((float *)&v85 + 3) * *((float *)v75 + 6);
        *(float *)&v59 = *((float *)&v85 + 3) * *((float *)v75 + 7);
        v57 = &v85;
        *(float *)&v85 = *((float *)&v85 + 3) * *((float *)v75 + 5);
        *(_QWORD *)((char *)&v85 + 4) = __PAIR64__(v59, v58);
      }
      v77 = v56;
      v24 = 0;
      v60 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
      v82 = v38;
      v76 = *v57;
      if ( ((v51 & 1) != 0 || *((float *)&v72 + 2) > *(float *)&v72 && *((float *)&v72 + 3) > *((float *)&v72 + 1))
        && ((v51 & 2) != 0 || (v51 & 4) != 0) )
      {
        if ( v70 )
        {
          inserted = CDrawListEntryBuilder::InsertWARP(
                       v60,
                       (const struct PrimitiveGeometryDesc *)&v72,
                       (const struct PrimitiveVertexAttributesDesc *)&v76,
                       0LL);
          v24 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v60, 0LL, 0, inserted, 0x7Bu, 0LL);
        }
        else
        {
          v100 = v72;
          v101 = v73;
          v62 = CDrawListEntryBuilder::InsertHW(v60, &v100, &v76, 0LL);
          v24 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v60, 0LL, 0, v62, 0x7Fu, 0LL);
        }
      }
      if ( v24 >= 0 )
      {
        v63 = v95;
        if ( (v96 - v95) >> 3 )
        {
          detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(&v95);
          v63 = v95;
        }
        v95 = 0LL;
        if ( v63 == v98 )
          v63 = 0LL;
        if ( v63 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v63);
        }
        v65 = v91;
        if ( (v92 - v91) >> 3 )
        {
          detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(&v91);
          v65 = v91;
        }
        v91 = 0LL;
        if ( v65 == v94 )
          v65 = 0LL;
        if ( v65 )
        {
          v66 = GetProcessHeap();
          HeapFree(v66, 0, v65);
        }
        v67 = v87;
        if ( (v88 - v87) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v87);
          v67 = v87;
        }
        v87 = 0LL;
        if ( v67 == v90 )
          v67 = 0LL;
        if ( v67 )
        {
          v68 = GetProcessHeap();
          HeapFree(v68, 0, v67);
        }
        if ( v71 )
          (**(void (__fastcall ***)(CShape *, __int64))v71)(v71, 1LL);
        return (unsigned int)v24;
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v60, 0LL, 0, v24, 0x2ADu, 0LL);
      goto LABEL_97;
    }
    v51 = 7;
    BYTE8(v73) = 7;
    *(_QWORD *)&v72 = v71;
    if ( v37 && (!*((_BYTE *)a2 + 208) || !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 3)) )
      goto LABEL_105;
    v31 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
    if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL || !MEMORY[0x28] )
    {
      v55 = *((_DWORD *)a2 + 30);
      *(_QWORD *)&v100 = *((unsigned int *)a2 + 24);
      *((_QWORD *)&v100 + 1) = (char *)a2 + 56;
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        *((_DWORD *)a2 + 49),
        (unsigned int)&v100,
        v55,
        (_DWORD)a2 + 124,
        (__int64)&v87);
      *((_QWORD *)&v72 + 1) = &v87;
      goto LABEL_105;
    }
LABEL_144:
    gsl::details::terminate(v31);
    __debugbreak();
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v24, 0x21Eu, 0LL);
LABEL_141:
  if ( v71 )
    std::default_delete<CShape>::operator()(v36, (__int64 (__fastcall ***)(_QWORD, __int64))v71);
  return (unsigned int)v24;
}
