/*
 * XREFs of ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008A2EC (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x1800A4C20 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@@Z @ 0x1800A773C (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@@Z.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC488 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC7D0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800C87B0 (-resize@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?insert@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexAAOffsetDesc@Mesh@@@2@V?$basic_iterator@$$CBUVertexAAOffsetDesc@Mesh@@@2@_KAEBUVertexAAOffsetDesc@Mesh@@@Z @ 0x1800D1630 (-insert@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 *     ?GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z @ 0x1800D948C (-GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1800DB390 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1800E3CA4 (--$uninitialized_move@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801901A8 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E38A8 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801E3D14 (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ?erase@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexAAOffsetDesc@Mesh@@@2@V?$basic_iterator@$$CBUVertexAAOffsetDesc@Mesh@@@2@0@Z @ 0x1801E8750 (-erase@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$.c)
 */

void __fastcall CDrawListEntryBuilder::AppendHWGeometry(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r10
  _QWORD *v9; // rdi
  _OWORD *v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int64 v20; // r11
  unsigned __int64 v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rsi
  _OWORD *v24; // rsi
  char *v25; // rdi
  _BYTE *v26; // rsi
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  char *v32; // r9
  __int64 v33; // rcx
  char *v34; // rax
  __int64 v35; // r15
  _OWORD *v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  struct Mesh::MeshDesc *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // rdi
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r9
  __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  unsigned int v60; // edi
  unsigned __int64 v61; // r8
  char v62; // r10
  unsigned __int64 v63; // r9
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned int v66; // edx
  unsigned __int64 v67; // rsi
  __int64 v68; // rax
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  struct Mesh::VertexAAOffsetDesc *v71; // rax
  __int64 v72; // r8
  struct Mesh::VertexAAOffsetDesc *v73; // rcx
  char v74; // bl
  char v75; // dl
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  SIZE_T v78; // r11
  SIZE_T v79; // rax
  LPVOID v80; // rax
  __int64 v81; // r8
  __int64 v82; // rdx
  LPVOID v83; // rdi
  CDrawListEntryBuilder *v84; // rcx
  unsigned __int64 v85; // rsi
  LPVOID v86; // rax
  __int64 v87; // r8
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rdi
  void *v90; // rcx
  bool v91; // zf
  __int64 v92; // rsi
  unsigned __int64 v93; // r11
  unsigned __int64 v94; // r9
  char *v95; // [rsp+20h] [rbp-E0h]
  __int16 v96; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v97; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+40h] [rbp-C0h]
  __int128 v99; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v102; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v103; // [rsp+80h] [rbp-80h]
  unsigned __int64 v104; // [rsp+88h] [rbp-78h]
  struct Mesh::MeshDesc *v105; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v106; // [rsp+98h] [rbp-68h]
  int v107; // [rsp+9Ch] [rbp-64h]
  __int64 v108[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v109; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v110; // [rsp+B8h] [rbp-48h]
  int v111; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v112; // [rsp+C0h] [rbp-40h]
  unsigned int v113; // [rsp+C8h] [rbp-38h]
  int v114; // [rsp+CCh] [rbp-34h]
  __int64 v115; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v116; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v117; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v118; // [rsp+E8h] [rbp-18h]
  __int128 v119; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v120; // [rsp+100h] [rbp+0h]
  struct Mesh::VertexAAOffsetDesc *v121; // [rsp+110h] [rbp+10h]
  __int64 v122; // [rsp+118h] [rbp+18h]
  __int128 v123; // [rsp+120h] [rbp+20h] BYREF
  __int64 v124; // [rsp+130h] [rbp+30h]
  struct Mesh::VertexAAOffsetDesc *v125; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v126; // [rsp+148h] [rbp+48h]
  char *v127; // [rsp+150h] [rbp+50h]
  _BYTE v128[960]; // [rsp+158h] [rbp+58h] BYREF
  char v129; // [rsp+518h] [rbp+418h] BYREF

  v108[0] = (__int64)a3;
  v4 = 0LL;
  v97 = 0LL;
  v6 = 0LL;
  v105 = a2;
  v98 = 0LL;
  if ( !*((_BYTE *)a2 + 40) )
  {
    v61 = *((_QWORD *)a2 + 1);
    if ( v61 < 3 )
      goto LABEL_62;
    v62 = *((_BYTE *)a2 + 41);
    v63 = 0LL;
    if ( v62 )
    {
      v4 = *((_QWORD *)a2 + 1);
      v63 = v61 - 2;
      v97 = v4;
    }
    if ( *((_BYTE *)a2 + 42) )
    {
      v64 = *((_QWORD *)a2 + 3);
      v65 = 0LL;
      v66 = 0;
      LOBYTE(v6) = *(_DWORD *)(v64 + 4 * v61 - 4) != 3;
      do
      {
        if ( *(_DWORD *)(v64 + 4 * v65) == 3 )
        {
          v67 = v6 + 1;
          if ( !v62 )
            v67 *= 2LL;
          v4 += v67;
          v6 = 0LL;
          v63 += 2LL;
        }
        else
        {
          v6 = 1LL;
        }
        v65 = ++v66;
      }
      while ( v66 < v61 );
      v97 = v4;
    }
    v6 = 3 * v63;
    goto LABEL_61;
  }
  v7 = *((_DWORD *)a2 + 6);
  v102 = 0LL;
  v101 = 0LL;
  if ( !v7 )
  {
    if ( !*((_BYTE *)a2 + 41) )
      return;
    v4 = 4LL;
    v98 = 6LL;
    v97 = 4LL;
LABEL_5:
    v8 = *((_QWORD *)this + 14);
    v9 = (_QWORD *)((char *)this + 112);
    v10 = (_OWORD *)*((_QWORD *)this + 15);
    v11 = *((_QWORD *)this + 504) - *((_QWORD *)this + 503);
    v12 = ((__int64)v10 - v8) >> 4;
    v13 = (unsigned __int64 *)((char *)this + 2064);
    v14 = (__int64)(*((_QWORD *)this + 259) - *((_QWORD *)this + 258)) >> 4;
    v103 = 8 * *(_DWORD *)this + 16;
    v15 = v4 * (v103 >> 4);
    v102 = v11 >> 1;
    *(_QWORD *)&v123 = v8;
    v104 = v12;
    v101 = v14;
    v16 = v103 >> 4;
    if ( v12 + v15 <= v12 )
    {
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 112,
        (__int64)(16 * (v12 + v15)) >> 4);
    }
    else
    {
      v17 = *((_QWORD *)this + 16);
      if ( (__int64)(v17 - (_QWORD)v10) >> 4 < v15 )
      {
        v77 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)((__int64)(v17 - v8) >> 4),
                (__int64)(v17 - v8) >> 4,
                v12 + v15);
        v79 = 16 * v77;
        if ( !is_mul_ok(v77, 0x10uLL) )
          v79 = v78;
        v80 = operator new(v79);
        v81 = *((_QWORD *)this + 15);
        v82 = *((_QWORD *)this + 14);
        *(_QWORD *)&v123 = v80;
        v83 = v80;
        *((_QWORD *)&v123 + 1) = v104;
        v124 = 0LL;
        v119 = v123;
        *(_QWORD *)&v120 = 0LL;
        std::uninitialized_move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
          &v99,
          v82,
          v81,
          &v119);
        v84 = (CDrawListEntryBuilder *)*((_QWORD *)this + 14);
        *((_QWORD *)this + 14) = v83;
        v9 = (_QWORD *)((char *)this + 112);
        if ( v84 == (CDrawListEntryBuilder *)((char *)this + 144) )
          v84 = 0LL;
        DefaultHeap::Free(v84);
        v12 = v104;
        v10 = (_OWORD *)(*v9 + 16 * v104);
        *(_QWORD *)&v123 = *v9;
        v8 = v123;
        *((_QWORD *)this + 15) = v10;
        *((_QWORD *)this + 16) = v8 + 16 * v77;
      }
      *((_QWORD *)&v99 + 1) = v15;
      v18 = ((__int64)v10 - v8) >> 4;
      v19 = v18 - v12;
      v20 = v8 + 16 * v18;
      *(_QWORD *)&v99 = v20;
      if ( v15 && (!v20 || (v15 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_129;
      v100 = v15;
      v21 = (((__int64)v10 - v8) >> 4) - v12;
      if ( v15 < v19 )
        v21 = v15;
      v119 = v99;
      v17 = 16 * v21;
      v22 = (_OWORD *)((char *)v10 - v17);
      *(_QWORD *)&v120 = v15;
      if ( v10 != (_OWORD *)((char *)v10 - v17) )
      {
        v17 = v20 + 16 * v15;
        v93 = v120;
        do
        {
          --v10;
          if ( !(_QWORD)v119 )
            goto LABEL_129;
          if ( !v93 )
            goto LABEL_129;
          --v93;
          v17 -= 16LL;
          if ( v93 >= *((_QWORD *)&v119 + 1) )
            goto LABEL_129;
          *(_OWORD *)v17 = *v10;
        }
        while ( v10 != v22 );
      }
      if ( v19 > v15 )
      {
        *(_QWORD *)&v119 = v8;
        *((_QWORD *)&v119 + 1) = v18;
        if ( v18 && (!v8 || v18 < 0) )
          goto LABEL_129;
        *(_QWORD *)&v120 = v18;
        v99 = v119;
        v23 = 16 * v12;
        v100 = v18;
        std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          &v119,
          v8 + 16 * v12,
          v8 + 16 * (v18 - v15),
          &v99);
        v8 = v123;
      }
      else
      {
        v23 = 16 * v12;
      }
      v24 = (_OWORD *)(v8 + v23);
      v9[1] += 16 * v15;
      if ( v15 )
      {
        *v24 = 0LL;
        qmemcpy(v24 + 1, v24, 8 * ((16 * v15 - 9) >> 3));
      }
    }
    v25 = (char *)*((_QWORD *)this + 259);
    v26 = (_BYTE *)*v13;
    v27 = (__int64)&v25[-*((_QWORD *)this + 258)] >> 4;
    v28 = v15 + v101;
    if ( v15 + v101 <= v27 )
    {
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 2064,
        (__int64)(16 * v28) >> 4);
    }
    else
    {
      v29 = v28 - v27;
      v17 = (__int64)(*((_QWORD *)this + 260) - (_QWORD)v25) >> 4;
      if ( v17 < v28 - v27 )
      {
        v85 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)v17,
                (__int64)(*((_QWORD *)this + 260) - (_QWORD)v26) >> 4,
                v28);
        v86 = operator new(saturated_mul(v85, 0x10uLL));
        v87 = *((_QWORD *)this + 259);
        v88 = *v13;
        *(_QWORD *)&v119 = v86;
        v89 = (unsigned __int64)v86;
        *((_QWORD *)&v119 + 1) = v27;
        *(_QWORD *)&v120 = 0LL;
        v99 = v119;
        v100 = 0LL;
        std::uninitialized_move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
          &v119,
          v88,
          v87,
          &v99);
        v90 = (void *)*v13;
        v91 = *((_QWORD *)this + 258) == (_QWORD)this + 2096;
        *v13 = v89;
        if ( v91 )
          v90 = 0LL;
        DefaultHeap::Free(v90);
        v17 = *v13;
        v25 = (char *)(*v13 + 16 * v27);
        v92 = *v13 + 16 * v85;
        *((_QWORD *)this + 259) = v25;
        *((_QWORD *)this + 260) = v92;
        v26 = (_BYTE *)v17;
      }
      *((_QWORD *)&v119 + 1) = v29;
      v30 = (v25 - v26) >> 4;
      v31 = v30 - v27;
      v32 = &v26[16 * v30];
      *(_QWORD *)&v119 = v32;
      if ( v29 && (!v32 || v29 < 0) )
        goto LABEL_129;
      *(_QWORD *)&v120 = v29;
      v33 = ((v25 - v26) >> 4) - v27;
      if ( v29 < v31 )
        v33 = v29;
      v99 = v119;
      v17 = 16 * v33;
      v34 = &v25[-v17];
      v100 = v29;
      if ( v25 != &v25[-v17] )
      {
        v17 = (unsigned __int64)&v32[16 * v29];
        v94 = v100;
        do
        {
          v25 -= 16;
          if ( !(_QWORD)v99 )
            goto LABEL_129;
          if ( !v94 )
            goto LABEL_129;
          --v94;
          v17 -= 16LL;
          if ( v94 >= *((_QWORD *)&v99 + 1) )
            goto LABEL_129;
          *(_OWORD *)v17 = *(_OWORD *)v25;
        }
        while ( v25 != v34 );
      }
      if ( v31 > v29 )
      {
        *(_QWORD *)&v119 = v26;
        *((_QWORD *)&v119 + 1) = v30;
        if ( v30 && (!v26 || v30 < 0) )
          goto LABEL_129;
        *(_QWORD *)&v120 = v30;
        v35 = 16 * v27;
        v99 = v119;
        v100 = v30;
        std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          &v119,
          &v26[v35],
          &v26[16 * (v30 - v29)],
          &v99);
      }
      else
      {
        v35 = 16 * v27;
      }
      v36 = &v26[v35];
      *((_QWORD *)this + 259) += 16 * v29;
      if ( v29 )
      {
        *v36 = 0LL;
        qmemcpy(v36 + 1, v36, 8 * ((unsigned __int64)(16 * v29 - 9) >> 3));
      }
    }
    v37 = v98;
    v96 = 0;
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
      (char *)this + 4024,
      v98 + v102,
      &v96);
    v38 = v104;
    v39 = *((_QWORD *)this + 14) + 16 * v104;
    v40 = *v13 + 16 * v101;
    v111 = v97;
    v114 = v97;
    v41 = *((_QWORD *)this + 503);
    v110 = v103;
    v113 = v103;
    v42 = v102;
    v98 = v39;
    v109 = v39;
    v104 = v40;
    v115 = 0LL;
    v43 = v41 + 2 * v102;
    v118 = 0LL;
    v112 = v40;
    if ( v37 == -1 || !v43 )
      goto LABEL_131;
    v116 = v37;
    v44 = v105;
    v117 = v41 + 2 * v102;
    if ( *((_BYTE *)v105 + 40) )
    {
      Mesh::GenerateGeometryForRectangle(v105, (struct Mesh::GeometryBuffers *)&v109);
    }
    else if ( *((_QWORD *)v105 + 4) )
    {
      Mesh::GenerateGeometryWorker(v105, (struct Mesh::GeometryBuffers *)&v109);
    }
    else
    {
      v125 = (struct Mesh::VertexAAOffsetDesc *)v128;
      *(_QWORD *)&v120 = 0LL;
      v126 = v128;
      v105 = (struct Mesh::MeshDesc *)v128;
      v127 = &v129;
      v68 = *((_QWORD *)v44 + 1);
      v119 = 0LL;
      if ( v68 )
      {
        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::insert(
          (unsigned int)&v125,
          (unsigned int)&v123,
          (unsigned int)&v105,
          v68,
          (__int64)&v119);
      }
      else
      {
        *(_QWORD *)&v123 = v128;
        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::erase(
          &v125,
          &v97,
          &v123,
          &v105);
      }
      Mesh::CalcVertexAAOffsets(v44, v125);
      v69 = *((_OWORD *)v44 + 1);
      v119 = *(_OWORD *)v44;
      v70 = *((_OWORD *)v44 + 2);
      v120 = v69;
      v122 = *((_QWORD *)&v70 + 1);
      v121 = v125;
      Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v119, (struct Mesh::GeometryBuffers *)&v109);
      v71 = v125;
      v72 = 0xAAAAAAAAAAAAAAABuLL * ((v126 - (_BYTE *)v125) >> 3);
      if ( v72 )
      {
        detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v125,
          0LL,
          v72);
        v71 = v125;
      }
      v125 = 0LL;
      v73 = 0LL;
      if ( v71 != (struct Mesh::VertexAAOffsetDesc *)v128 )
        v73 = v71;
      DefaultHeap::Free(v73);
    }
    v105 = (struct Mesh::MeshDesc *)v104;
    v106 = v103;
    *((_QWORD *)&v123 + 1) = __PAIR64__(v115, v103);
    v107 = v115;
    *(_QWORD *)&v123 = v98;
    CDrawListEntryBuilder::ComputeColorAndUV((__int64)this, v108[0], (__int64)&v123, (__int64)&v105);
    if ( *((_DWORD *)this + 1004) )
    {
      v60 = 0;
      if ( v118 )
      {
        v43 = 0LL;
        while ( v43 < v116 )
        {
          v42 = v117;
          ++v60;
          *(_WORD *)(v117 + 2 * v43) += *((_WORD *)this + 2008);
          v43 = v60;
          if ( v60 >= v118 )
            goto LABEL_34;
        }
LABEL_131:
        ((void (__fastcall *)(unsigned __int64, unsigned __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v42,
          v43);
        __debugbreak();
      }
    }
LABEL_34:
    *((_DWORD *)this + 1004) += v115;
    v123 = 0LL;
    v45 = *((_QWORD *)this + 15);
    v46 = *((_QWORD *)this + 14);
    v47 = v38 + v115 * v16;
    v48 = (v45 - v46) >> 4;
    if ( v47 > v48 )
    {
      v108[0] = *((_QWORD *)this + 15);
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::insert(
        (_DWORD)this + 112,
        (unsigned int)&v105,
        (unsigned int)v108,
        v47 - v48,
        (__int64)&v123);
LABEL_38:
      v123 = 0LL;
      v17 = *((_QWORD *)this + 259);
      v53 = *v13;
      v54 = v101 + v115 * v16;
      v55 = (__int64)(v17 - *((_QWORD *)this + 258)) >> 4;
      if ( v54 > v55 )
      {
        v108[0] = *((_QWORD *)this + 259);
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::insert(
          (_DWORD)this + 2064,
          (unsigned int)&v105,
          (unsigned int)v108,
          v54 - v55,
          (__int64)&v123);
        goto LABEL_42;
      }
      v56 = 16 * v54;
      v57 = v56 >> 4;
      v58 = (__int64)(v17 - v56 - v53) >> 4;
      v59 = v58 + (v56 >> 4);
      if ( v59 <= v55 )
      {
        if ( v59 == v55 )
        {
LABEL_41:
          *((_QWORD *)this + 259) = v17 - 16 * v58;
LABEL_42:
          v96 = 0;
          detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
            (char *)this + 4024,
            v102 + v118,
            &v96);
          ++*((_DWORD *)this + 1100);
          return;
        }
        *(_QWORD *)&v119 = *v13;
        *((_QWORD *)&v119 + 1) = v55;
        if ( !v57 || v53 && v57 >= 0 && v55 >= v57 )
        {
          *(_QWORD *)&v120 = v56 >> 4;
          v99 = v119;
          v100 = v56 >> 4;
          std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
            &v119,
            v53 + 16 * v59,
            v53 + 16 * v55,
            &v99,
            v95);
          v17 = *((_QWORD *)this + 259);
          goto LABEL_41;
        }
        goto LABEL_129;
      }
LABEL_130:
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_131;
    }
    v49 = 16 * v47;
    v50 = v49 >> 4;
    v51 = (v45 - v49 - v46) >> 4;
    v52 = v51 + (v49 >> 4);
    if ( v52 > v48 )
      goto LABEL_130;
    v17 = v46 + 16 * v48;
    if ( v52 == v48 )
    {
LABEL_37:
      *((_QWORD *)this + 15) = v45 - 16 * v51;
      goto LABEL_38;
    }
    *(_QWORD *)&v119 = *((_QWORD *)this + 14);
    *((_QWORD *)&v119 + 1) = (v45 - v46) >> 4;
    if ( !v50 || v46 && v50 >= 0 && v48 >= v50 )
    {
      *(_QWORD *)&v120 = v49 >> 4;
      v99 = v119;
      v100 = v49 >> 4;
      std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        &v119,
        v46 + 16 * v52,
        v46 + 16 * v48,
        &v99,
        v95);
      v45 = *((_QWORD *)this + 15);
      goto LABEL_37;
    }
