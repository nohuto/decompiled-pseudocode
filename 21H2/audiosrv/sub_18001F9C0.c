/*
 * XREFs of sub_18001F9C0 @ 0x18001F9C0
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_180048308 @ 0x180048308 (sub_180048308.c)
 * Callees:
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_180117D48 @ 0x180117D48 (sub_180117D48.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 *     sub_18011E3D4 @ 0x18011E3D4 (sub_18011E3D4.c)
 *     sub_18011E410 @ 0x18011E410 (sub_18011E410.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001F9C0(__int64 a1, char a2, unsigned __int8 a3, unsigned int a4, __int128 *a5, LPVOID *a6)
{
  unsigned int v6; // r12d
  unsigned __int8 v7; // r13
  __int64 v8; // r15
  LPVOID *v9; // rdi
  __int128 *v10; // rax
  int v11; // eax
  unsigned __int16 *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rbx
  unsigned __int128 v17; // xmm0
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // r10d
  int v22; // edx
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  int v26; // r9d
  __int64 v27; // rax
  __int64 i; // r8
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r15
  unsigned __int16 *v33; // rdx
  int v34; // ecx
  unsigned __int16 v35; // ax
  int v36; // r10d
  __int16 v37; // r11
  int v38; // ecx
  unsigned __int16 v39; // ax
  int v40; // r9d
  __int16 v41; // di
  __int16 v42; // dx
  int v43; // ecx
  __int16 v44; // ax
  __int64 v45; // rax
  __int64 v46; // rbx
  void *v47; // rax
  void *v48; // rdi
  int v49; // ebx
  int v50; // r11d
  int v51; // r9d
  int v52; // r10d
  int v53; // ebx
  unsigned __int16 v54; // dx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // edx
  unsigned __int16 v58; // ax
  int v59; // edx
  void *v60; // rax
  void *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r11
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // r11
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int16 v71; // r8
  unsigned __int16 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int16 v75; // r8
  unsigned __int16 v76; // r9
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rax
  void *v80; // rcx
  int v81; // eax
  __int64 v82; // rdx
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  unsigned int v87; // [rsp+58h] [rbp-A8h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+70h] [rbp-90h]
  __int64 v90; // [rsp+78h] [rbp-88h]
  LPVOID *v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+88h] [rbp-78h]
  __int128 v93; // [rsp+90h] [rbp-70h] BYREF
  __int128 v94; // [rsp+A0h] [rbp-60h]
  __int128 v95; // [rsp+B0h] [rbp-50h] BYREF
  char v96; // [rsp+C0h] [rbp-40h]
  __int128 Buf2; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v98[24]; // [rsp+E0h] [rbp-20h]
  __int128 Buf1; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v100[24]; // [rsp+108h] [rbp+8h]
  __int128 v101; // [rsp+120h] [rbp+20h] BYREF
  int v102; // [rsp+130h] [rbp+30h]
  void *retaddr; // [rsp+178h] [rbp+78h]

  v6 = a4;
  v87 = a4;
  v7 = a3;
  v8 = a1;
  v92 = a1;
  v9 = a6;
  v91 = a6;
  v85 = 0;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    pvar[0] = &pv;
    pvar[1] = 0LL;
    LOBYTE(Src) = 1;
    v93 = *a5;
    v94 = a5[1];
    v49 = sub_180117D48(a1, a3, a4, (unsigned int)&v93, (__int64)&pvar[1]);
    if ( (_BYTE)Src )
    {
      v62 = *(void **)pvar[0];
      *(_QWORD *)pvar[0] = pvar[1];
      if ( v62 )
        CoTaskMemFree(v62);
    }
    if ( v49 < 0 )
    {
      v63 = 6545LL;
LABEL_158:
      sub_18004BD84(
        retaddr,
        v63,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v49);
      goto LABEL_159;
    }
LABEL_65:
    if ( !pv )
    {
      v49 = -2147467261;
      goto LABEL_157;
    }
    v50 = *((unsigned __int16 *)pv + 1);
    if ( (_WORD)v50 )
    {
      v51 = *((_DWORD *)pv + 1);
      if ( v51 )
      {
        v52 = *((_DWORD *)pv + 2);
        if ( v52 )
        {
          v53 = *((unsigned __int16 *)pv + 6);
          if ( (_WORD)v53 )
          {
            v54 = *((_WORD *)pv + 8);
            if ( v54 <= 0x400u )
            {
              if ( ((*(_WORD *)pv - 1) & 0xFFFD) != 0 )
              {
                if ( *(_WORD *)pv != 0xFFFE )
                {
LABEL_85:
                  v60 = 0LL;
                  *v9 = pv;
                  v49 = 0;
                  goto LABEL_86;
                }
                if ( v54 < 0x16u )
                  goto LABEL_89;
                v55 = 0x10000000000001LL - *((_QWORD *)pv + 3);
                if ( *((_QWORD *)pv + 3) == 0x10000000000001LL )
                  v55 = 0x719B3800AA000080LL - *((_QWORD *)pv + 4);
                if ( v55 )
                {
                  v82 = 0x10000000000003LL - *((_QWORD *)pv + 3);
                  if ( *((_QWORD *)pv + 3) == 0x10000000000003LL )
                    v82 = 0x719B3800AA000080LL - *((_QWORD *)pv + 4);
                  if ( v82 )
                    goto LABEL_85;
                }
                v56 = 0x10000000000001LL - *((_QWORD *)pv + 3);
                if ( !v56 )
                  v56 = 0x719B3800AA000080LL - *((_QWORD *)pv + 4);
                v57 = *((unsigned __int16 *)pv + 7);
                if ( v56 )
                {
                  if ( (((_WORD)v57 - 32) & 0xFFDF) == 0 )
                    goto LABEL_81;
                }
                else if ( (((_WORD)v57 - 8) & 0xFFE7) == 0 )
                {
LABEL_81:
                  v58 = *((_WORD *)pv + 9);
                  if ( v58 )
                  {
                    if ( (unsigned __int16)v57 >= v58 )
                    {
                      v59 = v50 * v57;
                      if ( v52 == (unsigned int)(v51 * v59) >> 3 && v53 == v59 / 8 )
                        goto LABEL_85;
                    }
                  }
                }
              }
              else if ( !v54
                     && (*((_WORD *)pv + 7) & 7) == 0
                     && (unsigned __int16)v50 <= 2u
                     && v52 == (v51 * (unsigned int)*((unsigned __int16 *)pv + 7) * v50) >> 3 )
              {
                goto LABEL_85;
              }
            }
          }
        }
      }
    }
LABEL_89:
    v49 = -2147024809;
LABEL_157:
    v63 = 6598LL;
    goto LABEL_158;
  }
  v10 = &xmmword_18015B780;
  if ( a4 == 3 )
    v10 = (__int128 *)&unk_18015C618;
  v101 = *v10;
  v102 = *((_DWORD *)v10 + 4);
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
          *(_QWORD *)(a1 + 40),
          &v101,
          pvar);
  if ( v11 < 0 )
  {
    sub_18006D26C(
      retaddr,
      6554LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v11);
    goto LABEL_63;
  }
  if ( !LOWORD(pvar[0]) )
    goto LABEL_63;
  if ( LOWORD(pvar[0]) != 65 )
  {
    sub_18011E410(
      retaddr,
      6583LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      13LL,
      "Unexpected vartype %d (0x%08x)",
      LOWORD(pvar[0]),
      LOWORD(pvar[0]));
    goto LABEL_63;
  }
  if ( LODWORD(pvar[1]) < 0x12
    || (v12 = (unsigned __int16 *)Src, LODWORD(pvar[1]) != *((unsigned __int16 *)Src + 8) + 18LL) )
  {
    sub_18011E3D4(retaddr, 6571LL);
LABEL_63:
    if ( !pv )
    {
      *(_QWORD *)&v95 = &pv;
      *((_QWORD *)&v95 + 1) = 0LL;
      v96 = 1;
      v93 = *a5;
      v94 = a5[1];
      v49 = sub_180117D48(v8, v7, v6, (unsigned int)&v93, (__int64)&v95 + 8);
      if ( v96 )
      {
        v80 = *(void **)v95;
        *(_QWORD *)v95 = *((_QWORD *)&v95 + 1);
        if ( v80 )
          CoTaskMemFree(v80);
      }
      if ( v49 < 0 )
      {
        v77 = (unsigned int)v49;
        v78 = 6590LL;
        goto LABEL_155;
      }
      v81 = sub_18004C264(v8, v7, v6, pv);
      v49 = v81;
      if ( v81 < 0 )
      {
        v77 = (unsigned int)v81;
        v78 = 6593LL;
        goto LABEL_155;
      }
    }
    PropVariantClear(pvar);
    goto LABEL_65;
  }
  v13 = *((int *)a5 + 2);
  v14 = *(_QWORD *)a5;
  v15 = 224LL;
  if ( (_DWORD)v13 == 3 )
    v15 = 232LL;
  v16 = (__int64 *)(v14 + v15);
  v17 = *(__int128 *)((char *)a5 + 12);
  v95 = v17;
  v18 = v13;
  v19 = v14 + 1720;
  if ( v13 >= *(_QWORD *)(v14 + 1720) )
  {
    v79 = sub_180118A38(&v93, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    v85 = 1;
    sub_180118968(v79);
  }
  v20 = *(_QWORD *)(v14 + 1728);
  v21 = 0;
  v22 = *(_DWORD *)(v20 + 24 * v18 + 16);
  if ( v22 > 0 )
  {
    v64 = *(_QWORD *)(v20 + 24 * v18);
    while ( 1 )
    {
      v65 = *(_QWORD *)(v64 + 16LL * v21) - v95;
      if ( !v65 )
        v65 = *(_QWORD *)(v64 + 16LL * v21 + 8) - *((_QWORD *)&v95 + 1);
      if ( !v65 )
        break;
      if ( ++v21 >= v22 )
        goto LABEL_13;
    }
    if ( v21 != -1 )
    {
      v95 = v17;
      v66 = sub_18004B060(v19, v18);
      v67 = sub_18011B780(v66, &v95);
      if ( v67 == -1 )
      {
        v17 = xmmword_18015B730;
      }
      else
      {
        if ( v67 < 0 || v67 >= *(_DWORD *)(v68 + 16) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v17 = *(_OWORD *)(*(_QWORD *)(v68 + 8) + 16LL * v67);
      }
    }
  }
LABEL_13:
  v95 = v17;
  v24 = v17 >> 64;
  v25 = v17;
  v23 = v17;
  if ( !(_QWORD)v17 )
    v23 = *((_QWORD *)&v17 + 1);
  if ( !v23 )
  {
    v95 = xmmword_18015B798;
    v24 = 0xCF56A961137EA8A1uLL;
    v25 = 0x4FD1B4939E90EA20LL;
  }
  v26 = 0;
  v85 = 0;
  v27 = *v16;
  *(_QWORD *)&v95 = *v16;
  for ( i = 0LL; ; i += 8LL )
  {
    v90 = i;
    if ( v26 >= *(_DWORD *)(v27 + 8) )
      goto LABEL_62;
    if ( i < 0 )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v29 = *(_QWORD *)(i + *(_QWORD *)v27);
    v30 = *(_QWORD *)v29 - v25;
    if ( *(_QWORD *)v29 == v25 )
      v30 = *(_QWORD *)(v29 + 8) - v24;
    if ( !v30 )
    {
      v31 = 0;
      v86 = 0;
      if ( *(int *)(v29 + 24) > 0 )
        break;
    }
LABEL_132:
    v85 = ++v26;
    v27 = v95;
  }
  v32 = 0LL;
  while ( 1 )
  {
    if ( v32 < 0 || v31 >= *(_DWORD *)(v29 + 24) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v33 = **(unsigned __int16 ***)(v32 + *(_QWORD *)(v29 + 16));
    if ( !v12 )
    {
      if ( !v33 )
        goto LABEL_59;
      goto LABEL_130;
    }
    if ( !v33 )
      goto LABEL_130;
    v34 = *v12;
    v35 = v12[8];
    if ( (_WORD)v34 == 0xFFFE )
    {
      if ( v35 != 22 )
      {
        v69 = *((_QWORD *)v12 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)v12 + 3) == 0x10000000000003LL )
          v69 = *((_QWORD *)v12 + 4) - 0x719B3800AA000080LL;
        if ( v69 )
        {
          v70 = *((_QWORD *)v12 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)v12 + 3) == 0x10000000000001LL )
            v70 = *((_QWORD *)v12 + 4) - 0x719B3800AA000080LL;
          if ( v70 )
            goto LABEL_130;
        }
      }
      Buf1 = *(_OWORD *)v12;
      *(_OWORD *)v100 = *((_OWORD *)v12 + 1);
      *(_QWORD *)&v100[16] = *((_QWORD *)v12 + 4);
      *(_WORD *)v100 = 22;
      v36 = *(_DWORD *)&v100[4];
      v37 = Buf1;
    }
    else
    {
      if ( v35 && (((_WORD)v34 - 1) & 0xFFFD) != 0 )
        goto LABEL_130;
      v71 = v12[1];
      if ( (unsigned __int16)(v71 - 1) > 1u )
        goto LABEL_130;
      v72 = v12[7];
      if ( ((v72 - 8) & 0xFFE7) != 0 )
        goto LABEL_130;
      Buf1 = *(_OWORD *)v12;
      v37 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v100 = 22;
      *(_WORD *)&v100[2] = v72;
      *(_OWORD *)&v100[8] = xmmword_18015B740;
      *(_DWORD *)&v100[8] = v34;
      v36 = (v71 == 1) + 3;
      *(_DWORD *)&v100[4] = v36;
    }
    v38 = *v33;
    v39 = v33[8];
    if ( (_WORD)v38 == 0xFFFE )
      break;
    if ( !v39 || (((_WORD)v38 - 1) & 0xFFFD) == 0 )
    {
      v75 = v33[1];
      if ( (unsigned __int16)(v75 - 1) <= 1u )
      {
        v76 = v33[7];
        v41 = -2;
        if ( ((v76 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v33;
          LOWORD(Buf2) = -2;
          *(_WORD *)v98 = 22;
          *(_WORD *)&v98[2] = v76;
          *(_OWORD *)&v98[8] = xmmword_18015B740;
          *(_DWORD *)&v98[8] = v38;
          v40 = (v75 == 1) + 3;
          *(_DWORD *)&v98[4] = v40;
          goto LABEL_35;
        }
      }
    }
LABEL_130:
    v31 = v86 + 1;
    v86 = v31;
    v32 += 8LL;
    if ( v31 >= *(_DWORD *)(v29 + 24) )
    {
      i = v90;
      v26 = v85;
      goto LABEL_132;
    }
  }
  if ( v39 != 22 )
  {
    v73 = *((_QWORD *)v33 + 3) - 0x10000000000003LL;
    if ( *((_QWORD *)v33 + 3) == 0x10000000000003LL )
      v73 = *((_QWORD *)v33 + 4) - 0x719B3800AA000080LL;
    if ( v73 )
    {
      v74 = *((_QWORD *)v33 + 3) - 0x10000000000001LL;
      if ( *((_QWORD *)v33 + 3) == 0x10000000000001LL )
        v74 = *((_QWORD *)v33 + 4) - 0x719B3800AA000080LL;
      if ( v74 )
        goto LABEL_130;
    }
  }
  Buf2 = *(_OWORD *)v33;
  *(_OWORD *)v98 = *((_OWORD *)v33 + 1);
  *(_QWORD *)&v98[16] = *((_QWORD *)v33 + 4);
  *(_WORD *)v98 = 22;
  v40 = *(_DWORD *)&v98[4];
  v41 = Buf2;
LABEL_35:
  if ( WORD1(Buf1) )
  {
    v42 = WORD1(Buf2);
  }
  else
  {
    v42 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v43 = DWORD1(Buf2);
  }
  else
  {
    v43 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v44 = HIWORD(Buf2);
  }
  else
  {
    v44 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v36 )
  {
    v40 = 0;
    *(_DWORD *)&v98[4] = 0;
  }
  if ( !v37 )
  {
    v41 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v42 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v43 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v44 )
    HIDWORD(Buf1) = 0;
  if ( !v40 )
    *(_DWORD *)&v100[4] = 0;
  if ( !v41 )
    LOWORD(Buf1) = 0;
  v45 = *(_QWORD *)&v100[8] - *(_QWORD *)&v98[8];
  if ( *(_QWORD *)&v100[8] == *(_QWORD *)&v98[8] )
    v45 = *(_QWORD *)&v100[16] - *(_QWORD *)&v98[16];
  if ( v45 || memcmp(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_130;
LABEL_59:
  v46 = v12[8];
  v47 = CoTaskMemAlloc(v46 + 18);
  v48 = v47;
  if ( v47 )
  {
    memcpy(v47, v12, v46 + 18);
    v49 = 0;
  }
  else
  {
    v49 = -2147024882;
  }
  pv = v48;
  if ( v49 >= 0 )
  {
LABEL_62:
    v7 = a3;
    v6 = v87;
    v8 = v92;
    v9 = v91;
    goto LABEL_63;
  }
  v77 = (unsigned int)v49;
  v78 = 6566LL;
LABEL_155:
  sub_18004BD84(retaddr, v78, "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp", v77);
  PropVariantClear(pvar);
LABEL_159:
  v60 = pv;
LABEL_86:
  pv = 0LL;
  if ( v60 )
    CoTaskMemFree(v60);
  return (unsigned int)v49;
}
