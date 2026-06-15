/*
 * XREFs of sub_180116778 @ 0x180116778
 * Callers:
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 * Callees:
 *     sub_18000E6E0 @ 0x18000E6E0 (sub_18000E6E0.c)
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180116778(__int64 a1, int a2, unsigned int a3, unsigned int *a4, _OWORD *a5, __int128 *a6)
{
  size_t v6; // r15
  int v9; // r12d
  char *v10; // rdi
  __int128 v11; // xmm7
  __int128 v12; // xmm8
  __int128 v13; // xmm9
  __int128 v14; // xmm10
  __int64 v15; // xmm6_8
  bool v16; // bl
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  void *v21; // rbx
  __int128 *v22; // rsi
  void *v23; // rcx
  int v24; // eax
  __int64 v25; // r13
  SIZE_T v26; // r14
  int i; // ebx
  __int64 v28; // rsi
  unsigned int *v29; // rax
  char v30; // r10
  bool *v31; // rdx
  size_t v32; // r9
  unsigned int *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // al
  __int64 v37; // rdx
  char *v38; // rcx
  unsigned int v39; // r11d
  unsigned int *v40; // rax
  char v41; // r10
  char *v42; // rdx
  size_t v43; // r9
  unsigned int *v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // r14d
  char *v48; // rax
  int *v49; // r14
  unsigned int v50; // eax
  unsigned int *v51; // rcx
  char v52; // r11
  _BYTE *v53; // r8
  size_t v54; // r10
  unsigned int *v55; // r9
  __int64 v56; // rdx
  int v57; // edx
  int v58; // r8d
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int128 *v61; // [rsp+40h] [rbp-C8h]
  int v62; // [rsp+48h] [rbp-C0h]
  unsigned int v63; // [rsp+4Ch] [rbp-BCh]
  unsigned int *v64; // [rsp+50h] [rbp-B8h]
  _QWORD pvar[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v66[3]; // [rsp+70h] [rbp-98h] BYREF
  char *v67; // [rsp+88h] [rbp-80h]
  unsigned __int64 v68; // [rsp+90h] [rbp-78h]
  __int64 v69; // [rsp+A0h] [rbp-68h]
  __int64 v70; // [rsp+A8h] [rbp-60h]
  __int128 v71; // [rsp+B8h] [rbp-50h] BYREF
  __m256i v72; // [rsp+C8h] [rbp-40h]
  __int128 v73; // [rsp+E8h] [rbp-20h]
  __int64 v74; // [rsp+F8h] [rbp-10h]
  _DWORD v75[14]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v76[2]; // [rsp+140h] [rbp+38h] BYREF
  int v77; // [rsp+160h] [rbp+58h]
  int v78; // [rsp+164h] [rbp+5Ch]
  _DWORD v79[2]; // [rsp+168h] [rbp+60h]
  __int64 v80; // [rsp+170h] [rbp+68h]
  __int128 v81; // [rsp+178h] [rbp+70h]
  __int128 v82; // [rsp+188h] [rbp+80h]
  int v83; // [rsp+198h] [rbp+90h]
  __int64 v84; // [rsp+1A0h] [rbp+98h]
  __int128 v85; // [rsp+1A8h] [rbp+A0h]
  int v86; // [rsp+1B8h] [rbp+B0h]
  __int64 v87; // [rsp+1C0h] [rbp+B8h]
  __int128 v88; // [rsp+1C8h] [rbp+C0h]
  int v89; // [rsp+1D8h] [rbp+D0h]
  __int64 v90; // [rsp+1E0h] [rbp+D8h]
  __int128 v91; // [rsp+1E8h] [rbp+E0h]

  v64 = a4;
  v6 = a3;
  v61 = a6;
  v69 = 0LL;
  v70 = 0LL;
  v9 = 0;
  *(_OWORD *)&pvar[1] = 0LL;
  v66[0] = 0LL;
  v75[0] = 8000;
  v75[1] = 11025;
  v75[2] = 16000;
  v75[3] = 22050;
  v75[4] = 24000;
  v75[5] = 32000;
  v75[6] = 44100;
  v75[7] = 48000;
  v75[8] = 88200;
  v75[9] = 96000;
  v75[10] = 176400;
  v75[11] = 192000;
  v75[12] = 352800;
  v75[13] = 384000;
  v76[0] = _mm_load_si128((const __m128i *)&xmmword_180178FD0);
  v76[1] = _mm_load_si128((const __m128i *)&xmmword_180178FE0);
  v77 = 32;
  v78 = 32;
  v79[0] = 0;
  v80 = 0LL;
  v81 = unk_1801567B0;
  v82 = unk_1801567C0;
  v83 = 0;
  v84 = 0LL;
  v85 = unk_180156790;
  v86 = 0;
  v87 = 0LL;
  v88 = unk_1801567A0;
  v89 = 0;
  v90 = 0LL;
  v91 = unk_180156780;
  v10 = 0LL;
  v67 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  v16 = (unsigned int)sub_180047F60(a1) != 0;
  pv = 0LL;
  v71 = v11;
  *(_OWORD *)v72.m256i_i8 = v12;
  *(_OWORD *)&v72.m256i_u64[2] = v13;
  v73 = v14;
  v74 = v15;
  LOBYTE(v17) = v16;
  LOBYTE(v18) = 1;
  sub_180117FF4(a1, v18, v17, a2, (__int64)&v71, (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v71 = v11;
  *(_OWORD *)v72.m256i_i8 = v12;
  *(_OWORD *)&v72.m256i_u64[2] = v13;
  v73 = v14;
  v74 = v15;
  LOBYTE(v19) = v16;
  sub_180117FF4(a1, 0, v19, a2, (__int64)&v71, (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)&v66[1] = *a5;
  v20 = sub_18000E6E0(a1, a2, (__int128 *)&v66[1], &pv);
  v21 = pv;
  if ( v20 >= 0 && *((_WORD *)pv + 7) && *((_DWORD *)pv + 2) && *((_WORD *)pv + 6) && *((_WORD *)pv + 1) )
  {
    v22 = v61;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = sub_180119B6C(v61, pv, 0LL);
      if ( v9 < 0 )
      {
        v23 = v21;
LABEL_9:
        CoTaskMemFree(v23);
        goto LABEL_80;
      }
    }
  }
  else
  {
    v22 = v61;
  }
  CoTaskMemFree(v21);
  v66[1] = 0LL;
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD *))(**(_QWORD **)(a1 + 40) + 40LL))(
          *(_QWORD *)(a1 + 40),
          &xmmword_18015B780,
          &pvar[1]);
  v25 = 0LL;
  if ( v24 >= 0 && LOWORD(pvar[1]) == 65 && sub_180047420((__int64)&pvar[1]) )
  {
    v9 = sub_18001FEF0(v66[0]);
    if ( v9 >= 0 )
    {
      v9 = sub_180119B6C(v22, v66[0], 0LL);
      if ( v9 < 0 )
      {
        v23 = 0LL;
        goto LABEL_9;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar[1]);
  CoTaskMemFree(0LL);
  v26 = (unsigned int)(3 * v6);
  v66[1] = v26;
  v10 = (char *)sub_18006A1B0(v26);
  v67 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v68 = 16LL * i;
      v28 = (int)v79[v68 / 4];
      if ( (_DWORD)v28 )
      {
        memset(v10, 1, v26);
        v29 = v64;
        v30 = 0;
        if ( !(_DWORD)v6 )
          goto LABEL_35;
        v31 = (bool *)v10;
        v32 = v6;
        do
        {
          v33 = (unsigned int *)((char *)v29 + *v29);
          if ( *v31 )
          {
            v34 = 0x10000073647561LL - *((_QWORD *)v29 + 2);
            if ( *((_QWORD *)v29 + 2) == 0x10000073647561LL )
              v34 = 0x719B3800AA000080LL - *((_QWORD *)v29 + 3);
            if ( v34 )
              goto LABEL_32;
            v35 = 0x10000000000001LL - *((_QWORD *)v29 + 4);
            if ( *((_QWORD *)v29 + 4) == 0x10000000000001LL )
              v35 = 0x719B3800AA000080LL - *((_QWORD *)v29 + 5);
            if ( v35 )
            {
LABEL_32:
              *v31 = 0;
            }
            else
            {
              v36 = i <= v29[16];
              *v31 = v36;
              if ( v36 )
                v30 = 1;
            }
          }
          ++v31;
          v29 = v33;
          --v32;
        }
        while ( v32 );
        if ( v30 )
        {
LABEL_35:
          LODWORD(v37) = 0;
          if ( (int)v28 > 0 )
          {
            v38 = &v10[v6];
            while ( 2 )
            {
              v62 = v37;
              pv = v75;
              do
              {
                memcpy(v38, v10, v6);
                v39 = *(_DWORD *)pv;
                v40 = v64;
                v41 = 0;
                if ( !(_DWORD)v6 )
                  goto LABEL_53;
                v42 = &v10[v6];
                v43 = v6;
                do
                {
                  v44 = (unsigned int *)((char *)v40 + *v40);
                  if ( *v42 )
                  {
                    v45 = 0x10000073647561LL - *((_QWORD *)v40 + 2);
                    if ( *((_QWORD *)v40 + 2) == 0x10000073647561LL )
                      v45 = 0x719B3800AA000080LL - *((_QWORD *)v40 + 3);
                    if ( v45 )
                      goto LABEL_50;
                    v46 = 0x10000000000001LL - *((_QWORD *)v40 + 4);
                    if ( *((_QWORD *)v40 + 4) == 0x10000000000001LL )
                      v46 = 0x719B3800AA000080LL - *((_QWORD *)v40 + 5);
                    if ( v46 || v39 < v40[19] || v39 > v40[20] )
                    {
LABEL_50:
                      *v42 = 0;
                    }
                    else
                    {
                      *v42 = 1;
                      v41 = 1;
                    }
                  }
                  ++v42;
                  v40 = v44;
                  --v43;
                }
                while ( v43 );
                v47 = v62;
                LODWORD(v37) = 0;
                if ( v41 )
                {
LABEL_53:
                  v63 = 0;
                  v48 = &v10[(unsigned int)(2 * v6)];
                  pvar[0] = v48;
                  v49 = (int *)v76 + 1;
                  while ( 1 )
                  {
                    memcpy(v48, &v10[v6], v6);
                    v50 = *(v49 - 1);
                    v51 = v64;
                    LODWORD(v37) = 0;
                    v52 = 0;
                    if ( !(_DWORD)v6 )
                      goto LABEL_83;
                    v53 = (_BYTE *)pvar[0];
                    v54 = v6;
                    do
                    {
                      v55 = (unsigned int *)((char *)v51 + *v51);
                      if ( *v53 != (_BYTE)v37 )
                      {
                        v56 = 0x10000073647561LL - *((_QWORD *)v51 + 2);
                        if ( *((_QWORD *)v51 + 2) == 0x10000073647561LL )
                          v56 = 0x719B3800AA000080LL - *((_QWORD *)v51 + 3);
                        if ( v56 )
                          goto LABEL_66;
                        v37 = 0x10000000000001LL - *((_QWORD *)v51 + 4);
                        if ( *((_QWORD *)v51 + 4) == 0x10000000000001LL )
                          v37 = 0x719B3800AA000080LL - *((_QWORD *)v51 + 5);
                        if ( v37 || v50 < v51[17] || v50 > v51[18] )
                        {
LABEL_66:
                          LODWORD(v37) = 0;
                          *v53 = 0;
                        }
                        else
                        {
                          *v53 = 1;
                          v52 = 1;
                        }
                      }
                      ++v53;
                      v51 = v55;
                      --v54;
                    }
                    while ( v54 );
                    if ( v52 )
                    {
LABEL_83:
                      v57 = *(_DWORD *)(*(__int64 *)((char *)&v80 + v68) + 4 * v25);
                      v58 = *v49;
                      if ( !v57 && i <= 2 )
                        v57 = 4 - (i != 1);
                      v72.m256i_i16[1] = v50;
                      v72.m256i_i32[1] = v57;
                      *(_OWORD *)&v72.m256i_u64[1] = xmmword_18015B710;
                      LOWORD(v71) = -2;
                      HIWORD(v71) = v58;
                      v72.m256i_i16[0] = 22;
                      WORD1(v71) = i;
                      DWORD1(v71) = *(_DWORD *)pv;
                      WORD6(v71) = i * ((unsigned __int16)v58 >> 3);
                      DWORD2(v71) = DWORD1(v71) * WORD6(v71);
                      v9 = sub_180119B6C(v61, &v71, 0LL);
                      LODWORD(v37) = 0;
                      if ( v9 < 0 )
                        goto LABEL_80;
                    }
                    ++v63;
                    v49 += 2;
                    v48 = (char *)pvar[0];
                    if ( v63 >= 5 )
                    {
                      v47 = v62;
                      break;
                    }
                  }
                }
                v62 = v47 + 1;
                pv = (char *)pv + 4;
                v38 = &v10[v6];
              }
              while ( (unsigned int)(v47 + 1) < 0xE );
              ++v25;
              v38 = &v10[v6];
              if ( v25 < v28 )
                continue;
              break;
            }
            v26 = v66[1];
          }
          v25 = 0LL;
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_80:
  PropVariantClear((PROPVARIANT *)&pvar[1]);
  sub_18006A148(v10);
  return (unsigned int)v9;
}
