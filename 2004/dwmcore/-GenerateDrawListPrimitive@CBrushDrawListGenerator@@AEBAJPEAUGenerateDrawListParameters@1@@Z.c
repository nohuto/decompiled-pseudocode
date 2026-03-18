/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004F560
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004F484 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800539F4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180009A48 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180009D48 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800500A0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180050408 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180052F50 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18007E95C (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008034C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BE290 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18015798C (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180163F3C (-terminate@details@gsl@@YAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801656F0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x18019DE28 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019E16C (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E638 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E704 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E7A4 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x18019F06C (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x18019FE08 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  CBrushDrawListGenerator *v4; // r13
  bool v5; // r14
  unsigned int v6; // eax
  char v7; // r15
  unsigned int v8; // edi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v12; // al
  __int64 (__fastcall ***v13)(_QWORD, _QWORD *); // rcx
  int v14; // xmm1_4
  bool v15; // cf
  char v16; // al
  int v17; // ebx
  char v18; // r8
  BOOL v19; // eax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rbx
  int v27; // eax
  CShape *v28; // rdi
  __int128 v29; // xmm1
  CShape *v30; // rcx
  _QWORD *v31; // rax
  gsl::details *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD, __int64); // rdx
  __int64 v37; // rcx
  char v38; // r15
  _QWORD *v39; // r13
  __int64 v40; // r9
  int v41; // r12d
  unsigned int i; // r14d
  __int64 v43; // rdi
  _DWORD *v44; // rbx
  const struct D2D_MATRIX_3X2_F *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __m128 v50; // xmm3
  __m128 v51; // xmm2
  char v52; // di
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // r8d
  char v57; // cl
  __int128 *v58; // rax
  unsigned int v59; // xmm1_4
  unsigned int v60; // xmm0_4
  CDrawListEntryBuilder *v61; // rcx
  int inserted; // eax
  int v63; // eax
  _BYTE *v64; // rdi
  HANDLE ProcessHeap; // rax
  _BYTE *v66; // rdi
  HANDLE v67; // rax
  _BYTE *v68; // rdi
  HANDLE v69; // rax
  char v71; // [rsp+30h] [rbp-D0h]
  CShape *v72; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v73; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v74; // [rsp+50h] [rbp-B0h] BYREF
  int v75; // [rsp+68h] [rbp-98h] BYREF
  CBrushDrawListGenerator *v76; // [rsp+70h] [rbp-90h]
  __int128 v77; // [rsp+78h] [rbp-88h] BYREF
  char v78; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+89h] [rbp-77h]
  int v80; // [rsp+91h] [rbp-6Fh]
  __int16 v81; // [rsp+95h] [rbp-6Bh]
  char v82; // [rsp+97h] [rbp-69h]
  _QWORD *v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+A0h] [rbp-60h]
  _DWORD *v85; // [rsp+A8h] [rbp-58h]
  __int128 v86; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v87[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v88; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v89; // [rsp+D8h] [rbp-28h]
  _BYTE **v90; // [rsp+E0h] [rbp-20h]
  _BYTE v91[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE *v92; // [rsp+128h] [rbp+28h] BYREF
  _BYTE *v93; // [rsp+130h] [rbp+30h]
  _BYTE **v94; // [rsp+138h] [rbp+38h]
  _BYTE v95[128]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v96; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v97; // [rsp+1C8h] [rbp+C8h]
  char *v98; // [rsp+1D0h] [rbp+D0h]
  _BYTE v99[128]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v100; // [rsp+258h] [rbp+158h] BYREF
  __int128 v101; // [rsp+260h] [rbp+160h] BYREF
  __int128 v102; // [rsp+270h] [rbp+170h]
  _DWORD v103[52]; // [rsp+280h] [rbp+180h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  v76 = this;
  v4 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v5 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 8) - 1.0) & _xmm) < 0.0000011920929;
    v6 = *((_DWORD *)a2 + 25);
    v7 = 0;
    v8 = 0;
    if ( v6 )
    {
      do
      {
        v9 = v8;
        v10 = *((_QWORD *)a2 + v8 + 7);
        if ( v10 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 8LL))(
                 *((_QWORD *)a2 + v8 + 7),
                 2LL) )
          {
            v5 = v5
              && (*(_BYTE *)(v10 + 96)
               || ((v11 = *(_QWORD *)(v10 + 56)) == 0
                 ? (v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*(_QWORD *)(v10 + 64)
                                                                     + 8LL
                                                                     + *(int *)(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 8LL)
                                                                              + 8LL)),
                    v12 = *(_DWORD *)((**v13)(v13, v87) + 4) == 3)
                 : (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)),
                   v12));
            if ( v7 || *(_BYTE *)(v10 + 169) )
              v7 = 1;
          }
          else if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL) )
          {
            v10 = 0LL;
          }
        }
        v6 = *((_DWORD *)a2 + 25);
        ++v8;
        *((_QWORD *)&v101 + v9) = v10;
      }
      while ( v8 < v6 );
      v4 = v76;
    }
    v14 = *((_DWORD *)a2 + 51);
    *(_QWORD *)&v73 = __PAIR64__(*((_DWORD *)a2 + 50), v6);
    HIDWORD(v73) = *((_DWORD *)a2 + 49);
    *(_QWORD *)&v74 = (char *)a2 + 8;
    BYTE12(v74) = *((_BYTE *)a2 + 210);
    v15 = *((_BYTE *)a2 + 211) != 0;
    v16 = *((_BYTE *)a2 + 208);
    DWORD2(v73) = v14;
    *(_WORD *)((char *)&v74 + 13) = 0;
    HIBYTE(v74) = 0;
    v17 = *((_DWORD *)v4 + 4) | (v16 != 0 ? 0x10 : 0) | (v15 ? 0x20 : 0);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl) )
      v17 |= v7 != 0 ? 0x40 : 0;
    v18 = *((_BYTE *)a2 + 209);
    v19 = !v18 && v5;
    v20 = *((unsigned int *)a2 + 25);
    v21 = (__int64 *)*((_QWORD *)a2 + 14);
    DWORD2(v74) = v17 | v19;
    *(_QWORD *)&v86 = v20;
    *((_QWORD *)&v86 + 1) = &v101;
    v22 = *v21;
    v72 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, CShape **))(v22 + 24))(v21, &v86, &v72);
    v25 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x20Cu, 0LL);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v72);
      return (unsigned int)v25;
    }
    v26 = *((_QWORD *)a2 + 13);
    v27 = 2;
    v28 = v72;
    v29 = v74;
    *(_OWORD *)v26 = v73;
    *(_OWORD *)(v26 + 16) = v29;
    if ( *(_DWORD *)v26 > 2u )
      v27 = 4;
    *(_DWORD *)v26 = v27;
    v30 = *(CShape **)(v26 + 32);
    if ( v30 != v28 )
    {
      if ( v28 )
      {
        (**(void (__fastcall ***)(CShape *))v28)(v28);
        v30 = *(CShape **)(v26 + 32);
      }
      *(_QWORD *)(v26 + 32) = v28;
      if ( v30 )
        (*(void (__fastcall **)(CShape *))(*(_QWORD *)v30 + 8LL))(v30);
    }
    *(_DWORD *)(v26 + 2276) = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)v28 + 32LL))(v28);
    v31 = *(_QWORD **)(v26 + 16);
    *(_WORD *)(v26 + 2297) = 0;
    if ( !*v31 && !v31[2] || *(_DWORD *)(v26 + 12) == 1 )
      *(_BYTE *)(v26 + 28) = 0;
    if ( (*(_BYTE *)(v26 + 24) & 0x10) != 0 || !*v31 )
      *(_BYTE *)(v26 + 2296) = CCommonRegistryData::EnableCpuClipping;
    else
      *(_BYTE *)(v26 + 2296) = 0;
    if ( (__int64)(*(_QWORD *)(v26 + 200) - *(_QWORD *)(v26 + 192)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v26 + 192,
        0LL);
    if ( (__int64)(*(_QWORD *)(v26 + 1192) - *(_QWORD *)(v26 + 1184)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v26 + 1184,
        0LL);
    if ( (__int64)(*(_QWORD *)(v26 + 2192) - *(_QWORD *)(v26 + 2184)) >> 1 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        v26 + 2184,
        0LL);
    *(_DWORD *)(v26 + 2176) = 0;
    *(_DWORD *)(v26 + 2272) = 0;
    if ( v72 )
      (*(void (__fastcall **)(CShape *))(*(_QWORD *)v72 + 8LL))(v72);
  }
  v72 = 0LL;
  v32 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
  *(_QWORD *)&v101 = &v72;
  v33 = *((unsigned int *)a2 + 24);
  *((_QWORD *)&v101 + 1) = 0LL;
  LOBYTE(v102) = 1;
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && v33 )
    goto LABEL_147;
  v34 = *((unsigned int *)a2 + 30);
  *((_QWORD *)&v86 + 1) = (char *)a2 + 56;
  *(_QWORD *)&v86 = v33;
  v25 = CBrushDrawListGenerator::ComputeBrushClamp(&v86, v34, (char *)a2 + 124, (char *)&v101 + 8);
  if ( (_BYTE)v102 )
  {
    v35 = v101;
    v36 = *(__int64 (__fastcall ****)(_QWORD, __int64))v101;
    *(_QWORD *)v101 = *((_QWORD *)&v101 + 1);
    if ( v36 )
      std::default_delete<CShape>::operator()(v35, v36);
  }
  if ( v25 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v72 + 16LL))(v72) )
      goto LABEL_144;
    if ( !*((_BYTE *)a2 + 209) || (v71 = 1, !CShape::IsAxisAlignedRectangle(v72)) )
      v71 = 0;
    v38 = 1;
    v39 = 0LL;
    memset_0(v103, 0, sizeof(v103));
    LOBYTE(v40) = 0;
    v41 = 50529027;
    for ( i = 0; i < *((_DWORD *)a2 + 24); ++i )
    {
      v43 = *((_QWORD *)a2 + i + 7);
      if ( v43 )
      {
        if ( v38 && *((_DWORD *)a2 + 49) != 1 && *(_BYTE *)(v43 + 52) && *(_DWORD *)(v43 + 48) != 50529027 )
          v38 = v40;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v43 + 8LL))(*((_QWORD *)a2 + i + 7), 2LL) )
        {
          v44 = &v103[13 * i];
          if ( v71 )
          {
            CSurfaceDrawListBrush::ComputeLocalToSourceTransform((CSurfaceDrawListBrush *)v43, (struct Matrix3x3 *)v44);
            LOBYTE(v40) = 0;
          }
          else
          {
            *v44 = *(_DWORD *)(v43 + 8);
            v44[1] = *(_DWORD *)(v43 + 12);
            v44[2] = 0;
            v44[3] = *(_DWORD *)(v43 + 16);
            v44[4] = *(_DWORD *)(v43 + 20);
            v44[5] = 0;
            v44[6] = *(_DWORD *)(v43 + 24);
            v44[7] = *(_DWORD *)(v43 + 28);
            v44[8] = 1065353216;
            if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v44, (struct Matrix3x3 *)v44) )
            {
              v47 = Matrix3x3::operator*(v46, &v73, v43 + 108);
              *(_OWORD *)v44 = *(_OWORD *)v47;
              *((_OWORD *)v44 + 1) = *(_OWORD *)(v47 + 16);
              v44[8] = *(_DWORD *)(v47 + 32);
            }
            else
            {
              *(_QWORD *)v44 = 2139095040LL;
              *((_QWORD *)v44 + 1) = v40;
              *((_QWORD *)v44 + 2) = 2139095040LL;
              *((_QWORD *)v44 + 3) = v40;
              v44[8] = 1065353216;
            }
          }
          v48 = *((_DWORD *)a2 + 30);
          if ( _bittest(&v48, i) )
          {
            v49 = Matrix3x3::operator*((char *)a2 + 160, &v73, v44);
            *(_OWORD *)v44 = *(_OWORD *)v49;
            *((_OWORD *)v44 + 1) = *(_OWORD *)(v49 + 16);
            v44[8] = *(_DWORD *)(v49 + 32);
          }
          else if ( !v39
                 && *(_BYTE *)(v43 + 170)
                 && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v43 + 8), v45) )
          {
            v39 = v87;
            v50 = (__m128)*(unsigned int *)(v43 + 160);
            v51 = (__m128)*(unsigned int *)(v43 + 164);
            v51.m128_f32[0] = (float)((float)(v51.m128_f32[0] * *(float *)(v43 + 16))
                                    + (float)(*(float *)(v43 + 160) * *(float *)(v43 + 8)))
                            + *(float *)(v43 + 24);
            v50.m128_f32[0] = (float)((float)(v50.m128_f32[0] * *(float *)(v43 + 12))
                                    + (float)(*(float *)(v43 + 164) * *(float *)(v43 + 20)))
                            + *(float *)(v43 + 28);
            v87[0] = _mm_unpacklo_ps(v51, v50).m128_u64[0];
          }
          if ( *(_BYTE *)(v43 + 168) )
            *(_OWORD *)(v44 + 9) = _xmm;
          else
            *(_OWORD *)(v44 + 9) = *(_OWORD *)(v43 + 144);
        }
        else
        {
          LOBYTE(v40) = 0;
        }
      }
    }
    v88 = v91;
    v89 = v91;
    v52 = 6;
    v90 = &v92;
    v92 = v95;
    v93 = v95;
    v94 = &v96;
    v96 = v99;
    v97 = v99;
    v98 = &v100;
    v53 = *(_QWORD *)v72;
    v74 = 0LL;
    BYTE8(v74) = 6;
    v73 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(CShape *, int *))(v53 + 40))(v72, &v75) && v75 == 1 )
    {
      v86 = 0LL;
      v25 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v72 + 32LL))(v72, &v86, 0LL);
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v25, 0x279u, 0LL);
LABEL_100:
        CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v88);
        goto LABEL_144;
      }
      v73 = v86;
      if ( v38 )
      {
        if ( *((_DWORD *)a2 + 49) == 1 )
          v41 = 0;
        LODWORD(v74) = v41;
      }
      else
      {
        v55 = *((unsigned int *)a2 + 24);
        if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && *((_DWORD *)a2 + 24) )
        {
          gsl::details::terminate((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56));
          JUMPOUT(0x180050090LL);
        }
        *((_QWORD *)&v101 + 1) = (char *)a2 + 56;
        *(_QWORD *)&v101 = v55;
        CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
          (__int64 *)&v101,
          (const struct D2D_MATRIX_3X2_F *)&v73,
          &v74);
        v52 = BYTE8(v74);
      }
