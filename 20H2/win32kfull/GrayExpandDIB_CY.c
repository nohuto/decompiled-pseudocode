/*
 * XREFs of GrayExpandDIB_CY @ 0x1C0269B90
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

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
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
  unsigned __int64 v15; // rsi
  unsigned __int8 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r12
  const void *v20; // r13
  char *v21; // r14
  __int64 v22; // rbx
  void *FixupScan; // rax
  void *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r14d
  int v27; // eax
  unsigned int v28; // r14d
  unsigned int v29; // r13d
  __int128 v30; // xmm0
  _BYTE *v31; // xmm1_8
  int v32; // eax
  _BYTE *v33; // rbx
  const void *v34; // r15
  unsigned __int8 *v35; // rsi
  void *v36; // rax
  signed __int64 v37; // r15
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // r14
  __int128 v42; // xmm0
  unsigned __int8 *v43; // r15
  _BYTE *v44; // xmm1_8
  _BYTE *v45; // rbx
  void *v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rax
  unsigned __int8 *v49; // r13
  __int64 v50; // r9
  _WORD *v51; // r8
  int v52; // r11d
  int v53; // r10d
  int v54; // edx
  int v55; // ecx
  int *v56; // r9
  int v57; // edx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  int *v60; // r9
  __int64 v61; // rcx
  int v62; // edx
  __int64 v63; // rax
  int *v64; // r9
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int16 v68; // ax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v72; // [rsp+58h] [rbp-B0h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  __m256i v74; // [rsp+78h] [rbp-90h]
  __int64 v75; // [rsp+98h] [rbp-70h]
  int v76; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-50h]
  __int64 *v79; // [rsp+C0h] [rbp-48h]
  int v80[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v81; // [rsp+150h] [rbp+48h]
  int v82; // [rsp+158h] [rbp+50h]
  unsigned int v83; // [rsp+15Ch] [rbp+54h]
  int v84; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v85)(int *, unsigned __int64, _WORD *, __int64); // [rsp+188h] [rbp+80h]
  void (__fastcall *v86)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v87; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v88)(__int64, void *, const void *, __int64, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v89; // [rsp+1F8h] [rbp+F0h]
  __int64 v90; // [rsp+200h] [rbp+F8h]
  __int64 v91; // [rsp+248h] [rbp+140h]
  __int64 v92; // [rsp+250h] [rbp+148h]
  __int64 v93; // [rsp+260h] [rbp+158h]
  __int64 v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  int v96; // [rsp+278h] [rbp+170h]
  int v97; // [rsp+27Ch] [rbp+174h]
  int v98; // [rsp+280h] [rbp+178h]
  __int64 v99; // [rsp+288h] [rbp+180h]
  __int64 v100; // [rsp+290h] [rbp+188h]
  __int64 v101; // [rsp+298h] [rbp+190h]
  int v102; // [rsp+2A0h] [rbp+198h]
  void *v103; // [rsp+2E0h] [rbp+1D8h]
  __int64 v104; // [rsp+2E8h] [rbp+1E0h]
  __int64 v105; // [rsp+2F0h] [rbp+1E8h]
  __int64 v106; // [rsp+2F8h] [rbp+1F0h]
  __int64 v107; // [rsp+300h] [rbp+1F8h]
  _WORD *v108; // [rsp+308h] [rbp+200h]
  _WORD *v109; // [rsp+310h] [rbp+208h]
  int v110; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v80;
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
  v15 = *(_QWORD *)(v90 + 32);
  v77 = v15;
  v78 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v82 + 6;
  v18 = v17 + v15 + 4099;
  v74.m256i_i64[0] = v18;
  v19 = v17 + v17 + v18;
  v74.m256i_i64[1] = v17 + v18;
  v20 = (const void *)(v17 + v19);
  v21 = (char *)(v17 + v17 + v19);
  v74.m256i_i64[2] = v19;
  v74.m256i_i64[3] = v17 + v19;
  v75 = (__int64)v21;
  Size = v82;
  v22 = v82 + v17 + v19;
  FixupScan = GetFixupScan((__int64)v80, v103);
  v88(v89, FixupScan, v20, v22, 1);
  if ( (*(_BYTE *)(v90 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((__int64)v80, v103);
    v88(v89, v24, v21, (__int64)&v21[Size], 1);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v25 = v90;
  v26 = *(unsigned __int16 *)(v90 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v27 + v28;
  if ( v27 + v28 )
  {
    do
    {
      --v29;
      v30 = *(_OWORD *)v74.m256i_i8;
      v74.m256i_i64[1] = v74.m256i_i64[2];
      v31 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v74.m256i_u64[2], 8).m128i_u64[0];
      v19 = (__int64)v31;
      v32 = v28;
      v74.m256i_i64[2] = (__int64)v31;
      v74.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      --v28;
      v33 = v31;
      v74.m256i_i64[3] = v75;
      v34 = (const void *)v75;
      v75 = (__int64)v16;
      if ( v32 <= 0 )
      {
        v36 = GetFixupScan((__int64)v80, v103);
        v35 = &v16[Size];
        v88(v89, v36, v16, (__int64)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v34, Size);
        v35 = &v16[Size];
      }
      if ( (v80[0] & 0x200) != 0 )
      {
        memmove(v31, v34, Size);
      }
      else
      {
        v37 = (_BYTE *)v34 - v31;
        do
        {
          v38 = (6 * (unsigned __int8)v33[v37] - *v16 - (unsigned __int8)*v33) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *v33 = v38;
          ++v16;
          ++v33;
        }
        while ( v16 < v35 );
      }
      v16 = (unsigned __int8 *)v30;
    }
    while ( v29 );
    v25 = v90;
    v18 = *((_QWORD *)&v30 + 1);
    v15 = v77;
  }
  v39 = *(__int64 **)(v25 + 40);
  v40 = *(_DWORD *)(v25 + 16);
  while ( v40 )
  {
    v76 = v40 - 1;
    v41 = *v39;
    v72 = *v39;
    v79 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = *(_OWORD *)v74.m256i_i8;
      v43 = &v16[Size];
      v44 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v74.m256i_u64[2], 8).m128i_u64[0];
      v19 = (__int64)v44;
      *(_OWORD *)v74.m256i_i8 = *(_OWORD *)&v74.m256i_u64[1];
      v45 = v44;
      v74.m256i_i64[2] = (__int64)v44;
      v74.m256i_i64[3] = v75;
      v75 = (__int64)v16;
      v46 = GetFixupScan((__int64)v80, v103);
      v88(v89, v46, v16, (__int64)&v16[Size], 1);
      if ( (v80[0] & 0x200) != 0 )
      {
        memmove(v44, (const void *)v74.m256i_i64[3], Size);
      }
      else
      {
        do
        {
          v47 = (6 * (unsigned __int8)v45[v74.m256i_i64[3] - (_QWORD)v44] - *v16 - (unsigned __int8)*v45) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *v45 = v47;
          ++v16;
          ++v45;
        }
        while ( v16 < v43 );
      }
      v18 = *((_QWORD *)&v42 + 1);
      v16 = (unsigned __int8 *)v42;
      v41 &= 0x3FFFu;
    }
    v48 = v15;
    v49 = (unsigned __int8 *)v74.m256i_i64[1];
    v50 = v19;
    v51 = v108;
    v52 = -v41;
    v53 = -WORD1(v72);
    v54 = -WORD2(v72);
    v55 = 256 - HIWORD(v72);
    if ( v41 )
    {
      v56 = (int *)(v15 + 2048);
      do
      {
        v52 += v41;
        v53 += WORD1(v72);
        v54 += WORD2(v72);
        *(v56 - 512) = v52;
        v55 += HIWORD(v72);
        *(v56 - 256) = v53;
        *v56 = v54;
        v56[256] = v55;
        ++v56;
      }
      while ( (unsigned __int64)(v56 - 512) < v78 );
      v15 = v77;
      v50 = v18;
      do
      {
        v57 = *(_DWORD *)(v77 + 4LL * v16[v50 - v18])
            + *(_DWORD *)(v77 + 4LL * *(unsigned __int8 *)(v19 - v18 + v50) + 3072)
            + *(_DWORD *)(v77 + 4LL * *(unsigned __int8 *)(v74.m256i_i64[1] - v18 + v50) + 2048);
        v58 = *(unsigned __int8 *)v50++;
        v59 = (unsigned int)((*(_DWORD *)(v77 + 4 * v58 + 1024) + v57) >> 5);
        *v51 = v59;
        v51 = (_WORD *)((char *)v51 + v110);
      }
      while ( v51 != v109 );
    }
    else if ( WORD1(v72) )
    {
      v60 = (int *)(v15 + 2048);
      do
      {
        v53 += WORD1(v72);
        v54 += WORD2(v72);
        v55 += HIWORD(v72);
        *(v60 - 256) = v53;
        *v60 = v54;
        v60[256] = v55;
        ++v60;
      }
      while ( (unsigned __int64)(v60 - 512) < v15 + 1024 );
      v50 = v18;
      do
      {
        v61 = *(unsigned __int8 *)(v50 + v19 - v18);
        v62 = *(_DWORD *)(v15 + 4LL * *(unsigned __int8 *)(v50 + v74.m256i_i64[1] - v18) + 2048);
        v63 = *(unsigned __int8 *)v50++;
        v59 = (unsigned int)((*(_DWORD *)(v15 + 4 * v63 + 1024) + *(_DWORD *)(v15 + 4 * v61 + 3072) + v62) >> 5);
        *v51 = v59;
        v51 = (_WORD *)((char *)v51 + v110);
      }
      while ( v51 != v109 );
    }
    else if ( WORD2(v72) )
    {
      v64 = (int *)(v15 + 3072);
      do
      {
        v54 += WORD2(v72);
        v55 += HIWORD(v72);
        *(v64 - 256) = v54;
        *v64++ = v55;
      }
      while ( (unsigned __int64)(v64 - 768) < v15 + 1024 );
      v50 = v19 - v74.m256i_i64[1];
      do
      {
        v65 = v49[v50];
        v66 = *v49++;
        v59 = (unsigned int)((*(_DWORD *)(v15 + 4 * v66 + 2048) + *(_DWORD *)(v15 + 4 * v65 + 3072)) >> 5);
        *v51 = v59;
        v51 = (_WORD *)((char *)v51 + v110);
      }
      while ( v51 != v109 );
    }
    else
    {
      v59 = v15 + 1024;
      do
      {
        v55 += HIWORD(v72);
        *(_DWORD *)(v48 + 3072) = v55;
        v48 += 4LL;
      }
      while ( v48 < v59 );
      do
      {
        v67 = *(unsigned __int8 *)v50++;
        *v51 = *(int *)(v15 + 4 * v67 + 3072) >> 5;
        v51 = (_WORD *)((char *)v51 + v110);
      }
      while ( v51 != v109 );
    }
    v68 = v80[0];
    if ( SLOBYTE(v80[0]) < 0 )
    {
      v85(v80, v59, v51, v50);
      v68 = v80[0];
    }
    if ( (v68 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v80);
      LOBYTE(v68) = v80[0];
    }
    if ( (v68 & 0x10) != 0 )
    {
      MappingBGRF(v104, v105, v92, v99);
      v69 = v102 + v99;
      if ( v69 == v100 )
        v69 = v101;
      v99 = v69;
    }
    v86(v80, v106, v107, v81, v91, v93, v93 + v97, v98, v87);
    v39 = v79;
    v70 = v96 + v93;
    if ( v70 == v94 )
      v70 = v95;
    v81 += v84;
    v40 = v76;
    v93 = v70;
  }
  return v83;
}
