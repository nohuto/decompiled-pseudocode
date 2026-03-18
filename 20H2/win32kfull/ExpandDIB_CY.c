/*
 * XREFs of ExpandDIB_CY @ 0x1C02679A0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00862E0 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0266540 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C026B6C4 (MappingBGRF.c)
 */

__int64 __fastcall ExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rsi
  char *v20; // r12
  unsigned __int8 *v21; // r15
  void *FixupScan; // rax
  void *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // r12d
  int v29; // eax
  __int128 v30; // xmm1
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // rbx
  void *v33; // rax
  unsigned __int8 *v34; // rdx
  char *v35; // rbx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // bx
  __int128 v42; // xmm1
  unsigned __int8 *v43; // r15
  void *v44; // rax
  __int64 v45; // r8
  unsigned __int8 *v46; // rdx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned __int64 v50; // rax
  _BYTE *v51; // r8
  int v52; // r9d
  int v53; // edx
  int v54; // ecx
  int v55; // r11d
  int *v56; // r10
  unsigned __int8 *v57; // rbx
  __int64 v58; // r9
  unsigned __int8 *v59; // r10
  __int64 v60; // r11
  int v61; // edx
  __int64 v62; // rax
  int *v63; // r10
  unsigned __int8 *v64; // r9
  __int64 v65; // r10
  __int64 v66; // r11
  int v67; // edx
  __int64 v68; // rax
  int *v69; // r9
  unsigned __int8 *v70; // r9
  __int64 v71; // r10
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int8 *v74; // rdx
  __int64 v75; // rax
  __int16 v76; // ax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v80; // [rsp+58h] [rbp-B0h]
  _BYTE v81[40]; // [rsp+68h] [rbp-A0h]
  unsigned __int8 *v82; // [rsp+90h] [rbp-78h]
  size_t Size; // [rsp+98h] [rbp-70h]
  int v84; // [rsp+A8h] [rbp-60h]
  __int64 *v85; // [rsp+B8h] [rbp-50h]
  int v86[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v87; // [rsp+150h] [rbp+48h]
  int v88; // [rsp+158h] [rbp+50h]
  unsigned int v89; // [rsp+15Ch] [rbp+54h]
  int v90; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v91)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v92)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v94)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v95; // [rsp+1F8h] [rbp+F0h]
  __int64 v96; // [rsp+200h] [rbp+F8h]
  __int64 v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  __int64 v99; // [rsp+260h] [rbp+158h]
  __int64 v100; // [rsp+268h] [rbp+160h]
  __int64 v101; // [rsp+270h] [rbp+168h]
  int v102; // [rsp+278h] [rbp+170h]
  int v103; // [rsp+27Ch] [rbp+174h]
  int v104; // [rsp+280h] [rbp+178h]
  __int64 v105; // [rsp+288h] [rbp+180h]
  __int64 v106; // [rsp+290h] [rbp+188h]
  __int64 v107; // [rsp+298h] [rbp+190h]
  int v108; // [rsp+2A0h] [rbp+198h]
  void *v109; // [rsp+2E0h] [rbp+1D8h]
  __int64 v110; // [rsp+2E8h] [rbp+1E0h]
  __int64 v111; // [rsp+2F0h] [rbp+1E8h]
  __int64 v112; // [rsp+2F8h] [rbp+1F0h]
  __int64 v113; // [rsp+300h] [rbp+1F8h]
  _BYTE *v114; // [rsp+308h] [rbp+200h]
  _BYTE *v115; // [rsp+310h] [rbp+208h]
  int v116; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v86;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v96 + 32);
  v16 = (unsigned __int8 *)(v15 + 4105);
  v17 = 3 * (v88 + 6);
  v18 = v17 + v15 + 4105;
  *(_QWORD *)&v81[8] = v18;
  v19 = v17 + v17 + v18;
  *(_QWORD *)&v81[16] = v17 + v18;
  v20 = (char *)(v17 + v19);
  v21 = (unsigned __int8 *)&v20[v17];
  *(_QWORD *)&v81[24] = v19;
  *(_QWORD *)&v81[32] = v20;
  v82 = v21;
  Size = v17 - 18;
  FixupScan = GetFixupScan((__int64)v86, v109);
  v94(v95, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v96 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((__int64)v86, v109);
    v94(v95, v23, (char *)v21, (char *)&v21[Size], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v24 = v96;
  v25 = *(unsigned __int16 *)(v96 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)&v81[24];
      --v27;
      v31 = &v16[Size];
      *(_OWORD *)v81 = *(_OWORD *)&v81[8];
      *(_QWORD *)&v81[32] = v82;
      v32 = v82;
      v82 = v16;
      *(_OWORD *)&v81[16] = v30;
      if ( v29 <= 0 )
      {
        v33 = GetFixupScan((__int64)v86, v109);
        v94(v95, v33, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v32, Size);
      }
      v19 = *((_QWORD *)&v30 + 1);
      if ( (v86[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v30 + 1), v32, Size);
      }
      else
      {
        v34 = (unsigned __int8 *)(*((_QWORD *)&v30 + 1) + 1LL);
        v35 = (char *)&v32[-*((_QWORD *)&v30 + 1)];
        do
        {
          v36 = (6 * v34[(_QWORD)v35 - 1] - *v16 - *(v34 - 1)) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *(v34 - 1) = v36;
          v37 = (6 * v34[(_QWORD)v35] - v16[1] - *v34) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          *v34 = v37;
          v38 = (6 * v34[(_QWORD)v35 + 1] - v16[2] - v34[1]) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          v34[1] = v38;
          v16 += 3;
          v34 += 3;
        }
        while ( v16 < v31 );
      }
      v16 = *(unsigned __int8 **)v81;
    }
    while ( v28 );
    v24 = v96;
    v18 = *(_QWORD *)&v81[8];
  }
  v39 = *(__int64 **)(v24 + 40);
  v40 = *(_DWORD *)(v24 + 16);
  while ( v40 )
  {
    v84 = v40 - 1;
    v41 = *v39;
    v80 = *v39;
    v85 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = *(_OWORD *)&v81[24];
      *(_OWORD *)v81 = *(_OWORD *)&v81[8];
      v43 = &v16[Size];
      *(_QWORD *)&v81[32] = v82;
      *(_OWORD *)&v81[16] = v42;
      v82 = v16;
      v44 = GetFixupScan((__int64)v86, v109);
      v94(v95, v44, (char *)v16, (char *)&v16[Size], 3);
      if ( (v86[0] & 0x200) != 0 )
      {
        v19 = *((_QWORD *)&v42 + 1);
        memmove(*((void **)&v42 + 1), *(const void **)&v81[32], Size);
      }
      else
      {
        v19 = *((_QWORD *)&v42 + 1);
        v45 = *(_QWORD *)&v81[32] - *((_QWORD *)&v42 + 1);
        v46 = (unsigned __int8 *)(*((_QWORD *)&v42 + 1) + 1LL);
        do
        {
          v47 = (6 * v46[v45 - 1] - *v16 - *(v46 - 1)) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *(v46 - 1) = v47;
          v48 = (6 * v46[v45] - v16[1] - *v46) >> 2;
          if ( (v48 & 0xFF00) != 0 )
            LOBYTE(v48) = ~HIBYTE(v48);
          *v46 = v48;
          v49 = (6 * v46[v45 + 1] - v16[2] - v46[1]) >> 2;
          if ( (v49 & 0xFF00) != 0 )
            LOBYTE(v49) = ~HIBYTE(v49);
          v46[1] = v49;
          v16 += 3;
          v46 += 3;
        }
        while ( v16 < v43 );
      }
      v18 = *(_QWORD *)&v81[8];
      v16 = *(unsigned __int8 **)v81;
      v41 &= 0x3FFFu;
    }
    v50 = v15;
    v51 = v114;
    v52 = -WORD1(v80);
    v53 = -WORD2(v80);
    v54 = 4096 - HIWORD(v80);
    v55 = -v41;
    if ( v41 )
    {
      v56 = (int *)(v15 + 2048);
      do
      {
        v55 += v41;
        v52 += WORD1(v80);
        v53 += WORD2(v80);
        *(v56 - 512) = v55;
        v54 += HIWORD(v80);
        *(v56 - 256) = v52;
        *v56 = v53;
        v56[256] = v54;
        ++v56;
      }
      while ( (unsigned __int64)(v56 - 512) < v15 + 1024 );
      v19 = *(_QWORD *)&v81[24];
      v57 = (unsigned __int8 *)(v18 + 2);
      v58 = *(_QWORD *)&v81[24] - v18;
      v59 = &v16[-v18];
      v60 = *(_QWORD *)&v81[16] - v18;
      do
      {
        v61 = *(_DWORD *)(v15 + 4LL * v57[(_QWORD)v59])
            + *(_DWORD *)(v15 + 4LL * v57[v58] + 3072)
            + *(_DWORD *)(v15 + 4LL * v57[v60] + 2048);
        v62 = *v57;
        v57 += 3;
        v51[2] = (*(_DWORD *)(v15 + 4 * v62 + 1024) + v61) >> 13;
        v51[1] = (*(_DWORD *)(v15 + 4LL * *(v57 - 4) + 1024)
                + *(_DWORD *)(v15 + 4LL * v57[(_QWORD)v59 - 4])
                + *(_DWORD *)(v15 + 4LL * v57[v58 - 4] + 3072)
                + *(_DWORD *)(v15 + 4LL * v57[v60 - 4] + 2048)) >> 13;
        *v51 = (*(_DWORD *)(v15 + 4LL * *(v57 - 5) + 1024)
              + *(_DWORD *)(v15 + 4LL * v57[(_QWORD)v59 - 5])
              + *(_DWORD *)(v15 + 4LL * v57[v60 - 5] + 2048)
              + *(_DWORD *)(v15 + 4LL * v57[v58 - 5] + 3072)) >> 13;
        v51 += v116;
      }
      while ( v51 != v115 );
    }
    else if ( WORD1(v80) )
    {
      v63 = (int *)(v15 + 2048);
      do
      {
        v52 += WORD1(v80);
        v53 += WORD2(v80);
        v54 += HIWORD(v80);
        *(v63 - 256) = v52;
        *v63 = v53;
        v63[256] = v54;
        ++v63;
      }
      while ( (unsigned __int64)(v63 - 512) < v15 + 1024 );
      v64 = (unsigned __int8 *)(v18 + 2);
      v65 = v19 - v18;
      v66 = *(_QWORD *)&v81[16] - v18;
      do
      {
        v67 = *(_DWORD *)(v15 + 4LL * v64[v65] + 3072) + *(_DWORD *)(v15 + 4LL * v64[v66] + 2048);
        v68 = *v64;
        v64 += 3;
        v51[2] = (*(_DWORD *)(v15 + 4 * v68 + 1024) + v67) >> 13;
        v51[1] = (*(_DWORD *)(v15 + 4LL * *(v64 - 4) + 1024)
                + *(_DWORD *)(v15 + 4LL * v64[v65 - 4] + 3072)
                + *(_DWORD *)(v15 + 4LL * v64[v66 - 4] + 2048)) >> 13;
        *v51 = (*(_DWORD *)(v15 + 4LL * *(v64 - 5) + 1024)
              + *(_DWORD *)(v15 + 4LL * v64[v65 - 5] + 3072)
              + *(_DWORD *)(v15 + 4LL * v64[v66 - 5] + 2048)) >> 13;
        v51 += v116;
      }
      while ( v51 != v115 );
    }
    else if ( WORD2(v80) )
    {
      v69 = (int *)(v15 + 3072);
      do
      {
        v53 += WORD2(v80);
        v54 += HIWORD(v80);
        *(v69 - 256) = v53;
        *v69++ = v54;
      }
      while ( (unsigned __int64)(v69 - 768) < v15 + 1024 );
      v70 = (unsigned __int8 *)(v19 + 1);
      v71 = *(_QWORD *)&v81[16] - v19;
      do
      {
        v51[2] = (*(_DWORD *)(v15 + 4LL * v70[1] + 3072) + *(_DWORD *)(v15 + 4LL * v70[v71 + 1] + 2048)) >> 13;
        v72 = v70[v71];
        v73 = *v70;
        v70 += 3;
        v51[1] = (*(_DWORD *)(v15 + 4 * v73 + 3072) + *(_DWORD *)(v15 + 4 * v72 + 2048)) >> 13;
        *v51 = (*(_DWORD *)(v15 + 4LL * *(v70 - 4) + 3072) + *(_DWORD *)(v15 + 4LL * v70[v71 - 4] + 2048)) >> 13;
        v51 += v116;
      }
      while ( v51 != v115 );
    }
    else
    {
      do
      {
        v54 += HIWORD(v80);
        *(_DWORD *)(v50 + 3072) = v54;
        v50 += 4LL;
      }
      while ( v50 < v15 + 1024 );
      v74 = (unsigned __int8 *)(v19 + 1);
      do
      {
        v51[2] = *(int *)(v15 + 4LL * v74[1] + 3072) >> 13;
        v75 = *v74;
        v74 += 3;
        v51[1] = *(int *)(v15 + 4 * v75 + 3072) >> 13;
        *v51 = *(int *)(v15 + 4LL * *(v74 - 4) + 3072) >> 13;
        v51 += v116;
      }
      while ( v51 != v115 );
    }
    v76 = v86[0];
    if ( SLOBYTE(v86[0]) < 0 )
    {
      v91(v86);
      v76 = v86[0];
    }
    if ( (v76 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v86);
      LOBYTE(v76) = v86[0];
    }
    if ( (v76 & 0x10) != 0 )
    {
      MappingBGRF(v110, v111, v98, v105);
      v77 = v108 + v105;
      if ( v77 == v106 )
        v77 = v107;
      v105 = v77;
    }
    v92(v86, v112, v113, v87, v97, v99, v99 + v103, v104, v93);
    v39 = v85;
    v78 = v102 + v99;
    if ( v78 == v100 )
      v78 = v101;
    v87 += v90;
    v40 = v84;
    v99 = v78;
  }
  return v89;
}
