/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800B6ED0
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800A2D50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801A0618 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1800B78B4 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800B78DC (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x1800B7940 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // r11
  Mesh *v7; // r13
  float *v8; // r8
  char v9; // bl
  __int64 v10; // r15
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  __int64 v14; // rdi
  float *v15; // rcx
  float *v16; // r9
  __int64 v17; // r10
  float v18; // xmm1_4
  float v19; // xmm5_4
  int v20; // ebx
  float v21; // xmm0_4
  char v22; // cl
  __int64 v23; // r14
  __int64 v24; // rax
  float *v25; // r8
  float v26; // xmm1_4
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  int v29; // r9d
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // r10
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // r15
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // r12
  __int64 v44; // r10
  _DWORD *v45; // r15
  __int128 v46; // xmm0
  int v47; // eax
  __int64 v48; // r9
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // r10
  _DWORD *v52; // rsi
  __int128 v53; // xmm0
  int v54; // eax
  __int64 v55; // r9
  __int64 v56; // r9
  int v57; // r9d
  unsigned __int64 v58; // r14
  __int64 v59; // rsi
  int v60; // ecx
  __int64 v61; // r10
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rsi
  int v66; // r10d
  int v67; // eax
  D2D_VECTOR_2F v68; // rcx
  __int64 v69; // r9
  __int64 v70; // r11
  int v71; // edx
  __int64 v72; // r15
  bool v73; // r8
  int v74; // r8d
  __int64 v75; // r14
  __int64 v76; // rsi
  unsigned __int64 v77; // rbx
  __int64 v78; // r12
  __int64 *v79; // rax
  __int64 v80; // r13
  __int64 v81; // rdx
  _QWORD *v82; // rax
  __int64 v83; // rcx
  bool v84; // zf
  __int64 v85; // r13
  __int64 (__fastcall ***v86)(_QWORD, __int64); // rcx
  __int64 v87; // r12
  Mesh *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // r12
  __int64 v92; // r12
  __int64 v93; // rax
  int v94; // r10d
  unsigned __int64 v95; // r9
  int v96; // eax
  int v97; // eax
  __int64 *v98; // r11
  int v99; // r10d
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  char v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned int v109; // r12d
  int v111; // edx
  __int64 v112; // rcx
  int v113; // eax
  int v114; // edx
  __int64 v115; // rcx
  int v116; // eax
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rcx
  bool v124; // [rsp+30h] [rbp-D0h]
  bool v125; // [rsp+31h] [rbp-CFh]
  D2D_VECTOR_2F v128; // [rsp+40h] [rbp-C0h] BYREF
  int v129; // [rsp+48h] [rbp-B8h]
  int v130; // [rsp+4Ch] [rbp-B4h]
  int v131; // [rsp+50h] [rbp-B0h]
  int v132; // [rsp+54h] [rbp-ACh]
  int v133; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v134; // [rsp+60h] [rbp-A0h]
  __int64 v135; // [rsp+68h] [rbp-98h]
  int v136; // [rsp+70h] [rbp-90h]
  __int64 v137; // [rsp+78h] [rbp-88h]
  __int64 v138; // [rsp+80h] [rbp-80h]
  __int64 *v139; // [rsp+88h] [rbp-78h]
  __int64 v140; // [rsp+90h] [rbp-70h]
  __int64 v141; // [rsp+98h] [rbp-68h]
  __int64 v142; // [rsp+A0h] [rbp-60h]
  __int64 v143; // [rsp+A8h] [rbp-58h]
  __int64 v144; // [rsp+B0h] [rbp-50h]
  __int64 v145; // [rsp+B8h] [rbp-48h]
  __int128 v146; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v147; // [rsp+D0h] [rbp-30h]
  __int64 v148; // [rsp+D8h] [rbp-28h]
  float v149; // [rsp+E0h] [rbp-20h]
  _BYTE v150[108]; // [rsp+E4h] [rbp-1Ch] BYREF
  float v151[28]; // [rsp+150h] [rbp+50h]

  v4 = *((_QWORD *)this + 2);
  v5 = 1;
  v6 = a3;
  v7 = this;
  v8 = *(float **)this;
  v9 = 1;
  v10 = a4;
  v11 = *(float *)(v4 + 4);
  v12 = *(float *)(*(_QWORD *)this + 4LL);
  v149 = v12;
  v13 = v11 + v12;
  if ( (int)v6 > 1 )
  {
    v14 = 6LL * a4;
    v15 = &v8[v14 + 1];
    v16 = (float *)v150;
    v17 = (unsigned int)(v6 - 1);
    do
    {
      v18 = *v15;
      if ( v9 && v13 > v18 )
      {
        v18 = *(v16 - 1);
        v9 = 0;
      }
      else
      {
        if ( v18 <= v13 )
          v18 = v13;
        ++v5;
        v13 = v11 + v18;
        v9 = 1;
      }
      *v16 = v18;
      v15 = (float *)((char *)v15 + v14 * 4);
      ++v16;
      --v17;
    }
    while ( v17 );
    v12 = v149;
  }
  v20 = 1;
  v151[0] = *v8;
  v19 = v151[0];
  v21 = v151[0] + v11;
  v22 = 1;
  v23 = v10;
  if ( v10 > 1 )
  {
    v24 = 1LL;
    v25 = v8 + 6;
    do
    {
      v26 = *v25;
      if ( v22 && v21 > v26 )
      {
        v26 = *(float *)&v150[4 * v24 + 104];
        v22 = 0;
      }
      else
      {
        if ( v26 <= v21 )
          v26 = v21;
        ++v20;
        v21 = v11 + v26;
        v22 = 1;
      }
      v151[v24] = v26;
      v25 += 6;
      ++v24;
    }
    while ( v24 < v10 );
    v12 = v149;
    v19 = v151[0];
  }
  v27 = *(int *)(v4 + 32);
  v28 = *(_QWORD *)(v4 + 16);
  v29 = v27 + v6 * v10;
  if ( v29 > (__int64)v28 )
  {
    v109 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024882, 0x270u, 0LL);
    return v109;
  }
  if ( v27 >= v28 )
    goto LABEL_140;
  v30 = *(_QWORD *)(v4 + 24) + (v27 << 6);
  *(_DWORD *)(v4 + 32) = v29;
  v31 = *((_QWORD *)v7 + 2);
  v134 = v30;
  v32 = *(int *)(v31 + 56);
  v33 = *(_QWORD *)(v31 + 40);
  if ( (int)v32 + v5 > (__int64)v33 )
  {
    v109 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0x273u, 0LL);
    return v109;
  }
  if ( v32 >= v33 )
    goto LABEL_140;
  v34 = *(_QWORD *)(v31 + 48) + 88 * v32;
  *(_DWORD *)(v31 + 56) = v32 + v5;
  v35 = *((_QWORD *)v7 + 2);
  v135 = v34;
  v36 = *(int *)(v35 + 56);
  v37 = *(_QWORD *)(v35 + 40);
  if ( (int)v36 + v20 > (__int64)v37 )
  {
    v109 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, -2147024882, 0x276u, 0LL);
    return v109;
  }
  if ( v36 >= v37 )
    goto LABEL_140;
  v38 = *(_QWORD *)(v35 + 48) + 88 * v36;
  *(_DWORD *)(v35 + 56) = v36 + v20;
  v39 = *((_QWORD *)v7 + 2);
  v138 = v38;
  v40 = *(int *)(v39 + 88);
  v41 = *(_QWORD *)(v39 + 72);
  v42 = v40 + 2 * v5 * v20;
  if ( v42 > (__int64)v41 )
  {
    v109 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, -2147024882, 0x27Au, 0LL);
    return v109;
  }
  if ( v40 >= v41 )
  {
LABEL_140:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v43 = (int)v6;
  v142 = *(_QWORD *)(v39 + 80) + 88 * v40;
  *(_DWORD *)(v39 + 88) = v42;
  if ( (int)v6 > 0 )
  {
    v44 = 0LL;
    v45 = (_DWORD *)(v135 - 60);
    do
    {
      if ( v44 > 0 && *(float *)&v150[4 * v44 - 4] == *((float *)&v148 + v44 + 1) )
      {
        *v45 |= 0x10u;
      }
      else
      {
        *(_QWORD *)&v146 = __PAIR64__(*(_DWORD *)&v150[4 * v44 - 4], LODWORD(v19));
        v128 = (D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)0LL).m128_u64[0];
        v45 += 22;
        Mesh::Line2d::SetDirection((Mesh::Line2d *)&v146, &v128);
        v46 = v146;
        v47 = v147;
        *(_QWORD *)v48 = *((_QWORD *)v7 + 2);
        *(_OWORD *)(v48 + 8) = v46;
        *(_DWORD *)(v48 + 24) = v47;
        *(_QWORD *)(v48 + 48) = 0LL;
        *(_QWORD *)(v48 + 56) = 0LL;
        *(_DWORD *)(v48 + 64) = 0;
        *(_DWORD *)(v48 + 28) = 0;
        *(float *)&v46 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v48 + 8));
        *(_DWORD *)(v49 + 32) = v46;
        *(_QWORD *)(v49 + 72) = 0LL;
        *(_QWORD *)(v49 + 80) = 0LL;
      }
      ++v44;
    }
    while ( v44 < v43 );
    v38 = v138;
    v34 = v135;
  }
  *(_DWORD *)(v34 + 28) |= 1u;
  v141 = v5;
  v50 = 88LL * v5 + v34 - 88;
  v144 = v50;
  *(_DWORD *)(v50 + 28) |= 2u;
  if ( v23 > 0 )
  {
    v51 = 0LL;
    v52 = (_DWORD *)(v38 - 60);
    do
    {
      if ( v51 > 0 && v151[v51] == *(float *)&v150[4 * v51 + 104] )
      {
        *v52 |= 0x10u;
      }
      else
      {
        *(float *)&v146 = v151[v51];
        v128 = (D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
        *((float *)&v146 + 1) = v12;
        v52 += 22;
        Mesh::Line2d::SetDirection((Mesh::Line2d *)&v146, &v128);
        v53 = v146;
        v54 = v147;
        *(_QWORD *)v55 = *((_QWORD *)v7 + 2);
        *(_OWORD *)(v55 + 8) = v53;
        *(_DWORD *)(v55 + 24) = v54;
        *(_QWORD *)(v55 + 48) = 0LL;
        *(_QWORD *)(v55 + 56) = 0LL;
        *(_DWORD *)(v55 + 64) = 0;
        *(_DWORD *)(v55 + 28) = 0;
        *(float *)&v53 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v55 + 8));
        *(_DWORD *)(v56 + 32) = v53;
        *(_QWORD *)(v56 + 72) = 0LL;
        *(_QWORD *)(v56 + 80) = 0LL;
      }
      ++v51;
    }
    while ( v51 < v23 );
  }
  *(_DWORD *)(v38 + 28) |= 2u;
  v57 = 0;
  v145 = 88LL * v20 + v38 - 88;
  *(_DWORD *)(v145 + 28) |= 1u;
  if ( (int)v6 > 0 )
  {
    v58 = v134;
    v59 = 0LL;
    v60 = a4;
    do
    {
      if ( v60 > 0 )
      {
        v61 = (unsigned int)v60;
        v62 = (v59 << 6) + v58 + 24;
        v59 += (unsigned int)v60;
        do
        {
          v63 = *(_QWORD *)v7;
          *(_DWORD *)(v62 - 24) = v57;
          v62 += 64LL;
          v64 = v57++;
          *(_QWORD *)(v62 - 80) = v63 + 24 * v64;
          *(_QWORD *)(v62 - 64) = 0LL;
          *(_QWORD *)(v62 - 56) = 0LL;
          *(_DWORD *)(v62 - 48) = 0;
          *(_QWORD *)(v62 - 40) = 0LL;
          --v61;
        }
        while ( v61 );
        v60 = a4;
      }
      --v6;
    }
    while ( v6 );
  }
  v65 = v141;
  v66 = 0;
  v132 = 0;
  v129 = 0;
  if ( v141 <= 0 )
    goto LABEL_97;
  v67 = a4;
  v68 = 0LL;
  v69 = 0LL;
  v70 = v20 - 1LL;
  v128 = 0LL;
  v71 = a4 - 1;
  v137 = 0LL;
  v133 = a4 - 1;
  v72 = v135 + 40;
  v143 = v70;
  while ( 1 )
  {
    v73 = (*(_BYTE *)(v72 - 12) & 0x10) != 0;
    v124 = v73;
    v140 = v70;
    v131 = v71;
    if ( v70 >= 0 )
    {
      v139 = (__int64 *)(v72 + 16);
      v74 = v66 * v67;
      v75 = 88 * v70 + v138 + 40;
      v136 = v66 * v67;
      v76 = 88 * v69 + v142 + 104;
      while ( 1 )
      {
        v125 = (*(_BYTE *)(v75 - 12) & 0x10) != 0;
        *(_DWORD *)(v76 - 88) = 0;
        v77 = v134 + ((__int64)(v74 + v71) << 6);
        v130 = v74 + v71;
        *(_QWORD *)(v76 - 104) = v77;
        *(_QWORD *)(v76 - 72) = v77;
        *(_QWORD *)(v76 - 80) = v77;
        *(_QWORD *)(v76 - 56) = v77;
        *(_QWORD *)(v76 - 64) = v77;
        *(_QWORD *)(v76 - 96) = v72 - 40;
        *(_QWORD *)(v76 - 32) = 0LL;
        *(_QWORD *)(v76 - 24) = 0LL;
        *(_QWORD *)(v76 - 48) = 0LL;
        *(_QWORD *)(v76 - 40) = 0LL;
        v78 = *(_QWORD *)(v72 + 8);
        if ( v78 )
        {
          v79 = (__int64 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))v72)(v72, *(_QWORD *)(v72 + 8));
        }
        else
        {
          v79 = (__int64 *)(v72 - 40 + 56);
          v139 = v79;
        }
        v80 = *v79;
        if ( *v79 )
        {
          v119 = (**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, *v79);
          v81 = v76 - 104;
          *(_QWORD *)(v119 + 8) = v76 - 104;
        }
        else
        {
          v81 = v76 - 104;
        }
        *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v81) = v80;
        *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v76 - 104) + 8) = v78;
        if ( v78 )
        {
          v82 = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v78);
          v83 = v76 - 104;
          *v82 = v76 - 104;
        }
        else
        {
          v83 = v76 - 104;
        }
        if ( v78 == *(_QWORD *)(v72 + 8) )
          *(_QWORD *)(v72 + 8) = v83;
        v84 = v80 == *v139;
        v85 = v76 - 104;
        if ( v84 )
          *v139 = v85;
        ++*(_DWORD *)(v72 + 24);
        v86 = (__int64 (__fastcall ***)(_QWORD, __int64))(v77 + 16);
        v87 = *(_QWORD *)(v77 + 32);
        if ( v87 )
        {
          v120 = (**v86)(v86, *(_QWORD *)(v77 + 32));
          v86 = (__int64 (__fastcall ***)(_QWORD, __int64))(v77 + 16);
          *(_QWORD *)(v120 + 8) = v85;
        }
        *(_QWORD *)(**v86)(v86, v76 - 104) = v87;
        *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))(v77 + 16))(v77 + 16, v76 - 104) + 8) = 0LL;
        if ( !*(_QWORD *)(v77 + 24) )
          *(_QWORD *)(v77 + 24) = v85;
        if ( v87 == *(_QWORD *)(v77 + 32) )
          *(_QWORD *)(v77 + 32) = v85;
        ++*(_DWORD *)(v77 + 40);
        v88 = this;
        if ( (*(_BYTE *)(v75 - 12) & 1) != 0 )
        {
          v89 = *((_QWORD *)this + 2);
          *(_DWORD *)(v76 - 88) |= 2u;
          ++*(_DWORD *)(v89 + 96);
        }
        else
        {
          v111 = *(_DWORD *)(v72 - 12);
          v112 = *((_QWORD *)this + 2);
          v113 = *(_DWORD *)(v76 - 88);
          if ( (v111 & 2) != 0 )
          {
            *(_DWORD *)(v76 - 88) = v113 | 8;
            ++*(_DWORD *)(v112 + 100);
          }
          else
          {
            if ( (v111 & 1) != 0 )
            {
              *(_DWORD *)(v76 - 88) = v113 | 4;
              ++*(_DWORD *)(v112 + 100);
              v88 = this;
              goto LABEL_69;
            }
            *(_DWORD *)(v76 - 88) = v113 | 1;
            ++*(_DWORD *)(v112 + 92);
          }
          v88 = this;
        }
