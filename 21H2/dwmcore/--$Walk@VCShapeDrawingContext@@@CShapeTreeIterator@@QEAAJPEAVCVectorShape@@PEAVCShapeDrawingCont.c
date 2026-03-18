/*
 * XREFs of ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180096A60
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x1800955B4 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$C.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800972E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAVCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVCShapeRenderTask@@QEAV1@0PEAV1@AEAV?$allocator@VCShapeRenderTask@@@0@@Z @ 0x1801160FE (--$_Uninitialized_move@PEAVCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVC.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801854E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801E2864 (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801E2A74 (--$move_backward@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_iterator@P.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802AD838 (--$uninitialized_move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeDrawingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  CSpriteVectorShape *v5; // r15
  char v6; // di
  bool DoesIntersectUnsafe; // r12
  __int64 *v8; // rbx
  char v9; // r13
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // r10
  float v13; // xmm6_4
  float v14; // xmm8_4
  __int64 v15; // rdx
  float v16; // xmm5_4
  float v17; // xmm7_4
  __int64 v18; // rbx
  unsigned __int64 v19; // r9
  float v20; // xmm3_4
  signed __int64 v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // xmm1_8
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rbx
  __int128 v37; // xmm1
  __int64 v38; // r9
  __int128 v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 i; // rax
  __int64 v43; // xmm1_8
  void *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int RenderTasks; // eax
  __int64 v48; // rcx
  _QWORD *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  signed __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // r11
  __int64 v55; // rcx
  int v56; // ebx
  unsigned int v57; // ebx
  __int64 v58; // rax
  int v59; // edx
  int v60; // eax
  void *v61; // r8
  int v62; // r9d
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  int v66; // eax
  int v68; // edi
  int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  const struct CMILMatrix *v76; // rax
  unsigned __int64 v77; // rdi
  LPVOID v78; // rax
  __int64 v79; // r8
  __int64 v80; // rdx
  LPVOID v81; // rbx
  void *v82; // rcx
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // r11
  LPVOID v86; // rax
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rdi
  int v91; // eax
  __int64 v92; // rcx
  unsigned int v93[2]; // [rsp+28h] [rbp-E0h]
  void *v94; // [rsp+30h] [rbp-D8h]
  __int64 v95; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v96; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v97; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v98; // [rsp+50h] [rbp-B8h]
  __int64 v99; // [rsp+60h] [rbp-A8h]
  __int128 v100; // [rsp+68h] [rbp-A0h]
  _QWORD v101[3]; // [rsp+78h] [rbp-90h]
  __int64 v102; // [rsp+90h] [rbp-78h]
  __int128 v103; // [rsp+98h] [rbp-70h]
  __int64 v104; // [rsp+A8h] [rbp-60h]
  __int128 v105; // [rsp+B8h] [rbp-50h]
  signed __int64 v106; // [rsp+C8h] [rbp-40h]
  __int128 v107; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v108; // [rsp+E0h] [rbp-28h]
  __int128 v109; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v110; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v111; // [rsp+108h] [rbp+0h]
  __int128 v112; // [rsp+118h] [rbp+10h] BYREF
  signed __int64 v113; // [rsp+128h] [rbp+20h]
  __int128 v114; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v115; // [rsp+148h] [rbp+40h]
  _BYTE v116[24]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v117[72]; // [rsp+170h] [rbp+68h] BYREF
  void *v118[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v119; // [rsp+1C8h] [rbp+C0h]
  float v120; // [rsp+1D0h] [rbp+C8h] BYREF
  float v121; // [rsp+1D4h] [rbp+CCh]
  float v122; // [rsp+1D8h] [rbp+D0h]
  float v123; // [rsp+1DCh] [rbp+D4h]
  float v124; // [rsp+1E0h] [rbp+D8h]
  float v125; // [rsp+1E4h] [rbp+DCh]
  __m256i v126; // [rsp+1E8h] [rbp+E0h]
  __int128 v127; // [rsp+208h] [rbp+100h]
  __int64 v128; // [rsp+218h] [rbp+110h]

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
LABEL_2:
    v5 = *(CSpriteVectorShape **)(a3 + 8);
    v6 = 1;
    LOBYTE(v95) = 1;
    DoesIntersectUnsafe = 0;
    v8 = (__int64 *)*((_QWORD *)v5 + 9);
    v9 = (*(__int64 (__fastcall **)(CSpriteVectorShape *, __int64))(*(_QWORD *)v5 + 56LL))(v5, 176LL);
    if ( v9 )
    {
      v6 = 0;
      LOBYTE(v95) = 0;
      *(_OWORD *)v118 = *((_OWORD *)v5 + 5);
      if ( *((_BYTE *)v5 + 97) )
      {
        if ( *(_BYTE *)(a3 + 529) )
        {
          v76 = CMILMatrix::CMILMatrix(
                  (CMILMatrix *)v117,
                  (const struct D2D_MATRIX_3X2_F *)(*(_QWORD *)(a3 + 72) - 24LL));
          CMILMatrix::Multiply(v76, (const struct CMILMatrix *)(a3 + 360), (struct CMILMatrix *)(a3 + 428));
          *(_BYTE *)(a3 + 529) = 0;
        }
        CMILMatrix::Transform2DBoundsHelper<0>(a3 + 428, v118, v118);
        DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                (float *)v118,
                                (float *)(a3 + 344));
      }
    }
    if ( v8 )
    {
      if ( *(_QWORD *)(a3 + 16) )
        v10 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      else
        v10 = *(_QWORD *)(a3 + 336);
      v11 = *v8;
      v97 = v10;
      (*(void (__fastcall **)(__int64 *, unsigned __int64 *, float *))(v11 + 208))(v8, &v97, &v120);
      v12 = *(_QWORD *)(a3 + 72);
      v13 = *(float *)(v12 - 24);
      v14 = *(float *)(v12 - 16);
      v15 = *(_QWORD *)(a3 + 80);
      v16 = *(float *)(v12 - 20);
      v17 = *(float *)(v12 - 12);
      v18 = *(_QWORD *)(a3 + 64);
      v19 = 0xAAAAAAAAAAAAAAABuLL * ((v12 - v18) >> 3);
      *(float *)v118 = (float)(v13 * v120) + (float)(v121 * v14);
      v96 = v19;
      *((float *)v118 + 1) = (float)(v16 * v120) + (float)(v121 * v17);
      *(float *)&v118[1] = (float)(v122 * v13) + (float)(v123 * v14);
      *((float *)&v118[1] + 1) = (float)(v122 * v16) + (float)(v123 * v17);
      v20 = (float)((float)(v124 * v16) + (float)(v125 * v17)) + *(float *)(v12 - 4);
      *(float *)&v119 = (float)((float)(v124 * v13) + (float)(v125 * v14)) + *(float *)(v12 - 8);
      *((float *)&v119 + 1) = v20;
      if ( !(0xAAAAAAAAAAAAAAABuLL * ((v15 - v12) >> 3)) )
      {
        if ( v19 + 1 < v19 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
LABEL_102:
          _o__invalid_parameter_noinfo_noreturn(v23);
          __debugbreak();
LABEL_103:
          std::_Xlength_error("vector too long");
        }
        v77 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL,
                0xAAAAAAAAAAAAAAABuLL * ((v15 - v18) >> 3),
                v19 + 1);
        v78 = operator new(saturated_mul(v77, 0x18uLL));
        v79 = *(_QWORD *)(a3 + 72);
        v80 = *(_QWORD *)(a3 + 64);
        *(_QWORD *)&v98 = v78;
        v81 = v78;
        *((_QWORD *)&v98 + 1) = v96;
        v99 = 0LL;
        v110 = v98;
        v111 = 0LL;
        std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          v116,
          v80,
          v79,
          &v110);
        v82 = *(void **)(a3 + 64);
        *(_QWORD *)(a3 + 64) = v81;
        if ( v82 == (void *)(a3 + 88) )
          v82 = 0LL;
        DefaultHeap::Free(v82);
        v18 = *(_QWORD *)(a3 + 64);
        v19 = v96;
        v12 = v18 + 24 * v96;
        v83 = 3 * v77;
        *(_QWORD *)(a3 + 72) = v12;
        v6 = v95;
        *(_QWORD *)(a3 + 80) = v18 + 8 * v83;
      }
      v101[0] = 0LL;
      v21 = 0xAAAAAAAAAAAAAAABuLL * ((v12 - v18) >> 3);
      v102 = 0LL;
      v22 = v21 - v19;
      v23 = v18 + 8 * ((v12 - v18) >> 3);
      *((_QWORD *)&v100 + 1) = 1LL;
      *(_QWORD *)&v100 = v23;
      *(_OWORD *)&v101[1] = v100;
      if ( !v23 )
        goto LABEL_102;
      v102 = 1LL;
      v24 = 0xAAAAAAAAAAAAAAABuLL * ((v12 - v18) >> 3) - v19;
      v103 = v100;
      if ( v22 > 1 )
        v24 = 1LL;
      v104 = 1LL;
      v25 = 24 * v24;
      v23 = v12 - v25;
      if ( v12 != v12 - v25 )
      {
        v84 = v104;
        v85 = v101[1] + 24LL;
        do
        {
          v12 -= 24LL;
          if ( !(_QWORD)v103 )
            goto LABEL_102;
          if ( !v84 )
            goto LABEL_102;
          --v84;
          v85 -= 24LL;
          if ( v84 >= *((_QWORD *)&v103 + 1) )
            goto LABEL_102;
          *(_OWORD *)v85 = *(_OWORD *)v12;
          *(_QWORD *)(v85 + 16) = *(_QWORD *)(v12 + 16);
        }
        while ( v12 != v23 );
      }
      if ( v22 > 1 )
      {
        *(_QWORD *)&v105 = v18;
        *((_QWORD *)&v105 + 1) = v21;
        if ( v21 && (!v18 || v21 < 0) )
          goto LABEL_102;
        v106 = v21;
        v112 = v105;
        v113 = v21;
        std::move_backward<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
          v116,
          v18 + 24 * v19,
          v18 + 24 * (v21 - 1),
          &v112,
          *(_QWORD *)v93,
          v94,
          v95);
        v19 = v96;
      }
      *(_QWORD *)(a3 + 72) += 24LL;
      v26 = 3 * v19;
      v27 = v119;
      *(_OWORD *)(v18 + 8 * v26) = *(_OWORD *)v118;
      *(_QWORD *)(v18 + 8 * v26 + 16) = v27;
      *(_BYTE *)(a3 + 528) = 1;
      if ( !v9 )
        *(_BYTE *)(a3 + 529) = 1;
    }
    if ( DoesIntersectUnsafe )
      break;
LABEL_40:
    if ( !v6 )
      goto LABEL_41;
    v68 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(*(_QWORD *)(a1 + 8));
    if ( !v68 )
      goto LABEL_41;
    *(_QWORD *)&v109 = *(_QWORD *)(a1 + 16);
    DWORD2(v109) = *(_DWORD *)(a1 + 24);
    v69 = CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Push((unsigned int *)(a1 + 32), &v109);
    LODWORD(v49) = v69;
    if ( v69 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0LL, v69, 0x87u);
      MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0LL, (int)v49, 0x29u);
      goto LABEL_57;
    }
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v71 = 0;
    else
      v71 = v68 - 1;
    *(_DWORD *)(a1 + 24) = v71;
    v72 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 296LL))(
            *(_QWORD *)(a1 + 8),
            *(unsigned int *)(a1 + 24));
    v73 = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v73;
    *(_QWORD *)(a1 + 8) = v72;
    if ( !v72 )
    {
      while ( 1 )
      {
LABEL_41:
        v49 = *(_QWORD **)(a3 + 8);
        if ( v49[9] )
        {
          v50 = *(_QWORD *)(a3 + 72);
          v51 = *(_QWORD *)(a3 + 64);
          v52 = 0xAAAAAAAAAAAAAAABuLL * ((v50 - 24 - v51) >> 3);
          v53 = 0xAAAAAAAAAAAAAAABuLL * ((v50 - v51) >> 3);
          if ( v52 + 1 > v53 )
            goto LABEL_107;
          v54 = v51 + 8 * ((*(_QWORD *)(a3 + 72) - v51) >> 3);
          if ( v52 + 1 != v53 )
          {
            *(_QWORD *)&v107 = *(_QWORD *)(a3 + 64);
            *((_QWORD *)&v107 + 1) = 0xAAAAAAAAAAAAAAABuLL * ((v50 - v51) >> 3);
            if ( v52 && (!v51 || v52 < 0 || v53 < v52) )
            {
              _o__invalid_parameter_noinfo_noreturn(v53);
              __debugbreak();
LABEL_107:
              std::_Xoverflow_error("overflow");
              __debugbreak();
LABEL_108:
              v90 = 64LL;
              if ( *(_DWORD *)(a1 + 56) > 0x40u )
                v90 = *(unsigned int *)(a1 + 56);
              if ( (unsigned __int64)(3 * v90) > 0xFFFFFFFF )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
              }
              else if ( (unsigned int)(3 * v90) <= *(_DWORD *)(a1 + 36) )
              {
                v118[0] = 0LL;
                v91 = HrMalloc(0x10uLL, (unsigned int)v90, v118);
                if ( v91 >= 0 )
                {
                  DefaultHeap::Free(*(void **)(a1 + 48));
                  *(void **)(a1 + 48) = v118[0];
                  *(_DWORD *)(a1 + 36) = v90;
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0LL, v91, 0x116u);
                }
              }
              *(_DWORD *)(a1 + 56) = 0;
              v66 = 0;
              goto LABEL_59;
            }
            v108 = 0xAAAAAAAAAAAAAAABuLL * ((v50 - 24 - v51) >> 3);
            v114 = v107;
            v115 = v108;
            std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
              v116,
              v51 + 24 * (v52 + 1),
              v54,
              &v114,
              *(_QWORD *)v93,
              v94,
              v95);
            v50 = *(_QWORD *)(a3 + 72);
          }
          *(_QWORD *)(a3 + 72) = v50 - 24;
          *(_BYTE *)(a3 + 528) = 1;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v49 + 56LL))(v49, 176LL) )
            *(_BYTE *)(a3 + 529) = 1;
        }
        v55 = *(_QWORD *)(a1 + 16);
        if ( v55 )
        {
          if ( *(_DWORD *)(a1 + 28) == 1 )
          {
            v56 = *(_DWORD *)(a1 + 24);
            if ( v56 != -1 && v56 + 1 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v55 + 288LL))(v55) )
            {
              if ( *(_DWORD *)(a1 + 28) == 1 )
                v57 = v56 + 1;
              else
LABEL_100:
                v57 = v56 - 1;
              v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 296LL))(
                      *(_QWORD *)(a1 + 16),
                      v57);
              *(_DWORD *)(a1 + 24) = v57;
              LODWORD(v49) = 0;
              *(_QWORD *)(a1 + 8) = v58;
              if ( v58 )
                goto LABEL_2;
              goto LABEL_53;
            }
          }
          if ( !*(_DWORD *)(a1 + 28) )
          {
            v56 = *(_DWORD *)(a1 + 24);
            if ( v56 )
              goto LABEL_100;
          }
        }
        LODWORD(v49) = 1;
LABEL_53:
        v59 = *(_DWORD *)(a1 + 4);
        if ( v59 )
        {
          v60 = *(_DWORD *)(a1 + 32);
          v61 = 0LL;
          v62 = 0;
          if ( v60 )
          {
            v63 = (unsigned int)(v60 - 1);
            *(_DWORD *)(a1 + 32) = v63;
            *(_OWORD *)v118 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v63);
            v62 = (int)v118[1];
            v61 = v118[0];
          }
          v64 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v64;
          *(_QWORD *)(a1 + 16) = v61;
          *(_DWORD *)(a1 + 24) = v62;
          *(_DWORD *)(a1 + 4) = v59 - 1;
          if ( v64 )
            continue;
        }
        goto LABEL_57;
      }
    }
  }
  if ( *(_BYTE *)(a3 + 528) )
  {
    v28 = *(_QWORD *)(a3 + 72);
    v29 = *(_QWORD *)(a3 + 512);
    v30 = *(_QWORD *)(a3 + 520);
    v126.m256i_i32[0] = 1;
    v126.m256i_i64[3] = *(_QWORD *)(v28 - 8);
    *(_OWORD *)&v126.m256i_u64[1] = *(_OWORD *)(v28 - 24);
    if ( v29 == v30 )
    {
      v31 = *(_QWORD *)(a3 + 504);
      v32 = (v29 - v31) / 56;
      if ( v32 == 0x492492492492492LL )
        goto LABEL_103;
      v33 = 0x6DB6DB6DB6DB6DB7LL * ((v30 - v31) >> 3);
      if ( v33 > 0x492492492492492LL - (v33 >> 1) )
        goto LABEL_72;
      v34 = v32 + 1;
      if ( v33 + (v33 >> 1) >= v32 + 1 )
        v34 = v33 + (v33 >> 1);
      if ( v34 > 0x492492492492492LL )
LABEL_72:
        std::_Throw_bad_array_new_length();
      v35 = 56 * v34;
      if ( 56 * v34 >= 0x1000 )
      {
        if ( v35 + 39 < v35 )
          goto LABEL_72;
        v86 = operator new(v35 + 39);
        if ( !v86 )
          goto LABEL_102;
        v36 = ((unsigned __int64)v86 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(v36 - 8) = v86;
      }
      else if ( v35 )
      {
        v36 = (unsigned __int64)operator new(56 * v34);
      }
      else
      {
        v36 = 0LL;
      }
      v37 = *(_OWORD *)&v126.m256i_u64[2];
      v38 = 56 * v32;
      *(_OWORD *)(v38 + v36) = *(_OWORD *)v126.m256i_i8;
      v39 = v127;
      *(_OWORD *)(v38 + v36 + 16) = v37;
      *(_QWORD *)&v37 = v128;
      *(_OWORD *)(v38 + v36 + 32) = v39;
      *(_QWORD *)(v38 + v36 + 48) = v37;
      v40 = *(_QWORD *)(a3 + 512);
      v41 = *(_QWORD *)(a3 + 504);
      if ( v29 == v40 )
      {
        for ( i = v36; v41 != v40; *(_QWORD *)(i - 8) = v43 )
        {
          i += 56LL;
          *(_OWORD *)(i - 56) = *(_OWORD *)v41;
          *(_OWORD *)(i - 40) = *(_OWORD *)(v41 + 16);
          *(_OWORD *)(i - 24) = *(_OWORD *)(v41 + 32);
          v43 = *(_QWORD *)(v41 + 48);
          v41 += 56LL;
        }
      }
      else
      {
        std::_Uninitialized_move<CShapeRenderTask *>(v41, v29, v36);
        std::_Uninitialized_move<CShapeRenderTask *>(v29, *(_QWORD *)(a3 + 512), v36 + v87 + 56);
      }
      v44 = *(void **)(a3 + 504);
      if ( v44 )
      {
        v45 = *(_QWORD *)(a3 + 520) - (_QWORD)v44;
        v118[0] = *(void **)(a3 + 504);
        v46 = 8 * (v45 >> 3);
        v96 = v46;
        if ( v46 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(v118, &v96);
          v46 = v96;
          v44 = v118[0];
        }
        operator delete(v44, v46);
      }
      *(_QWORD *)(a3 + 504) = v36;
      *(_QWORD *)(a3 + 512) = v36 + 56 * (v32 + 1);
      *(_QWORD *)(a3 + 520) = v36 + v35;
    }
    else
    {
      v74 = *(_OWORD *)&v126.m256i_u64[2];
      *(_OWORD *)v29 = *(_OWORD *)v126.m256i_i8;
      v75 = v127;
      *(_OWORD *)(v29 + 16) = v74;
      *(_QWORD *)&v74 = v128;
      *(_OWORD *)(v29 + 32) = v75;
      *(_QWORD *)(v29 + 48) = v74;
      *(_QWORD *)(a3 + 512) += 56LL;
    }
    *(_BYTE *)(a3 + 528) = 0;
  }
  RenderTasks = CSpriteVectorShape::CreateRenderTasks(v5, (struct CShapeDrawingContext *)a3);
  LODWORD(v49) = RenderTasks;
  if ( RenderTasks >= 0 )
  {
    v6 = v95;
    goto LABEL_40;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0LL, RenderTasks, 0x148u);
  MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0LL, (int)v49, 0x24u);
LABEL_57:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v65 = *(_DWORD *)(a1 + 40);
  if ( v65 == 10 )
    goto LABEL_108;
  v66 = v65 + 1;
LABEL_59:
  *(_DWORD *)(a1 + 40) = v66;
  if ( (int)v49 >= 0 )
    LODWORD(v49) = 0;
  return (unsigned int)v49;
}
