/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C026B950
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0054A90 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0267B60 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C026AE44 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C026C360 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C026CCE4 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r15
  size_t v18; // r12
  unsigned __int64 v19; // rsi
  char *v20; // rbx
  char *v21; // r14
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // r14d
  int v26; // r15d
  void *v27; // rdi
  const void *v28; // rcx
  _BYTE *v29; // r13
  int v30; // eax
  __int64 *v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // di
  int v34; // r14d
  void *v35; // rdx
  int v36; // ebx
  _BYTE *v37; // r8
  unsigned __int64 v38; // r11
  _WORD *v39; // r9
  int v40; // ebx
  __int64 v41; // rdx
  int v42; // r14d
  unsigned __int8 *v43; // r10
  int v44; // ecx
  unsigned __int8 *v45; // r8
  _DWORD *v46; // r11
  __int64 v47; // r10
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // rbx
  int v50; // edx
  __int64 v51; // rax
  _DWORD *v52; // r11
  __int64 v53; // r10
  unsigned __int64 v54; // r11
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // rax
  int *v58; // r11
  __int64 v59; // r10
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v67; // [rsp+28h] [rbp-E0h]
  int v68; // [rsp+58h] [rbp-B0h]
  __int64 v69; // [rsp+60h] [rbp-A8h]
  int v70; // [rsp+68h] [rbp-A0h]
  void *v71; // [rsp+70h] [rbp-98h]
  void *v72; // [rsp+78h] [rbp-90h]
  void *Src; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h]
  int v75; // [rsp+90h] [rbp-78h]
  __int64 v76; // [rsp+98h] [rbp-70h]
  int v77; // [rsp+A0h] [rbp-68h]
  __int64 v78; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v79; // [rsp+B0h] [rbp-58h]
  __int16 v80; // [rsp+B8h] [rbp-50h]
  __int64 *v81; // [rsp+C8h] [rbp-40h]
  int v82[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v83; // [rsp+110h] [rbp+8h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  int v85; // [rsp+168h] [rbp+60h]
  unsigned int v86; // [rsp+16Ch] [rbp+64h]
  int v87; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v88)(int *, __int64, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v89)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  __int64 v91; // [rsp+208h] [rbp+100h]
  __int64 v92; // [rsp+210h] [rbp+108h]
  __int64 v93; // [rsp+258h] [rbp+150h]
  __int64 v94; // [rsp+260h] [rbp+158h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  __int64 v96; // [rsp+278h] [rbp+170h]
  __int64 v97; // [rsp+280h] [rbp+178h]
  int v98; // [rsp+288h] [rbp+180h]
  int v99; // [rsp+28Ch] [rbp+184h]
  int v100; // [rsp+290h] [rbp+188h]
  __int64 v101; // [rsp+298h] [rbp+190h]
  __int64 v102; // [rsp+2A0h] [rbp+198h]
  __int64 v103; // [rsp+2A8h] [rbp+1A0h]
  int v104; // [rsp+2B0h] [rbp+1A8h]
  __int64 v105; // [rsp+2F0h] [rbp+1E8h]
  __int64 v106; // [rsp+2F8h] [rbp+1F0h]
  __int64 v107; // [rsp+300h] [rbp+1F8h]
  __int64 v108; // [rsp+308h] [rbp+200h]
  __int64 v109; // [rsp+310h] [rbp+208h]
  _WORD *v110; // [rsp+318h] [rbp+210h]
  _WORD *v111; // [rsp+320h] [rbp+218h]
  int v112; // [rsp+328h] [rbp+220h]
  unsigned __int64 v113; // [rsp+338h] [rbp+230h]
  __int64 v114; // [rsp+340h] [rbp+238h]
  __int64 v115; // [rsp+348h] [rbp+240h]
  __int64 v116; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v82;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = -1;
    v17 = v92;
    v18 = v83;
    v78 = v85;
    v19 = *(_QWORD *)(v92 + 32);
    v80 = *(_WORD *)(v91 + 12);
    v75 = *(_WORD *)(v91 + 8) & 1;
    v79 = *(unsigned __int64 **)(v91 + 40);
    v113 = v19 + 4096;
    v114 = v85 + v19 + 4096;
    v76 = v92;
    v70 = v83;
    v115 = v114 + v85;
    v116 = v115 + v85;
    v68 = -1;
    v20 = (char *)(v85 + 3LL + v116 + v83 + 6LL);
    v71 = (void *)(v85 + 3LL + v116);
    v21 = &v20[v83 + 6];
    v72 = v20;
    LODWORD(v74) = v105 + 3;
    Src = v21;
    GetFixupScan((__int64)v82, v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v82, v21);
    else
      memmove(v21, v20, v18);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v23 + v24;
    if ( v23 + v24 )
    {
      v26 = -1;
      v27 = v71;
      do
      {
        ++v26;
        v28 = Src;
        --v25;
        v71 = v72;
        v72 = Src;
        Src = v27;
        v29 = (_BYTE *)*(&v113 + (v26 & 3));
        v30 = v24--;
        if ( v30 <= 0 )
          GetFixupScan((__int64)v82, v27);
        else
          memmove(v27, v28, v18);
        v67 = (__int64)v27;
        v27 = v71;
        v74 = GraySharpenInput(v82[0], v74, (int)v71, (int)v72, v67, v18);
        GrayExpYDIB_ExpCX(v79, (unsigned __int8 *)(v74 + v75 + (v80 & 0xFu) - 1LL), v29, &v29[v78]);
      }
      while ( v25 );
      v68 = v26;
      v16 = v26;
      v17 = v76;
    }
    v31 = *(__int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v77 = v32 - 1;
      v33 = *v31;
      v69 = *v31;
      v81 = v31 + 1;
      if ( (v33 & 0x8000u) != 0 )
      {
        v34 = (int)v72;
        v35 = v71;
        v36 = (int)Src;
        v71 = v72;
        v72 = Src;
        Src = GetFixupScan((__int64)v82, v35);
        v74 = GraySharpenInput(v82[0], v74, v34, v36, (__int64)Src, v70);
        v68 = v16 + 1;
        v37 = (_BYTE *)*(&v113 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v79, (unsigned __int8 *)((unsigned __int16)v75 - 1LL + v74 + (v80 & 0xF)), v37, &v37[v78]);
        v33 &= 0x3FFFu;
      }
      v38 = v19;
      v39 = v110;
      v40 = -WORD1(v69);
      v41 = (unsigned int)-WORD2(v69);
      v42 = -v33;
      v43 = (unsigned __int8 *)*(&v113 + (v68 & 3));
      v44 = 256 - HIWORD(v69);
      v45 = (unsigned __int8 *)*(&v113 + (((_BYTE)v68 - 1) & 3));
      if ( v33 )
      {
        v46 = (_DWORD *)(v19 + 2048);
        do
        {
          v42 += v33;
          v40 += WORD1(v69);
          LODWORD(v41) = WORD2(v69) + (_DWORD)v41;
          *(v46 - 512) = v42;
          v44 += HIWORD(v69);
          *(v46 - 256) = v40;
          *v46 = v41;
          v46[256] = v44;
          ++v46;
        }
        while ( (unsigned __int64)(v46 - 512) < v19 + 1024 );
        v16 = v68;
        v47 = v43 - v45;
        v48 = *(&v113 + (((_BYTE)v68 - 2) & 3)) - (_QWORD)v45;
        v49 = *(&v113 + (((_BYTE)v68 + 1) & 3)) - (_QWORD)v45;
        do
        {
          v50 = *(_DWORD *)(v19 + 4LL * v45[v49])
              + *(_DWORD *)(v19 + 4LL * v45[v48] + 1024)
              + *(_DWORD *)(v19 + 4LL * v45[v47] + 3072);
          v51 = *v45++;
          v41 = (unsigned int)((*(_DWORD *)(v19 + 4 * v51 + 2048) + v50) >> 5);
          *v39 = v41;
          v39 = (_WORD *)((char *)v39 + v112);
        }
        while ( v39 != v111 );
      }
      else if ( WORD1(v69) )
      {
        v52 = (_DWORD *)(v19 + 2048);
        do
        {
          v40 += WORD1(v69);
          LODWORD(v41) = WORD2(v69) + (_DWORD)v41;
          v44 += HIWORD(v69);
          *(v52 - 256) = v40;
          *v52 = v41;
          v52[256] = v44;
          ++v52;
        }
        while ( (unsigned __int64)(v52 - 512) < v19 + 1024 );
        v16 = v68;
        v53 = v43 - v45;
        v54 = *(&v113 + (((_BYTE)v68 - 2) & 3)) - (_QWORD)v45;
        do
        {
          v55 = v45[v54];
          v56 = *(_DWORD *)(v19 + 4LL * v45[v53] + 3072);
          v57 = *v45++;
          v41 = (unsigned int)((*(_DWORD *)(v19 + 4 * v57 + 2048) + *(_DWORD *)(v19 + 4 * v55 + 1024) + v56) >> 5);
          *v39 = v41;
          v39 = (_WORD *)((char *)v39 + v112);
        }
        while ( v39 != v111 );
      }
      else
      {
        if ( WORD2(v69) )
        {
          v58 = (int *)(v19 + 3072);
          do
          {
            LODWORD(v41) = WORD2(v69) + (_DWORD)v41;
            v44 += HIWORD(v69);
            *(v58 - 256) = v41;
            *v58++ = v44;
          }
          while ( (unsigned __int64)(v58 - 768) < v19 + 1024 );
          v59 = v43 - v45;
          do
          {
            v60 = v45[v59];
            v61 = *v45++;
            v41 = (unsigned int)((*(_DWORD *)(v19 + 4 * v61 + 2048) + *(_DWORD *)(v19 + 4 * v60 + 3072)) >> 5);
            *v39 = v41;
            v39 = (_WORD *)((char *)v39 + v112);
          }
          while ( v39 != v111 );
        }
        else
        {
          do
          {
            v44 += HIWORD(v69);
            *(_DWORD *)(v38 + 3072) = v44;
            v38 += 4LL;
          }
          while ( v38 < v19 + 1024 );
          do
          {
            v62 = *v43++;
            *v39 = *(int *)(v19 + 4 * v62 + 3072) >> 5;
            v39 = (_WORD *)((char *)v39 + v112);
          }
          while ( v39 != v111 );
        }
        v16 = v68;
      }
      v63 = v82[0];
      if ( SLOBYTE(v82[0]) < 0 )
      {
        v88(v82, v41, v45);
        v63 = v82[0];
      }
      if ( (v63 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v82);
        LOBYTE(v63) = v82[0];
      }
      if ( (v63 & 0x10) != 0 )
      {
        MappingBGRF(v106, v107, v94, v101);
        v64 = v104 + v101;
        if ( v64 == v102 )
          v64 = v103;
        v101 = v64;
      }
      v89(v82, v108, v109, v84, v93, v95, v95 + v99, v100, v90);
      v65 = v98 + v95;
      if ( v65 == v96 )
        v65 = v97;
      v84 += v87;
      v32 = v77;
      v95 = v65;
      v31 = v81;
    }
  }
  return v86;
}
