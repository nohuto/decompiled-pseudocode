/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C00CA454
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CA064 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     RaisePower @ 0x1C00C8EB8 (RaisePower.c)
 *     GetCIEPrims @ 0x1C00CAC14 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C00CAE10 (ComputeHTCell.c)
 *     ComputeChecksum @ 0x1C00D6304 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00D6350 (MulFD6.c)
 *     DivFD6 @ 0x1C00D7050 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C0111D10 (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C0111ECC (ComputeInverseMatrix3x3.c)
 *     CleanUpDHI @ 0x1C0115EF0 (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  size_t v3; // rbx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 v6; // r11
  __int64 (*v7)(); // rax
  __int16 v8; // r15
  __int64 v9; // r13
  __int16 v10; // r15
  unsigned __int16 v11; // r14
  unsigned int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  _WORD *v15; // r10
  int v16; // r8d
  __int16 v17; // ax
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  int v22; // r8d
  int v23; // eax
  unsigned __int16 v24; // r14
  int v25; // eax
  int v26; // ebx
  __int16 v27; // si
  int v28; // eax
  __int64 v29; // r8
  int v30; // ebx
  bool v31; // cc
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  __int64 result; // rax
  int v39; // r9d
  unsigned int v40; // ecx
  int v41; // esi
  unsigned int v42; // r15d
  unsigned int v43; // r14d
  unsigned int v44; // r13d
  char v45; // al
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  signed int v48; // r13d
  int v49; // r15d
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rcx
  __int16 v55; // ax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // eax
  unsigned __int64 v60; // rdx
  unsigned int v61; // r8d
  unsigned __int16 v62; // r9
  unsigned __int16 v63; // r10
  int v64; // ecx
  int v65; // eax
  int v66; // r13d
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int v70; // ebx
  int v71; // eax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rbx
  int v75; // eax
  unsigned int v76; // ebx
  unsigned int v77; // edx
  char v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+28h] [rbp-D8h]
  int v80; // [rsp+3Ch] [rbp-C4h]
  int v81; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v82; // [rsp+58h] [rbp-A8h]
  _QWORD v84[12]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v85[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v86; // [rsp+E0h] [rbp-20h]
  int v87; // [rsp+E4h] [rbp-1Ch]
  _DWORD v88[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v89; // [rsp+F0h] [rbp-10h]
  int v90; // [rsp+F4h] [rbp-Ch]
  int v91; // [rsp+F8h] [rbp-8h]
  int v92; // [rsp+FCh] [rbp-4h]
  int v93; // [rsp+100h] [rbp+0h]
  int v94; // [rsp+104h] [rbp+4h]
  int v95; // [rsp+108h] [rbp+8h]

  v3 = 88LL;
  memset(v84, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v84, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v6 = 0LL;
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v7 = (__int64 (*)())v84[1];
  v8 = WORD2(v84[0]);
  v9 = v84[4];
  if ( !v84[1] )
    v7 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v7;
  v10 = v8 & 0x6FF;
  WORD2(v84[0]) = v10;
  if ( v9 && *(_WORD *)(v9 + 22) == 0xFFFE )
  {
    v80 = 0;
  }
  else
  {
    v80 = 1;
    qmemcpy(v85, "THTN0002.naDuohC", sizeof(v85));
    v9 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum(v85, 305459218LL, 16LL);
  }
  v11 = v84[10];
  v12 = HIWORD(v84[6]);
  v13 = WORD2(v84[10]);
  v14 = WORD1(v84[10]);
  if ( LOWORD(v84[10]) == 0xFFFF && *(_DWORD *)((char *)&v84[10] + 2) == -1 )
  {
    v81 = 128;
LABEL_13:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v81 = v6;
  if ( (unsigned __int16)(LOWORD(v84[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v84[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v84[10]) - 100) > 0xFF78u )
  {
    goto LABEL_13;
  }
LABEL_14:
  v15 = (_WORD *)v4 + 115;
  v82 = (unsigned __int16 *)v4 + 115;
  v16 = (unsigned __int16)(8 * (v10 & 1));
  v17 = WORD1(v84[6]);
  *((_DWORD *)v4 + 56) = v16;
  *((_WORD *)v4 + 114) = v17;
  if ( !v17 || (v18 = WORD2(v84[6]), *v15 = WORD2(v84[6]), !v18) )
  {
    v82 = (unsigned __int16 *)v4 + 115;
    *v15 = 300;
    v12 = v6;
    *((_WORD *)v4 + 114) = 300;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v19 = v12 & 0x7FFF;
    if ( (unsigned int)(v19 - 333) <= 0x394B )
    {
      v20 = 1000 * v19;
      goto LABEL_19;
    }
    goto LABEL_57;
  }
  v39 = *((unsigned __int16 *)v4 + 114);
  if ( v12 > 3 * v39 || v12 > 3 * (unsigned int)(unsigned __int16)*v15 )
    v12 = v6;
  if ( !v12 )
  {
LABEL_57:
    v20 = 1000000;
    goto LABEL_19;
  }
  v57 = (unsigned __int16)*v15 * (unsigned __int16)*v15;
  v58 = 2 * v12 * v12;
  v85[1] = v58;
  v59 = DivFD6((unsigned int)(v57 + v39 * v39), v58);
  v20 = RaisePower(v59, 2LL, 3LL);
  v16 = *((_DWORD *)v4 + 56);
  v6 = 0LL;
LABEL_19:
  if ( (v10 & 4) != 0 )
  {
    *((_BYTE *)v4 + 73) = v6;
    v22 = v16 | 2;
  }
  else
  {
    v21 = (v84[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = 1;
    if ( !v21 )
    {
      v16 |= 0x400u;
      *((_DWORD *)v4 + 56) = v16;
    }
    if ( (v84[0] & 0x200000000LL) == 0 )
      goto LABEL_25;
    v22 = v16 | 1;
  }
  *((_DWORD *)v4 + 56) = v22;
LABEL_25:
  *((_DWORD *)v4 + 58) = v20;
  v23 = v11;
  v24 = HIWORD(v84[0]);
  *((_DWORD *)v4 + 46) = 100 * v23;
  v25 = v13;
  v26 = v80;
  *((_DWORD *)v4 + 47) = 100 * v14;
  *((_DWORD *)v4 + 48) = 100 * v25;
  if ( (v80 || v24 > 0x12u || v24 == 18 && v84[2] == v6) && (unsigned __int16)(v24 - 6) > 1u )
  {
    v24 = 17;
    HIWORD(v84[0]) = 17;
  }
  if ( (v10 & 4) != 0 && v24 <= 3u )
  {
    v24 = 17;
    HIWORD(v84[0]) = 17;
  }
  v27 = WORD2(v84[0]);
  v28 = BYTE4(v84[0]) & 0x70;
  switch ( v28 )
  {
    case ' ':
      v85[0] = 4;
      break;
    case '0':
      v85[0] = 2;
      break;
    case '@':
      v85[0] = 5;
      break;
    case 'P':
      v85[0] = 1;
      break;
    case '`':
      v85[0] = 6;
      break;
    default:
      v85[0] = v28 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v85[0];
  GetCIEPrims(v9, v4 + 14, 6LL);
  GetCIEPrims(v84[3], (char *)v4 + 76, v29);
  if ( (v4[28] & 4) != 0 )
  {
    v60 = 0LL;
    v61 = 0;
    if ( v84[5] )
    {
      v61 = *(_DWORD *)(v84[5] + 8LL);
      v62 = v61;
      v79 = *(_QWORD *)v84[5];
      v60 = *(_QWORD *)v84[5];
      v63 = *(_QWORD *)v84[5];
      if ( v63 > 0x2328u
        || WORD1(v79) > 0x2328u
        || WORD2(v79) > 0x2328u
        || HIWORD(v79) > 0x2328u
        || (unsigned __int16)v61 > 0x2328u
        || HIWORD(v61) > 0x2328u )
      {
        v64 = 0;
      }
      else if ( v79 || (_WORD)v61 )
      {
        v64 = 1;
      }
      else
      {
        v64 = 1;
        if ( !HIWORD(v61) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
      v65 = *((_DWORD *)v4 + 56);
      v26 = v80;
    }
    else
    {
      v62 = 0;
      v65 = v4[28] & 0xFFFB;
      v63 = 0;
      v64 = 0;
      *((_DWORD *)v4 + 56) = v65;
    }
    if ( (v65 & 4) != 0 )
    {
      if ( v26 || !v64 )
      {
        v61 = 13762880;
        v62 = 320;
        v63 = DefaultSolidDyesInfo;
        v60 = DefaultSolidDyesInfo;
      }
      v88[1] = 100 * WORD2(v60);
      v89 = 100 * v62;
      v90 = 100 * v63;
      v92 = 100 * HIWORD(v61);
      v93 = 100 * WORD1(v60);
      v94 = 100 * HIWORD(v60);
      v95 = 1000000;
      v91 = 1000000;
      v88[0] = 1000000;
      ComputeInverseMatrix3x3(v88, (char *)v4 + 148);
      v66 = *((_DWORD *)v4 + 56);
      if ( (v66 & 1) == 0 )
      {
        v89 = *((_DWORD *)v4 + 37);
        v91 = *((_DWORD *)v4 + 38);
        v93 = *((_DWORD *)v4 + 39);
        v88[0] = 3;
        v90 = 1000000;
        v92 = 1000000;
        v94 = 1000000;
        v67 = MulDivFD6Pairs(v88);
        v68 = 1000000 - MulFD6((unsigned int)(1000000 - v67), *((unsigned int *)v4 + 114));
        v89 = *((_DWORD *)v4 + 40);
        v91 = *((_DWORD *)v4 + 41);
        v93 = *((_DWORD *)v4 + 42);
        v69 = MulDivFD6Pairs(v88);
        v70 = v68 - MulFD6((unsigned int)(1000000 - v69), *((unsigned int *)v4 + 115));
        v89 = *((_DWORD *)v4 + 43);
        v91 = *((_DWORD *)v4 + 44);
        v93 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v66 | 1;
        v71 = MulDivFD6Pairs(v88);
        v72 = MulFD6((unsigned int)(1000000 - v71), *((unsigned int *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((unsigned int *)v4 + 36), (unsigned int)(v70 - v72));
      }
    }
  }
  v30 = ComputeHTCell(v24, v84[2], v4 + 5);
  if ( v30 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v30;
  }
  else
  {
    v31 = WORD2(v84[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v31 && LOWORD(v84[7]) == 24 && (*(_DWORD *)((char *)&v84[7] + 6) != 655370000 || WORD1(v84[8]) != 10000) )
    {
      v32 = *(_OWORD *)&v84[7];
      v33 = v84[9];
    }
    else
    {
      v32 = DefaultCA;
      v33 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v32;
    *(_QWORD *)((char *)v4 + 28) = v33;
    v34 = *((_DWORD *)v4 + 56);
    if ( (v10 & 0x204) == 0x200 )
    {
      v34 |= 0x1000u;
      *((_DWORD *)v4 + 56) = v34;
    }
    if ( (v84[0] & 0x800000000LL) != 0 )
    {
      v40 = BYTE6(v84[10]);
      v78 = BYTE6(v84[10]);
      v41 = v34 | (8 * (v27 & 0x400 | 0x20));
      v42 = (BYTE6(v84[10]) >> 2) & 7;
      *((_DWORD *)v4 + 56) = v41;
      v85[2] = v42;
      v43 = v40 & 3;
      v44 = v40 >> 5;
      v85[1] = v40 >> 5;
      v85[3] = v43;
      if ( (_BYTE)v40 == 1 )
      {
        v78 = 124;
        v43 = 4;
        v85[3] = 4;
        v42 = 4;
        v85[2] = 4;
        v44 = 4;
        v85[1] = 4;
      }
      else if ( (_BYTE)v40 == 2 )
      {
        v78 = -41;
        v43 = 5;
        v85[3] = 5;
        v42 = 5;
        v85[2] = 5;
        v44 = 5;
        v85[1] = 5;
      }
      else if ( !v44 || !v42 || (v40 & 3) == 0 )
      {
        v41 |= 0x200u;
        v85[3] = 255;
        *((_DWORD *)v4 + 56) = v41;
        v43 = 255;
        v42 = 255;
        v85[2] = 255;
        v44 = 255;
        v85[1] = 255;
        v78 = -1;
      }
      *((_BYTE *)v4 + 844) = (v41 & 0x2000) != 0;
      if ( v44 == v42 && v44 == v43 )
      {
        v45 = v85[1];
        v41 |= 0x800u;
        *((_DWORD *)v4 + 56) = v41;
        *((_BYTE *)v4 + 493) = v45;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v46 = v44;
      if ( v44 < v42 )
        v46 = v42;
      if ( v46 < v43 )
        v46 = v43;
      v86 = v46;
      if ( v46 <= 6 && (v73 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v73 + 16) == 0xFFFE )
      {
        v74 = *((_QWORD *)Src + 4);
        *((_DWORD *)v4 + 56) = v41 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 19) + 1, 256LL);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 18) + 1, 256LL);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 21) + 1, 256LL);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 20) + 1, 256LL);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 5) + 1, 256LL);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 4) + 1, 256LL);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 25) + 1, 256LL);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 24) + 1, 256LL);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 27) + 1, 256LL);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 26) + 1, 256LL);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 29) + 1, 256LL);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 28) + 1, 256LL);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 31) + 1, 256LL);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 30) + 1, 256LL);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 33) + 1, 256LL);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 32) + 1, 256LL);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 35) + 1, 256LL);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v74 + 34) + 1, 256LL);
        v75 = *(unsigned __int16 *)(v74 + 10);
        if ( (unsigned __int16)v75 < 0x2710u )
        {
          if ( (_WORD)v75 )
            *((_DWORD *)v4 + 128) = 100 * v75;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v76 = DivFD6(1000000LL, *((unsigned int *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((unsigned int *)v4 + v44 + 128), v76);
        *((_DWORD *)v4 + 126) = MulFD6(*((unsigned int *)v4 + v42 + 134), v76);
        *((_DWORD *)v4 + 127) = MulFD6(*((unsigned int *)v4 + v43 + 140), v76);
        v77 = 6;
        do
        {
          if ( v77 >= v44 )
            *((_DWORD *)v4 + v77 + 128) = 1000000;
          if ( v77 >= v42 )
            *((_DWORD *)v4 + v77 + 134) = 1000000;
          if ( v77 >= v43 )
            *((_DWORD *)v4 + v77 + 140) = 1000000;
          --v77;
        }
        while ( v77 );
        v48 = *((_DWORD *)v4 + 125);
        v49 = *((_DWORD *)v4 + 126);
        v41 = *((_DWORD *)v4 + 56);
        v87 = 0;
      }
      else
      {
        v47 = *((_DWORD *)v4 + 58) * v46;
        v48 = DivFD6(1000000 * v44, v47);
        *((_DWORD *)v4 + 125) = v48;
        v49 = DivFD6(1000000 * v42, v47);
        *((_DWORD *)v4 + 126) = v49;
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v43, v47);
      }
      v50 = *((_DWORD *)v4 + 128);
      if ( v48 < v49 )
        v48 = v49;
      if ( v48 < *((_DWORD *)v4 + 127) )
        v48 = *((_DWORD *)v4 + 127);
      if ( v50 == 0xFFFF )
      {
        if ( v48 == 1000000 && (v41 = *((_DWORD *)v4 + 56), (v41 & 0x800) != 0) )
          v50 = 0;
        else
          v50 = 666667;
        *((_DWORD *)v4 + 128) = v50;
      }
      if ( !v50 )
      {
        if ( v48 != 1000000 || (v50 = 0, (v41 & 0x800) == 0) )
        {
          *((_DWORD *)v4 + 128) = 1000000;
          v50 = 1000000;
        }
      }
      v51 = RaisePower(v50, (unsigned int)v48, 0LL);
      v52 = *((unsigned int *)v4 + 125);
      *((_DWORD *)v4 + 128) = v51;
      v53 = MulFD6(v52, 4095LL);
      v54 = *((unsigned int *)v4 + 126);
      *((_WORD *)v4 + 247) = v53 + 1;
      v55 = MulFD6(v54, 4095LL);
      v56 = *((unsigned int *)v4 + 127);
      *((_WORD *)v4 + 248) = v55 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v56, 4095LL) + 1;
    }
    else
    {
      v78 = -1;
      v86 = 1;
      v85[3] = 1;
      v85[2] = 1;
      v85[1] = 1;
    }
    v35 = *((unsigned __int16 *)v4 + 114);
    *((_BYTE *)v4 + 488) = v85[1];
    *((_BYTE *)v4 + 489) = v85[2];
    *((_BYTE *)v4 + 490) = v85[3];
    *((_BYTE *)v4 + 491) = v86;
    *((_BYTE *)v4 + 492) = v78;
    v85[0] = v35;
    v36 = *v82;
    v85[2] = *((_DWORD *)v4 + 58);
    v85[1] = v36;
    v85[3] = v36 + v35;
    v37 = ComputeChecksum(v85, 2820218943LL, 16LL);
    v31 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v37;
    if ( !v31 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v81;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
