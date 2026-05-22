/*
 * XREFs of ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DE7CC
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800E0B30 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18004A60B (sqrtf_0.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069098 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800C6A58 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800CFDE4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800DA404 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800DD048 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ??$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2AEAEAEA_N@Z @ 0x1800DD500 (--$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteracti.c)
 *     ??$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAPEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1800DD7C0 (--$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Intern.c)
 *     ApplyTransform @ 0x1800DF554 (ApplyTransform.c)
 *     InitJoints @ 0x1800DFDBC (InitJoints.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800E1E18 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __m128 *a6,
        bool a7,
        int a8)
{
  int v12; // eax
  unsigned int v13; // edi
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  char v17; // al
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm6
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // esi
  char v25; // si
  int v26; // r15d
  int v27; // esi
  char v28; // r12
  __m128 v29; // xmm2
  __m128 v30; // xmm4
  __m128i v31; // xmm8
  __m128 v32; // xmm7
  __m128 v33; // xmm6
  __m128 v34; // xmm5
  __m128 v35; // xmm1
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __m128i v38; // xmm3
  double v39; // xmm0_8
  __m128 v40; // xmm6
  __int128 v41; // xmm7
  __m128 v42; // xmm8
  __m128i v43; // xmm9
  __m128 v44; // xmm14
  __m128 v45; // xmm15
  __m128i v46; // xmm13
  __m128 v47; // xmm10
  __m128 v48; // xmm11
  __m128 v49; // xmm12
  double v50; // xmm0_8
  bool v51; // r14
  bool v52; // al
  _BYTE *v53; // rsi
  __m128 *v54; // rax
  __m128 v55; // xmm2
  __m128 v56; // xmm0
  char v57; // cl
  __m128 *v58; // rax
  __m128 v59; // xmm2
  __m128 v60; // xmm0
  int *v61; // r9
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __m128 v64; // xmm3
  __m128 v65; // xmm7
  __m128 v66; // xmm6
  __m128 v67; // xmm2
  __m128 v68; // xmm6
  __m128 v69; // xmm3
  __m128 v70; // xmm2
  double v71; // xmm0_8
  double v72; // xmm0_8
  __m128 v73; // xmm0
  __int64 v74; // r8
  __int64 v75; // r8
  int *v76; // rdx
  __int64 *v77; // rcx
  __m128 v78; // xmm3
  __m128 v79; // xmm4
  __m128 v80; // xmm0
  __m128 v81; // xmm1
  float v82; // xmm2_4
  __m128 v83; // xmm1
  __m128 v84; // xmm4
  __m128 v85; // xmm1
  __m128 v86; // xmm4
  __m128 v87; // xmm3
  __m128 v88; // xmm3
  __m128 v89; // xmm3
  __int32 v90; // ecx
  bool v91; // zf
  _BYTE *v92; // rdx
  _BYTE *v93; // rdx
  struct _GUID *v94; // rax
  int v95[4]; // [rsp+30h] [rbp-DA8h] BYREF
  __m128 v96; // [rsp+40h] [rbp-D98h] BYREF
  __int64 v97; // [rsp+50h] [rbp-D88h] BYREF
  __m128 v98; // [rsp+60h] [rbp-D78h] BYREF
  __m128 v99; // [rsp+70h] [rbp-D68h]
  __m128 v100; // [rsp+80h] [rbp-D58h]
  __m128 v101; // [rsp+90h] [rbp-D48h]
  __m256i v102; // [rsp+A0h] [rbp-D38h] BYREF
  __m128 v103; // [rsp+C0h] [rbp-D18h]
  __m128i v104; // [rsp+D0h] [rbp-D08h]
  __m128 v105; // [rsp+E0h] [rbp-CF8h] BYREF
  __m128 v106; // [rsp+F0h] [rbp-CE8h] BYREF
  __m128 v107; // [rsp+100h] [rbp-CD8h]
  __m128 v108; // [rsp+110h] [rbp-CC8h]
  __m128i v109; // [rsp+120h] [rbp-CB8h]
  __int128 v110; // [rsp+130h] [rbp-CA8h] BYREF
  int v111; // [rsp+140h] [rbp-C98h]
  char v112[16]; // [rsp+150h] [rbp-C88h] BYREF
  int v113; // [rsp+160h] [rbp-C78h]
  __m128 v114; // [rsp+174h] [rbp-C64h]
  __m128 v115; // [rsp+184h] [rbp-C54h]
  __m128 v116; // [rsp+194h] [rbp-C44h]
  unsigned __int64 v117; // [rsp+1A4h] [rbp-C34h]
  unsigned int v118; // [rsp+1ACh] [rbp-C2Ch]
  unsigned __int64 v119; // [rsp+1E0h] [rbp-BF8h]
  unsigned int v120; // [rsp+1E8h] [rbp-BF0h]
  char v121[16]; // [rsp+1F0h] [rbp-BE8h] BYREF
  int v122; // [rsp+200h] [rbp-BD8h]
  __m128 v123; // [rsp+214h] [rbp-BC4h]
  __m128 v124; // [rsp+224h] [rbp-BB4h]
  __m128 v125; // [rsp+234h] [rbp-BA4h]
  _OWORD Src[4]; // [rsp+290h] [rbp-B48h] BYREF
  __m128 v127; // [rsp+2D0h] [rbp-B08h] BYREF
  __int64 v128; // [rsp+2E0h] [rbp-AF8h]
  unsigned __int32 v129; // [rsp+2E8h] [rbp-AF0h]
  _BYTE v130[4]; // [rsp+2ECh] [rbp-AECh]
  __m128 v131; // [rsp+2F0h] [rbp-AE8h]
  __int32 v132; // [rsp+300h] [rbp-AD8h]
  unsigned __int32 v133; // [rsp+304h] [rbp-AD4h]
  unsigned __int32 v134; // [rsp+308h] [rbp-AD0h]
  char v135; // [rsp+30Ch] [rbp-ACCh]
  char v136; // [rsp+30Dh] [rbp-ACBh]
  __int128 v137; // [rsp+310h] [rbp-AC8h]
  __int64 v138; // [rsp+320h] [rbp-AB8h]
  int v139; // [rsp+328h] [rbp-AB0h]
  char v140; // [rsp+32Ch] [rbp-AACh]
  char v141; // [rsp+32Dh] [rbp-AABh]
  __int32 v142; // [rsp+330h] [rbp-AA8h]
  unsigned __int32 v143; // [rsp+334h] [rbp-AA4h]
  unsigned __int32 v144; // [rsp+338h] [rbp-AA0h]
  int v145; // [rsp+33Ch] [rbp-A9Ch]
  unsigned __int32 v146; // [rsp+340h] [rbp-A98h]
  float v147; // [rsp+344h] [rbp-A94h]
  int v148; // [rsp+348h] [rbp-A90h]
  int v149; // [rsp+34Ch] [rbp-A8Ch]
  BOOL v150; // [rsp+350h] [rbp-A88h]
  int v151; // [rsp+354h] [rbp-A84h]
  float v152; // [rsp+358h] [rbp-A80h]
  __int64 v153; // [rsp+360h] [rbp-A78h]
  int v154; // [rsp+368h] [rbp-A70h]
  __int128 v155; // [rsp+3BCh] [rbp-A1Ch]
  int v156; // [rsp+3CCh] [rbp-A0Ch]
  int v157; // [rsp+3D0h] [rbp-A08h]
  int v158; // [rsp+3D4h] [rbp-A04h]
  int v159; // [rsp+3D8h] [rbp-A00h]
  char v160; // [rsp+3DCh] [rbp-9FCh]
  char v161; // [rsp+3DDh] [rbp-9FBh]
  int v162; // [rsp+3E0h] [rbp-9F8h]
  int v163; // [rsp+3E4h] [rbp-9F4h]
  __m128 v164; // [rsp+790h] [rbp-648h]
  __int64 v165; // [rsp+7A0h] [rbp-638h]
  unsigned __int32 v166; // [rsp+7A8h] [rbp-630h]
  float v167; // [rsp+7ACh] [rbp-62Ch]
  BOOL v168; // [rsp+7B0h] [rbp-628h]
  int v169; // [rsp+7B8h] [rbp-620h]
  _BYTE v170[196]; // [rsp+7C0h] [rbp-618h] BYREF
  int v171; // [rsp+884h] [rbp-554h]
  int v172; // [rsp+CE8h] [rbp-F0h]
  wil::details::in1diag3 *retaddr; // [rsp+DD8h] [rbp+0h]

  v97 = a2;
  memset_0(Src, 0, 0x530uLL);
  if ( a4 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)a4 + 32LL))(a4, a3, 0LL, v121);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    v15 = v124;
    v16 = v123;
    v17 = v122;
    v18 = (__m128)DirectX::g_XMIdentityR0;
    v19 = (__m128)DirectX::g_XMIdentityR1;
    v20 = (__m128)DirectX::g_XMIdentityR2;
    v21 = (__m128)DirectX::g_XMIdentityR3;
  }
  else
  {
    v18 = (__m128)DirectX::g_XMIdentityR0;
    v19 = (__m128)DirectX::g_XMIdentityR1;
    v20 = (__m128)DirectX::g_XMIdentityR2;
    v21 = (__m128)DirectX::g_XMIdentityR3;
    v15 = _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR2, 73);
    v16 = _mm_shuffle_ps(
            DirectX::g_XMIdentityR0,
            _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR0, 160),
            36);
    v123 = v16;
    v124 = v15;
    v125 = _mm_shuffle_ps(
             _mm_shuffle_ps(DirectX::g_XMIdentityR2, DirectX::g_XMIdentityR3, 10),
             DirectX::g_XMIdentityR3,
             152);
    v17 = 3;
    v122 = 3;
  }
  v22 = *(_QWORD *)(a1 + 88);
  if ( v22 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v22 + 32LL))(v22, a3, 0LL, v112);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v23);
      return v24;
    }
    v15 = v124;
    v16 = v123;
    v17 = v122;
    v25 = v113;
    v21 = (__m128)DirectX::g_XMIdentityR3;
  }
  else
  {
    v114 = _mm_shuffle_ps(v18, _mm_shuffle_ps(v19, v18, 160), 36);
    v115 = _mm_shuffle_ps(v19, v20, 73);
    v116 = _mm_shuffle_ps(_mm_shuffle_ps(v20, v21, 10), v21, 152);
    v25 = 3;
    v113 = 3;
  }
  v26 = v17 & 2;
  v27 = v25 & 2;
  v28 = v113 & 1;
  v95[0] = 2 * (v17 & 1) + 1;
  v29 = _mm_shuffle_ps(v15, v125, 14);
  v30 = _mm_shuffle_ps(v15, v16, 244);
  v31 = _mm_or_si128(_mm_srli_si128((__m128i)v125, 4), (__m128i)v21);
  v32 = _mm_and_ps(v29, DirectX::g_XMMask3);
  v33 = _mm_and_ps(_mm_shuffle_ps(v30, v30, 82), DirectX::g_XMMask3);
  v34 = DirectX::XMMatrixInverse(0LL, *(double *)v33.m128_u64, *(double *)v32.m128_u64, *(double *)v31.m128i_i64);
  v35 = _mm_shuffle_ps(v115, v114, 244);
  v36 = _mm_and_ps(_mm_shuffle_ps(v35, v35, 82), DirectX::g_XMMask3);
  v37 = _mm_and_ps(_mm_shuffle_ps(v115, v116, 14), DirectX::g_XMMask3);
  v38 = _mm_or_si128(_mm_srli_si128((__m128i)v116, 4), DirectX::g_XMIdentityR3);
  if ( !v28 )
    v38 = (__m128i)xmmword_180207A98;
  *(__m128 *)v102.m256i_i8 = v34;
  *(__m128 *)&v102.m256i_u64[2] = v33;
  v103 = v32;
  v104 = v31;
  *(_QWORD *)&v39 = DirectX::XMMatrixMultiply(COERCE_DOUBLE(v114.m128_u64[0] & DirectX::g_XMMask3), (__m128 *)&v102).m128_u64[0];
  v40 = *(__m128 *)a5;
  v41 = a5[1];
  v42 = *((__m128 *)a5 + 2);
  v43 = *((__m128i *)a5 + 3);
  v44 = *a6;
  v45 = a6[1];
  v96 = a6[2];
  v105 = a6[3];
  *(__m128 *)v102.m256i_i8 = v40;
  *(_OWORD *)&v102.m256i_u64[2] = v41;
  v103 = v42;
  v104 = v43;
  v46 = v38;
  v47 = v37;
  v48 = v36;
  v49 = DirectX::XMMatrixMultiply(v39, (__m128 *)&v102);
  *(__m128 *)v102.m256i_i8 = v49;
  *(__m128 *)&v102.m256i_u64[2] = v36;
  v103 = v37;
  v104 = v38;
  *(_QWORD *)&v50 = DirectX::XMMatrixInverse(0LL, *(double *)&v41, *(double *)v42.m128_u64, *(double *)v43.m128i_i64).m128_u64[0];
  v98 = v44;
  v99 = v45;
  v100 = v96;
  v101 = v105;
  Src[0] = DirectX::XMMatrixMultiply(v50, &v98);
  Src[1] = v41;
  Src[2] = v42;
  Src[3] = v43;
  v51 = v26 && v27;
  v52 = v26 && v28;
  v53 = (_BYTE *)(a1 + 272);
  *(_BYTE *)(a1 + 272) = v52;
  v149 = *(_DWORD *)(a1 + 12);
  v157 = *(_DWORD *)(a1 + 8);
  v158 = *(_DWORD *)(a1 + 152);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)a1,
    (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v110);
  v155 = v110;
  v156 = v111;
  v153 = a2;
  v148 = 1;
  v154 = *(_DWORD *)(a1 + 260);
  if ( *(_QWORD *)(a1 + 88) )
    v159 = *v53 != 0 ? v95[0] : 0;
  else
    v159 = -1;
  v140 = *(_BYTE *)(a1 + 304);
  v138 = *(_QWORD *)(a1 + 276);
  v139 = *(_DWORD *)(a1 + 284);
  v141 = v140;
  v137 = *(_OWORD *)(a1 + 288);
  if ( v140 )
  {
    v54 = (__m128 *)ApplyTransform(&v98, a1 + 276, &v102);
  }
  else
  {
    v98 = v49;
    v99 = v36;
    v100 = v37;
    v101 = (__m128)v38;
    v54 = &v98;
  }
  v106 = *v54;
  v107 = v54[1];
  v108 = v54[2];
  v55 = v54[3];
  v130[0] = *v53;
  v130[1] = v51;
  LODWORD(v128) = v55.m128_i32[0];
  HIDWORD(v128) = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
  v129 = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
  v56 = *v54;
  *(double *)v56.m128_u64 = DirectX::XMQuaternionRotationMatrix();
  v127 = v56;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v58 = (__m128 *)ApplyTransform(&v98, a1 + 308, &v102);
    v57 = *(_BYTE *)(a1 + 272);
  }
  else
  {
    v98 = v49;
    v99 = v36;
    v100 = v47;
    v101 = (__m128)v38;
    v58 = &v98;
  }
  v106 = *v58;
  v107 = v58[1];
  v108 = v58[2];
  v59 = v58[3];
  if ( !v57 || (v91 = *(_BYTE *)(a1 + 336) == 0, v135 = 1, v91) )
    v135 = 0;
  if ( !v51 || (v91 = *(_BYTE *)(a1 + 336) == 0, v136 = 1, v91) )
    v136 = 0;
  v132 = v59.m128_i32[0];
  v133 = _mm_shuffle_ps(v59, v59, 85).m128_u32[0];
  v134 = _mm_shuffle_ps(v59, v59, 170).m128_u32[0];
  v60 = *v58;
  *(double *)v60.m128_u64 = DirectX::XMQuaternionRotationMatrix();
  v131 = v60;
  InitJoints(&v127);
  v61 = *(int **)(a1 + 344);
  v62 = *(_QWORD *)v61;
  v96.m128_u64[0] = *(_QWORD *)v61;
  while ( (int *)v62 != v61 )
  {
    v63 = *(_QWORD *)(v62 + 88);
    v102 = *(__m256i *)(v62 + 48);
    v64 = *(__m128 *)v102.m256i_i8;
    v65 = *(__m128 *)&v102.m256i_u64[2];
    *(__int32 *)((char *)v131.m128_i32 + v63) = *(_DWORD *)(v62 + 80) != 2;
    v66 = 0LL;
    v66.m128_f32[0] = v64.m128_f32[0];
    v67 = 0LL;
    v67.m128_f32[0] = _mm_shuffle_ps(v64, v64, 85).m128_f32[0];
    v68 = _mm_unpacklo_ps(v66, v67);
    v69 = _mm_shuffle_ps(v64, v64, 170);
    v70 = 0LL;
    v70.m128_f32[0] = v69.m128_f32[0];
    *(_QWORD *)&v71 = DirectX::XMMatrixRotationQuaternion(*(double *)((char *)&v102.m256i_i64[1] + 4)).m128_u64[0];
    v98 = (__m128)DirectX::g_XMIdentityR0;
    v99 = (__m128)DirectX::g_XMIdentityR1;
    v100 = (__m128)DirectX::g_XMIdentityR2;
    v101 = _mm_or_ps(
             _mm_and_ps(_mm_movelh_ps(v68, v70), DirectX::g_XMMask3),
             _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
    *(_QWORD *)&v72 = DirectX::XMMatrixMultiply(v71, &v98).m128_u64[0];
    v106 = v49;
    v107 = v36;
    v108 = v47;
    v109 = v46;
    v73 = DirectX::XMMatrixMultiply(v72, &v106);
    *(_DWORD *)((char *)&v128 + v74) = v69.m128_i32[0];
    *(_DWORD *)((char *)&v128 + v74 + 4) = _mm_shuffle_ps(v69, v69, 85).m128_u32[0];
    *(_DWORD *)&v130[v74 - 4] = _mm_shuffle_ps(v69, v69, 170).m128_u32[0];
    *(double *)v73.m128_u64 = DirectX::XMQuaternionRotationMatrix();
    *(__m128 *)((char *)&v127 + v75) = v73;
    *(_DWORD *)&v130[v75] = _mm_shuffle_ps(v65, v65, 255).m128_u32[0];
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v96);
    v62 = v96.m128_u64[0];
  }
  v76 = v61;
  v77 = (__int64 *)*((_QWORD *)v61 + 1);
  if ( *((_BYTE *)v77 + 25) )
    goto LABEL_46;
  do
  {
    if ( *((int *)v77 + 8) >= 0 )
    {
      v76 = (int *)v77;
      v77 = (__int64 *)*v77;
    }
    else
    {
      v77 = (__int64 *)v77[2];
    }
  }
  while ( !*((_BYTE *)v77 + 25) );
  if ( v76 == v61 || v76[8] > 0 )
LABEL_46:
    v76 = v61;
  if ( v76 == v61 )
  {
    v164 = v127;
    v165 = v128;
    v166 = v129;
    v168 = *(_BYTE *)(a1 + 304) == 0;
    v167 = FLOAT_0_064999998;
  }
  if ( (v113 & 0x80u) != 0 )
  {
    v78 = _mm_movelh_ps((__m128)v119, (__m128)v120);
    v79 = _mm_mul_ps(v78, v78);
    v80 = _mm_shuffle_ps(v79, v79, 102);
    v81 = v79;
    v81.m128_f32[0] = (float)(v79.m128_f32[0] + v80.m128_f32[0]) + _mm_shuffle_ps(v80, v80, 85).m128_f32[0];
    v82 = _mm_sqrt_ps(_mm_shuffle_ps(v81, v81, 0)).m128_f32[0];
    if ( COERCE_FLOAT(LODWORD(v82) & _xmm) > 0.001 )
    {
      v152 = 1.0 - v82;
      v83 = _mm_shuffle_ps(v79, v79, 153);
      v79.m128_f32[0] = (float)(v79.m128_f32[0] + v83.m128_f32[0]) + _mm_shuffle_ps(v83, v83, 85).m128_f32[0];
      v84 = _mm_shuffle_ps(v79, v79, 0);
      v85 = _mm_sqrt_ps(v84);
      v86 = _mm_cmpneq_ps(v84, DirectX::g_XMInfinity);
      v87 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v78, v85), _mm_cmpneq_ps(v85, (__m128)0LL)), v86),
              _mm_andnot_ps(v86, DirectX::g_XMQNaN));
      v145 = v87.m128_i32[0];
      v146 = _mm_shuffle_ps(v87, v87, 85).m128_u32[0];
      LODWORD(v147) = _mm_shuffle_ps(v87, v87, 170).m128_u32[0];
      goto LABEL_56;
    }
    v145 = 1056964608;
    v146 = 1056964608;
    v147 = sqrtf_0(0.5);
    goto LABEL_54;
  }
  v145 = 1056964608;
  v146 = 1056964608;
  v147 = sqrtf_0(0.5);
  if ( *v53 )
  {
LABEL_54:
    v152 = FLOAT_1_0;
    goto LABEL_56;
  }
  v152 = 0.0;
LABEL_56:
  if ( (v113 & 4) != 0 )
  {
    v88 = _mm_movelh_ps((__m128)v117, (__m128)v118);
    v89 = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v88, v88, 170), v47),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v88, v88, 0), v49), _mm_mul_ps(_mm_shuffle_ps(v88, v88, 85), v48)));
    v142 = v89.m128_i32[0];
    v143 = _mm_shuffle_ps(v89, v89, 85).m128_u32[0];
    v144 = _mm_shuffle_ps(v89, v89, 170).m128_u32[0];
  }
  else
  {
    v142 = 0;
    v143 = 0;
    v144 = 0;
  }
  v90 = *(_DWORD *)(a1 + 256);
  v150 = v90 == 3;
  v160 = *(_BYTE *)(a1 + 156);
  v161 = *(_BYTE *)(a1 + 157);
  v162 = *(_DWORD *)(a1 + 264);
  v163 = *(_DWORD *)(a1 + 268);
  v151 = 0;
  if ( *v53 )
  {
    switch ( v90 )
    {
      case 2:
        v91 = a8 == 2;
        goto LABEL_62;
      case 4:
        if ( *(_BYTE *)(a1 + 158) )
        {
          v169 = 11;
          goto LABEL_74;
        }
        break;
      case 5:
        v91 = a8 == 5;
LABEL_62:
        if ( !v91 )
        {
          v169 = 9;
          goto LABEL_74;
        }
        break;
      case 3:
        if ( a8 != 3 )
        {
          v169 = 2;
          v151 = 1;
          goto LABEL_74;
        }
        goto LABEL_78;
    }
    if ( a8 == 3 )
    {
      v169 = 3;
      v151 = 2;
LABEL_74:
      if ( !a7 )
      {
        memcpy_0(v170, Src, 0x530uLL);
        v172 = 5;
        v171 = 0;
        v92 = *(_BYTE **)(a1 + 368);
        if ( *(_BYTE **)(a1 + 376) == v92 )
        {
          std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
            (const void **)(a1 + 360),
            v92,
            v170);
        }
        else
        {
          memcpy_0(*(void **)(a1 + 368), v170, 0x530uLL);
          *(_QWORD *)(a1 + 368) += 1328LL;
        }
      }
      goto LABEL_81;
    }
LABEL_78:
    v169 = a7 + 5;
    goto LABEL_81;
  }
  if ( a7 )
  {
    v169 = 4;
LABEL_81:
    v93 = *(_BYTE **)(a1 + 368);
    if ( *(_BYTE **)(a1 + 376) == v93 )
    {
      std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
        (const void **)(a1 + 360),
        v93,
        Src);
    }
    else
    {
      memcpy_0(*(void **)(a1 + 368), Src, 0x530uLL);
      *(_QWORD *)(a1 + 368) += 1328LL;
    }
    goto LABEL_85;
  }
  v95[0] = a8;
  v96.m128_i32[0] = v90;
  v94 = (struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, __m128 *))(**(_QWORD **)(a1 + 120) + 48LL))(
                          *(_QWORD *)(a1 + 120),
                          &v105);
  SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandReportIgnored<_GUID,__int64 &,unsigned int,unsigned int,unsigned char &,bool &>(
    v94,
    &v97,
    (int *)&v96,
    v95,
    (char *)(a1 + 272),
    &a7);
LABEL_85:
  *(_QWORD *)(a1 + 248) = a2;
  return 0LL;
}