LABEL_129:
    _o__invalid_parameter_noinfo_noreturn(v17);
    __debugbreak();
    goto LABEL_130;
  }
  v74 = *((_BYTE *)a2 + 42);
  if ( v7 != 50529027 )
  {
    v95 = (char *)&v123 + 12;
    Mesh::GetEdgeFlagsListForRectangle(v7, &v123, (char *)&v123 + 4, (char *)&v123 + 8);
    *(float *)&v119 = FLOAT_0_015625;
    *((_QWORD *)&v119 + 1) = 4LL;
    LOBYTE(v122) = 0;
    *((_QWORD *)&v120 + 1) = &v123;
    BYTE1(v122) = *((_BYTE *)a2 + 41);
    *(_QWORD *)&v120 = 0LL;
    v121 = 0LL;
    BYTE2(v122) = v74;
    Mesh::CalcGeometryCounts((const struct Mesh::MeshDesc *)&v119, &v102, &v101);
    v4 = v102;
    v6 = v101;
    v97 = v102;
    goto LABEL_61;
  }
  v75 = *((_BYTE *)a2 + 41);
  if ( v74 )
  {
    v4 = 8LL;
    v97 = 8LL;
    v6 = 24LL;
    v98 = 24LL;
    v76 = 24LL;
  }
  else
  {
    v76 = 0LL;
    if ( v75 )
    {
      v4 = 4LL;
      v97 = 4LL;
    }
  }
  if ( v75 )
  {
    v6 = v76 + 6;
LABEL_61:
    v98 = v6;
  }
LABEL_62:
  if ( v6 )
    goto LABEL_5;
}