LABEL_69:
        if ( (*(_BYTE *)(v76 - 88) & 5) != 0 )
        {
          v117 = Mesh::MeshGraph::AddPolygon(*((Mesh::MeshGraph **)v88 + 2), (struct Mesh::MeshEdge *)(v76 - 104));
          v109 = v117;
          if ( v117 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0x2EEu, 0LL);
            return v109;
          }
        }
        v129 += 2;
        v90 = v76 - 16;
        v137 += 2LL;
        *(_QWORD *)(v76 - 16) = v77;
        *(_QWORD *)(v76 - 8) = v75 - 40;
        *(_DWORD *)v76 = 0;
        *(_QWORD *)(v76 + 56) = 0LL;
        *(_QWORD *)(v76 + 64) = 0LL;
        *(_QWORD *)(v76 + 40) = 0LL;
        *(_QWORD *)(v76 + 48) = 0LL;
        *(_QWORD *)(v76 + 16) = v77;
        *(_QWORD *)(v76 + 8) = v77;
        *(_QWORD *)(v76 + 32) = v77;
        *(_QWORD *)(v76 + 24) = v77;
        v91 = *(_QWORD *)(v75 + 16);
        if ( v91 )
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))v75)(v75, *(_QWORD *)(v75 + 16)) + 8) = v90;
        *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))v75)(v75, v76 - 16) = v91;
        *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))v75)(v75, v76 - 16) + 8) = 0LL;
        if ( !*(_QWORD *)(v75 + 8) )
          *(_QWORD *)(v75 + 8) = v90;
        if ( v91 == *(_QWORD *)(v75 + 16) )
          *(_QWORD *)(v75 + 16) = v90;
        ++*(_DWORD *)(v75 + 24);
        v92 = *(_QWORD *)(v77 + 32);
        if ( v92 )
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))(v77 + 16))(v77 + 16, *(_QWORD *)(v77 + 32)) + 8) = v90;
        *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))(v77 + 16))(v77 + 16, v76 - 16) = v92;
        *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))(v77 + 16))(v77 + 16, v76 - 16) + 8) = 0LL;
        if ( !*(_QWORD *)(v77 + 24) )
          *(_QWORD *)(v77 + 24) = v90;
        if ( v92 == *(_QWORD *)(v77 + 32) )
          *(_QWORD *)(v77 + 32) = v90;
        ++*(_DWORD *)(v77 + 40);
        if ( (*(_BYTE *)(v72 - 12) & 2) != 0 )
        {
          v93 = *((_QWORD *)this + 2);
          *(_DWORD *)v76 |= 2u;
          ++*(_DWORD *)(v93 + 96);
        }
        else
        {
          v114 = *(_DWORD *)(v75 - 12);
          v115 = *((_QWORD *)this + 2);
          v116 = *(_DWORD *)v76;
          if ( (v114 & 1) != 0 )
          {
            *(_DWORD *)v76 = v116 | 4;
            ++*(_DWORD *)(v115 + 100);
          }
          else if ( (v114 & 2) != 0 )
          {
            *(_DWORD *)v76 = v116 | 8;
            ++*(_DWORD *)(v115 + 100);
          }
          else
          {
            *(_DWORD *)v76 = v116 | 1;
            ++*(_DWORD *)(v115 + 92);
          }
        }
        v73 = v124;
        v94 = v130;
        v95 = v134;
        if ( v124 )
        {
          ++*(_DWORD *)(*(_QWORD *)(v76 - 104) + 48LL);
          v121 = v95 + ((__int64)(v94 + a4) << 6);
          *(_QWORD *)(v76 - 56) = v121;
          *(_QWORD *)(v76 - 64) = v121;
          *(_QWORD *)(v76 + 16) = v121;
          *(_QWORD *)(v76 + 32) = v121;
        }
        if ( v125 )
        {
          ++*(_DWORD *)(*(_QWORD *)v90 + 48LL);
          v122 = v95 + ((__int64)(v94 - 1) << 6);
          *(_QWORD *)(v76 + 32) = v122;
          *(_QWORD *)(v76 + 24) = v122;
          *(_QWORD *)(v76 - 80) = v122;
          *(_QWORD *)(v76 - 64) = v122;
        }
        if ( v124 )
        {
          if ( !v125 )
          {
LABEL_90:
            v96 = 1;
            goto LABEL_91;
          }
          v123 = v95 + ((__int64)(v94 + v133) << 6);
          *(_QWORD *)(v76 - 64) = v123;
          *(_QWORD *)(v76 + 32) = v123;
        }
        if ( !v125 )
          goto LABEL_90;
        v96 = 2;