LABEL_108:
      v84 = *((unsigned int *)a2 + 25);
      v85 = v103;
      v79 = 0LL;
      v80 = 0;
      v81 = 0;
      v57 = *((_BYTE *)v76 + 76);
      v82 = 0;
      if ( v57 )
      {
        v58 = &v101;
        v101 = *(_OWORD *)((char *)v76 + 20);
      }
      else
      {
        HIDWORD(v86) = *((_DWORD *)v76 + 8);
        *(float *)&v59 = *((float *)&v86 + 3) * *((float *)v76 + 6);
        *(float *)&v60 = *((float *)&v86 + 3) * *((float *)v76 + 7);
        v58 = &v86;
        *(float *)&v86 = *((float *)&v86 + 3) * *((float *)v76 + 5);
        *(_QWORD *)((char *)&v86 + 4) = __PAIR64__(v60, v59);
      }
      v78 = v57;
      v25 = 0;
      v61 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
      v83 = v39;
      v77 = *v58;
      if ( ((v52 & 1) != 0 || *((float *)&v73 + 2) > *(float *)&v73 && *((float *)&v73 + 3) > *((float *)&v73 + 1))
        && ((v52 & 2) != 0 || (v52 & 4) != 0) )
      {
        if ( v71 )
        {
          inserted = CDrawListEntryBuilder::InsertWARP(
                       v61,
                       (const struct PrimitiveGeometryDesc *)&v73,
                       (const struct PrimitiveVertexAttributesDesc *)&v77,
                       0LL);
          v25 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v61, 0LL, 0, inserted, 0x7Bu, 0LL);
        }
        else
        {
          v101 = v73;
          v102 = v74;
          v63 = CDrawListEntryBuilder::InsertHW(v61, &v101, &v77, 0LL);
          v25 = v63;
          if ( v63 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v61, 0LL, 0, v63, 0x7Fu, 0LL);
        }
      }
      if ( v25 >= 0 )
      {
        v64 = v96;
        if ( (v97 - v96) >> 3 )
        {
          detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(&v96);
          v64 = v96;
        }
        v96 = 0LL;
        if ( v64 == v99 )
          v64 = 0LL;
        if ( v64 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v64);
        }
        v66 = v92;
        if ( (v93 - v92) >> 3 )
        {
          detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(&v92);
          v66 = v92;
        }
        v92 = 0LL;
        if ( v66 == v95 )
          v66 = 0LL;
        if ( v66 )
        {
          v67 = GetProcessHeap();
          HeapFree(v67, 0, v66);
        }
        v68 = v88;
        if ( (v89 - v88) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v88);
          v68 = v88;
        }
        v88 = 0LL;
        if ( v68 == v91 )
          v68 = 0LL;
        if ( v68 )
        {
          v69 = GetProcessHeap();
          HeapFree(v69, 0, v68);
        }
        if ( v72 )
          (**(void (__fastcall ***)(CShape *, __int64))v72)(v72, 1LL);
        return (unsigned int)v25;
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v61, 0LL, 0, v25, 0x2AEu, 0LL);
      goto LABEL_100;
    }
    v52 = 7;
    BYTE8(v74) = 7;
    *(_QWORD *)&v73 = v72;
    if ( v38 && (!*((_BYTE *)a2 + 208) || !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 3)) )
      goto LABEL_108;
    v32 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
    if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL || !MEMORY[0x28] )
    {
      v56 = *((_DWORD *)a2 + 30);
      *(_QWORD *)&v101 = *((unsigned int *)a2 + 24);
      *((_QWORD *)&v101 + 1) = (char *)a2 + 56;
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        *((_DWORD *)a2 + 49),
        (unsigned int)&v101,
        v56,
        (_DWORD)a2 + 124,
        (__int64)&v88);
      *((_QWORD *)&v73 + 1) = &v88;
      goto LABEL_108;
    }
LABEL_147:
    gsl::details::terminate(v32);
    __debugbreak();
  }
  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v25, 0x21Fu, 0LL);
LABEL_144:
  if ( v72 )
    std::default_delete<CShape>::operator()(v37, (__int64 (__fastcall ***)(_QWORD, __int64))v72);
  return (unsigned int)v25;
}
