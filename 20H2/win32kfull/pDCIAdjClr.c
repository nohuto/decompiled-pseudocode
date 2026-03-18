/*
 * XREFs of pDCIAdjClr @ 0x1C006EC28
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C006D4A4 (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C0100710 (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C0260D58 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x1C006F5A8 (AdjustSrcDevGamma.c)
 *     DivFD6 @ 0x1C006F7F4 (DivFD6.c)
 *     RaisePower @ 0x1C0072790 (RaisePower.c)
 *     Log @ 0x1C00729C4 (Log.c)
 *     ComputeColorSpaceXForm @ 0x1C0112CA4 (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1C011F21C (CompareMemory.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C0261F84 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C02621BC (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, char **a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  char *v12; // r13
  int v13; // r12d
  __int16 v14; // r8
  __int16 v15; // dx
  __int16 v16; // r14
  __m128i v17; // xmm1
  __int64 v18; // xmm0_8
  int v19; // ebx
  __int8 v20; // r8d^2
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // ecx
  int v37; // r9d
  __int16 v38; // cx
  char v39; // si
  int v40; // eax
  __m128i v41; // xmm2
  __int64 v42; // rdx
  __int8 v43; // cl
  char v44; // al
  unsigned int v45; // ebx
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  __int64 v49; // r9
  int v50; // eax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  int v63; // eax
  int v65; // ebx
  char v66; // r12
  unsigned __int64 v67; // r12
  unsigned __int16 epi16; // ax
  unsigned int v69; // ebx
  int v70; // r13d
  __int64 v71; // rdx
  int v72; // r12d
  int v73; // ecx
  unsigned int v74; // ecx
  __int64 v75; // xmm0_8
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  int v89; // eax
  unsigned int *v90; // r8
  unsigned int i; // ecx
  unsigned int v92; // eax
  int v93; // ebx
  char v94; // r8
  unsigned __int8 v95; // r9
  char v96; // dl
  char *v97; // rcx
  __int64 v98; // rax
  char v99; // al
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  char v103; // al
  __int16 v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+30h] [rbp-D0h]
  __int128 v106; // [rsp+38h] [rbp-C8h]
  __int128 v107; // [rsp+48h] [rbp-B8h]
  __int16 v108; // [rsp+58h] [rbp-A8h]
  char *v109; // [rsp+60h] [rbp-A0h]
  __int128 v110; // [rsp+70h] [rbp-90h] BYREF
  __int128 v111; // [rsp+80h] [rbp-80h]
  __int128 v112; // [rsp+90h] [rbp-70h] BYREF
  __m256i v113; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v114; // [rsp+C0h] [rbp-40h]
  __int128 v115; // [rsp+D0h] [rbp-30h]
  __int128 v116; // [rsp+E0h] [rbp-20h]
  __int128 v117; // [rsp+F0h] [rbp-10h]
  __int128 v118; // [rsp+100h] [rbp+0h] BYREF
  __int128 v119; // [rsp+110h] [rbp+10h]
  __int128 v120; // [rsp+120h] [rbp+20h]
  __int128 v121; // [rsp+130h] [rbp+30h]
  __int128 v122; // [rsp+140h] [rbp+40h]
  int v123; // [rsp+150h] [rbp+50h]
  __int128 v124; // [rsp+160h] [rbp+60h] BYREF
  __int64 v125; // [rsp+170h] [rbp+70h]
  __int128 v126; // [rsp+178h] [rbp+78h]
  __int64 v127; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v90 = (unsigned int *)&unk_1C0333434;
      for ( i = 1; i < 0x100; ++i )
      {
        v92 = (i - 16777217) / i;
        *v90++ = v92;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v109 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v109;
      v12 = v109;
      if ( v109 )
      {
        v13 = *(_DWORD *)(v11 + 184);
        DWORD1(v106) = a6;
        v14 = a5 | 8;
        v104 = v13;
        if ( (v13 & 0x80u) == 0 )
          v14 = a5;
        if ( HIBYTE(a6) == 1 || (v15 = v14, HIBYTE(a6) == 0xFE) && (*(_DWORD *)(v11 + 184) & 0x300) == 0x300 )
          v15 = v14 | 0x41;
        v108 = v15 & 0x10;
        v16 = v15 & 0xFFEF;
        if ( (v15 & 8) == 0 )
          v16 = v15;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v17 = *a2;
        v18 = a2[1].m128i_i64[0];
        v19 = 24;
        v124 = (__int128)v17;
        v125 = v18;
        if ( (unsigned __int16)_mm_cvtsi128_si32(v17) != 24 || (v20 = BYTE2(v124), (WORD1(v124) & 0xFFFC) != 0) )
        {
          v124 = DefaultCA;
          v20 = BYTE2(DefaultCA);
          v125 = 0LL;
        }
        v21 = *(_QWORD *)(v11 + 212);
        v126 = *(_OWORD *)(v11 + 196);
        v22 = *(_OWORD *)(v11 + 220);
        v127 = v21;
        v23 = *(_OWORD *)(v11 + 236);
        WORD1(v124) = v20 & 3;
        v110 = v22;
        v24 = *(_OWORD *)(v11 + 252);
        v111 = v23;
        v25 = *(_OWORD *)(v11 + 268);
        v112 = v24;
        v26 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v113.m256i_i8 = v25;
        v27 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v113.m256i_u64[2] = v26;
        v28 = *(_OWORD *)(v11 + 316);
        v114 = v27;
        v29 = *(_OWORD *)(v11 + 332);
        v115 = v28;
        v30 = *(_OWORD *)(v11 + 348);
        v116 = v29;
        v31 = *(_OWORD *)(v11 + 364);
        v117 = v30;
        v32 = *(_OWORD *)(v11 + 380);
        v118 = v31;
        v33 = *(_OWORD *)(v11 + 396);
        v119 = v32;
        v34 = *(_OWORD *)(v11 + 412);
        v120 = v33;
        v35 = *(_OWORD *)(v11 + 428);
        v36 = *(_DWORD *)(v11 + 444);
        v121 = v34;
        v122 = v35;
        v123 = v36;
        if ( WORD2(v124) > 8u )
          WORD2(v124) = 0;
        if ( WORD3(v124) < 0x540u )
        {
          WORD3(v124) = 1344;
        }
        else if ( WORD3(v124) > 0xFDE8u )
        {
          WORD3(v124) = -536;
        }
        if ( WORD4(v124) < 0x540u )
        {
          WORD4(v124) = 1344;
        }
        else if ( WORD4(v124) > 0xFDE8u )
        {
          WORD4(v124) = -536;
        }
        if ( WORD5(v124) < 0x540u )
        {
          WORD5(v124) = 1344;
        }
        else if ( WORD5(v124) > 0xFDE8u )
        {
          WORD5(v124) = -536;
        }
        if ( WORD6(v124) > 0xFA0u )
          WORD6(v124) = 4000;
        if ( HIWORD(v124) < 0x1770u )
        {
          HIWORD(v124) = 6000;
        }
        else if ( HIWORD(v124) > 0x2710u )
        {
          HIWORD(v124) = 10000;
        }
        v37 = 100;
        if ( (__int16)v125 < -100 )
        {
          LOWORD(v125) = -100;
        }
        else if ( (__int16)v125 > 100 )
        {
          LOWORD(v125) = 100;
        }
        if ( SWORD1(v125) < -100 )
        {
          WORD1(v125) = -100;
        }
        else if ( SWORD1(v125) > 100 )
        {
          WORD1(v125) = 100;
        }
        v38 = WORD2(v125);
        if ( SWORD2(v125) < -100 )
        {
          v38 = -100;
          WORD2(v125) = -100;
        }
        else if ( SWORD2(v125) > 100 )
        {
          v38 = 100;
          WORD2(v125) = 100;
        }
        if ( SHIWORD(v125) < -100 )
        {
          HIWORD(v125) = -100;
        }
        else if ( SHIWORD(v125) > 100 )
        {
          HIWORD(v125) = 100;
        }
        if ( (v16 & 1) != 0 || v38 == -100 )
          HIDWORD(v125) = 65436;
        v39 = 2;
        if ( (v16 & 2) != 0 )
          WORD1(v124) = v20 & 2 | 1;
        LOBYTE(v37) = HIBYTE(a6);
        LOWORD(v124) = v16 & 0x8059;
        v40 = AdjustSrcDevGamma(v11, (unsigned int)&v110, (unsigned int)&v124, v37, v16);
        v41 = (__m128i)v124;
        if ( !v40 )
        {
          v42 = 0LL;
          while ( 1 )
          {
            v43 = *((_BYTE *)&v124 + v42);
            --v19;
            v44 = *((_BYTE *)&v126 + v42++);
            if ( v43 != v44 )
              break;
            if ( !v19 )
            {
              v45 = v110;
              goto LABEL_54;
            }
          }
        }
        v65 = v110 & 0x1007;
        LODWORD(v110) = v65;
        if ( (v16 & 0x40) != 0 )
        {
          v65 |= 0x2000u;
          LODWORD(v110) = v65;
        }
        v66 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v124, 2));
        if ( (v66 & 2) != 0 )
        {
          if ( !LogFilterMax )
            LogFilterMax = Log(8000000LL);
          v65 |= 0x100u;
          LODWORD(v110) = v65;
        }
        if ( (v66 & 1) != 0 )
        {
          v65 |= 0x200u;
          LODWORD(v110) = v65;
        }
        v67 = (-(__int64)((v65 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v41) ^ (unsigned __int16)v126) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            (-(__int64)((v65 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72,
            (char *)&v118 + 4,
            0xFFFFFFFFLL);
          v65 = v110;
        }
        epi16 = _mm_extract_epi16(v41, 2);
        if ( epi16 != WORD2(v126) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v113.m256i_u64[2] + 4, epi16);
          v65 = v110;
        }
        if ( (v65 & 0x2000) != 0 || (unsigned int)CompareMemory(v67, v11 + 36, 36LL) )
          v69 = v65 & 0xFFFF7FFF;
        else
          v69 = v65 | 0x8000;
        v70 = (unsigned __int16)_mm_extract_epi16(v41, 6);
        v71 = (unsigned int)(100 * v70);
        v72 = (unsigned __int16)_mm_extract_epi16(v41, 7);
        v113.m256i_i32[0] = 100 * v70;
        v113.m256i_i32[1] = 100 * v72;
        if ( v70 || 100 * v72 != 1000000 )
        {
          v45 = v69 | 8;
          LODWORD(v110) = v45;
          v113.m256i_i32[2] = DivFD6(0LL, v71);
          v113.m256i_i32[3] = DivFD6(0LL, (unsigned int)(100 * (10000 - v72)));
          v113.m256i_i32[4] = DivFD6(1000000LL, (unsigned int)(100 * (v72 - v70)));
        }
        else
        {
          v45 = v69 & 0xFFFFFFF7;
          v113.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v113.m256i_i64[1] + 4) = 0LL;
          LODWORD(v110) = v45;
          *(__int64 *)((char *)v113.m256i_i64 + 4) = 1000000LL;
        }
        if ( (_WORD)v125 )
        {
          v45 |= 0x10u;
          HIDWORD(v111) = RaisePower(1015000LL, (unsigned int)(__int16)v125, 2LL);
          LODWORD(v110) = v45;
        }
        if ( WORD1(v125) )
        {
          v45 |= 0x20u;
          LODWORD(v110) = v45;
          LODWORD(v112) = 3750 * SWORD1(v125);
        }
        if ( (v45 & 0x2000) != 0 )
        {
          LOWORD(v13) = v104;
        }
        else
        {
          v73 = 10000 * SWORD2(v125);
          DWORD1(v112) = v73 + 1000000;
          if ( v73 )
          {
            v45 |= 0x40u;
            LODWORD(v110) = v45;
          }
          if ( HIWORD(v125) )
          {
            TintAngle((unsigned int)SHIWORD(v125), v71, (char *)&v112 + 8, (char *)&v112 + 12);
            v45 = v110 | 0x80;
            LODWORD(v110) = v110 | 0x80;
          }
          LOWORD(v13) = v104;
          v74 = v45;
          if ( (v104 & 4) != 0 && (v45 & 0x1001) == 0x1000 )
          {
            v45 |= 0x400u;
            LODWORD(v110) = v45;
            if ( (v104 & 1) != 0 )
            {
              v45 = v74 | 0xC00;
              LODWORD(v110) = v74 | 0xC00;
            }
          }
        }
        v75 = v125;
        v76 = v111;
        v12 = v109;
        *(__m128i *)(v11 + 196) = v41;
        *(_QWORD *)(v11 + 212) = v75;
        *(_OWORD *)(v11 + 220) = v110;
        v77 = v112;
        *(_OWORD *)(v11 + 236) = v76;
        v78 = *(_OWORD *)v113.m256i_i8;
        *(_OWORD *)(v11 + 252) = v77;
        v79 = *(_OWORD *)&v113.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v78;
        v80 = v114;
        *(_OWORD *)(v11 + 284) = v79;
        v81 = v115;
        *(_OWORD *)(v11 + 300) = v80;
        v82 = v116;
        *(_OWORD *)(v11 + 316) = v81;
        v83 = v117;
        *(_OWORD *)(v11 + 332) = v82;
        v84 = v118;
        *(_OWORD *)(v11 + 348) = v83;
        v85 = v119;
        *(_OWORD *)(v11 + 364) = v84;
        v86 = v120;
        *(_OWORD *)(v11 + 380) = v85;
        v87 = v121;
        *(_OWORD *)(v11 + 396) = v86;
        v88 = v122;
        v89 = v123;
        *(_OWORD *)(v11 + 412) = v87;
        *(_OWORD *)(v11 + 428) = v88;
        *(_DWORD *)(v11 + 444) = v89;
LABEL_54:
        v46 = v45 & 0x3DB4BFFF;
        LODWORD(v110) = v46;
        if ( (v46 & 0x97FE) == 0 )
        {
          v46 |= 0x80000000;
          LODWORD(v110) = v46;
        }
        if ( (v46 & 0x84C0) == 0 || (v46 & 0x2000) != 0 )
        {
          v46 |= 0x40000000u;
          LODWORD(v110) = v46;
        }
        if ( (v16 & 0x20) != 0 || (v13 & 0x1000) != 0 )
        {
          v46 |= 0x80000u;
          LODWORD(v110) = v46;
        }
        v47 = v46;
        if ( (v16 & 0x80u) == 0 )
        {
LABEL_61:
          if ( (v16 & 4) != 0 )
          {
            v46 |= 0x4000u;
            LODWORD(v110) = v46;
          }
          HIDWORD(v107) = 1000000;
          v127 = 0LL;
          LODWORD(v106) = 67372032;
          BYTE4(v106) = 3;
          v126 = 0LL;
          if ( (v46 & 0x2000) != 0 )
          {
            v46 |= 0x40000u;
            LOBYTE(v106) = 1;
            LODWORD(v110) = v46;
            v48 = 0xFFFF;
            DWORD1(v107) = 0;
          }
          else
          {
            DWORD1(v107) = 4096;
            v48 = 4095;
          }
          DWORD2(v106) = v48;
          HIDWORD(v106) = v48;
          LODWORD(v107) = v48;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v106) = 0;
              goto LABEL_69;
            case 2u:
LABEL_140:
              LODWORD(v126) = 0x100000;
              *(_QWORD *)((char *)&v126 + 4) = 0x40000000200000LL;
              HIDWORD(v126) = 0x10000;
              v127 = 0x4000000020000LL;
              WORD1(v106) = 1541;
              DWORD1(v107) = 0;
              goto LABEL_69;
            case 5u:
            case 6u:
              WORD1(v106) = 0;
              *(_QWORD *)&v107 = 255LL;
              BYTE1(v106) = 0;
              *((_QWORD *)&v106 + 1) = 0xFF000000FFLL;
              *(_QWORD *)((char *)&v126 + 4) = 0x200000001LL;
              goto LABEL_69;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v103 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v103 = 0;
                BYTE6(v106) = v103;
              }
              LODWORD(v107) = 126975;
              *((_QWORD *)&v106 + 1) = 0x3EFFF0001EFFFLL;
              v127 = -1LL;
              *(_QWORD *)&v126 = 0x7E00000001F0000LL;
              *((_QWORD *)&v126 + 1) = -134217728LL;
              WORD1(v106) = 3849;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v126 = 0x3E00000001F0000LL;
              LODWORD(v107) = 126975;
              *((_QWORD *)&v106 + 1) = 0x1EFFF0001EFFFLL;
              v127 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v126 + 1) = 0x7FFF7FFF7C000000LL;
              WORD1(v106) = 3593;
              goto LABEL_69;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) == 255 )
            {
              BYTE6(v106) = 4;
              LODWORD(v110) = v46 | 0x4000;
              goto LABEL_140;
            }
LABEL_69:
            *(__m128i *)v12 = v41;
            v49 = (unsigned __int8)BYTE1(DstOrderTable[BYTE6(v106)]);
            DWORD2(v107) = DstOrderTable[BYTE6(v106)];
            v50 = *((_DWORD *)&v126 + v49);
            *(_OWORD *)(v12 + 24) = v106;
            *((_QWORD *)v12 + 2) = v125;
            *(_OWORD *)(v12 + 40) = v107;
            *(_DWORD *)((-(__int64)(v108 != 0) & 0xC1C) + v11 + 868) = v50;
            *(_DWORD *)((-(__int64)(v108 != 0) & 0xC1C) + v11 + 864) = *((_DWORD *)&v126 + BYTE10(v107));
            *(_DWORD *)((-(__int64)(v108 != 0) & 0xC1C) + v11 + 860) = *((_DWORD *)&v126 + BYTE11(v107));
            *(_DWORD *)((-(__int64)(v108 != 0) & 0xC1C) + v11 + 880) = *((_DWORD *)&v126 + v49 + 3);
            *(_DWORD *)((-(__int64)(v108 != 0) & 0xC1C) + v11 + 876) = *((_DWORD *)&v126 + BYTE10(v107) + 3);
            *(_DWORD *)((-(__int64)(v108 != 0) & 0xC1C) + v11 + 872) = *((_DWORD *)&v126 + BYTE11(v107) + 3);
            v51 = v111;
            *(_OWORD *)(v12 + 56) = v110;
            v52 = v112;
            *(_OWORD *)(v12 + 72) = v51;
            v53 = *(_OWORD *)v113.m256i_i8;
            *(_OWORD *)(v12 + 88) = v52;
            v54 = *(_OWORD *)&v113.m256i_u64[2];
            *(_OWORD *)(v12 + 104) = v53;
            v55 = v114;
            *(_OWORD *)(v12 + 120) = v54;
            v56 = v115;
            *(_OWORD *)(v12 + 136) = v55;
            v57 = v116;
            *(_OWORD *)(v12 + 152) = v56;
            *(_OWORD *)(v12 + 168) = v57;
            v58 = v118;
            *(_OWORD *)(v12 + 184) = v117;
            v59 = v119;
            *(_OWORD *)(v12 + 200) = v58;
            v60 = v120;
            *(_OWORD *)(v12 + 216) = v59;
            v61 = v121;
            *(_OWORD *)(v12 + 232) = v60;
            v62 = v122;
            v63 = v123;
            *(_OWORD *)(v12 + 248) = v61;
            *(_OWORD *)(v12 + 264) = v62;
            *((_DWORD *)v12 + 70) = v63;
            *((_QWORD *)v12 + 36) = v11 + 32;
            *((_QWORD *)v12 + 37) = v11 + 808;
            *((_QWORD *)v12 + 38) = v11 + 832;
            return v11;
          }
          if ( (v13 & 0x100) == 0 )
          {
            *(_QWORD *)&v126 = 0x38000000070000LL;
            LODWORD(v107) = 20479;
            *((_QWORD *)&v106 + 1) = 0x4FFF00004FFFLL;
            LODWORD(v110) = v46 & 0xFFFEFFFF;
            DWORD2(v126) = 29360128;
            WORD1(v106) = 2567;
            BYTE6(v106) = 4;
            goto LABEL_69;
          }
          v93 = v46 | 0x10000;
          LOWORD(v105) = 0;
          LODWORD(v110) = v93;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v13 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v13 & 0x2000) != 0 )
            LOWORD(v105) = -254;
          else
            v39 = 0;
          HIBYTE(v105) = -((v13 & 0x2000) != 0);
          BYTE2(v105) = HIBYTE(v105) ^ *(_BYTE *)(v11 + 452);
          if ( (v13 & 0x200) != 0 )
          {
            WORD3(v106) = -1280;
            *(_QWORD *)((char *)&v126 + 4) = 0xFF000000FF0000LL;
            LODWORD(v126) = 16711680;
LABEL_168:
            HIDWORD(v127) = v105;
            LODWORD(v127) = v105;
            HIDWORD(v126) = v105;
            goto LABEL_69;
          }
          v94 = 7;
          v95 = *(_BYTE *)(v11 + 453);
          v96 = 10;
          WORD1(v106) = 2567;
          DWORD2(v106) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          HIDWORD(v106) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v107) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v126) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v126) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v126) = *(unsigned __int16 *)(v11 + 454);
          if ( v95 < 4u || v95 > 5u )
          {
            WORD1(v106) = 2310;
            v100 = 250;
            BYTE7(v106) = -6;
            v94 = 6;
            v96 = 9;
            if ( (v13 & 0x2000) == 0 )
            {
LABEL_160:
              if ( *(_DWORD *)(v11 + 472) )
              {
                HIDWORD(v107) = *(_DWORD *)(v11 + 472);
                LODWORD(v110) = v93 | 0x20000;
                BYTE1(v106) = 0;
                BYTE2(v106) = v94 - 4;
                BYTE3(v106) = v96 - 4;
                v101 = v100 - 248;
                if ( v101 )
                {
                  v102 = v101 - 1;
                  if ( v102 )
                  {
                    if ( v102 == 1 )
                      BYTE7(v106) = -9;
                  }
                  else
                  {
                    BYTE7(v106) = -10;
                  }
                }
                else
                {
                  BYTE7(v106) = -11;
                }
              }
              BYTE6(v106) = 0;
              goto LABEL_168;
            }
            v93 |= 0x2000000u;
            BYTE2(v105) = *(_BYTE *)(v11 + 803);
            v99 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v95 == 4 )
            {
              BYTE7(v106) = -7;
            }
            else
            {
              BYTE7(v106) = -8;
              v39 |= 1u;
            }
            v93 |= 0x400000u;
            LOBYTE(v105) = v39 & 3;
            v97 = (char *)*(&p8BPPXlate + (v39 & 3));
            v98 = 292LL;
            if ( v95 != 4 )
              v98 = 365LL;
            BYTE2(v105) = v97[v98];
            v99 = *v97;
            v100 = 249 - (v95 != 4);
          }
          HIBYTE(v105) = v99;
          LODWORD(v110) = v93;
          goto LABEL_160;
        }
        v46 |= 0x100000u;
        LODWORD(v110) = v46;
        if ( (v16 & 0x100) != 0 )
        {
          v46 = v47 | 0x300000;
        }
        else
        {
          if ( (v16 & 0x200) != 0 )
          {
            v46 = v47 | 0x900000;
            LODWORD(v110) = v47 | 0x900000;
          }
          if ( (v16 & 0x400) == 0 )
            goto LABEL_61;
          v46 |= 0x1000000u;
        }
        LODWORD(v110) = v46;
        goto LABEL_61;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v11 + 8));
  }
  else
  {
    *a7 = -12;
  }
  return 0LL;
}