LABEL_91:
        v75 -= 88LL;
        v71 = v131 - v96;
        v131 -= v96;
        v76 += 176LL;
        if ( --v140 < 0 )
        {
          v69 = v137;
          v68 = v128;
          v66 = v132;
          v70 = v143;
          v65 = v141;
          break;
        }
        v74 = v136;
      }
    }
    v97 = v73 ? 2 : 1;
    v66 += v97;
    ++*(_QWORD *)&v68;
    v72 += 88LL;
    v132 = v66;
    v128 = v68;
    if ( *(_QWORD *)&v68 >= v65 )
      break;
    v67 = a4;
    v71 = v133;
  }
  v50 = v144;
  v7 = this;
  v38 = v138;
LABEL_97:
  v98 = (__int64 *)&v146 + 1;
  *((_QWORD *)&v146 + 1) = v135;
  v99 = 0;
  v147 = v145;
  *(_QWORD *)&v146 = v38;
  v148 = v50;
  do
  {
    if ( v99 <= 0 )
      v100 = v50;
    else
      v100 = *(v98 - 2);
    v101 = *(v98 - 1);
    v102 = v50;
    v103 = v98[1];
    v104 = v99;
    *(_QWORD *)(v101 + 72) = v100;
    *(_QWORD *)(v101 + 80) = *((_QWORD *)&v146 + (((_BYTE)v99 + 1) & 3));
    if ( v99 + 1 > 0 )
      v102 = v101;
    v105 = *v98;
    *(_QWORD *)(v105 + 72) = v102;
    v106 = v50;
    *(_QWORD *)(v105 + 80) = *((_QWORD *)&v146 + (((_BYTE)v99 - 2) & 3));
    if ( v99 + 2 > 0 )
      v106 = v105;
    *(_QWORD *)(v103 + 72) = v106;
    v107 = v50;
    v108 = v98[2];
    *(_QWORD *)(v103 + 80) = *((_QWORD *)&v146 + (((_BYTE)v99 - 1) & 3));
    if ( v99 + 3 > 0 )
      v107 = v103;
    v99 += 4;
    *(_QWORD *)(v108 + 72) = v107;
    v98 += 4;
    *(_QWORD *)(v108 + 80) = *((_QWORD *)&v146 + (v104 & 3));
  }
  while ( (unsigned int)v99 < 4 );
  v109 = 0;
  *(_QWORD *)(*((_QWORD *)v7 + 2) + 64LL) = v38;
  return v109;
}
