/*
 * XREFs of _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     _GetCIEPrims @ 0x97354 (_GetCIEPrims.c)
 *     _ComputeHTCell @ 0x97406 (_ComputeHTCell.c)
 *     _CleanUpDHI @ 0xAD654 (_CleanUpDHI.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ComputeChecksum @ 0xED870 (_ComputeChecksum.c)
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _MulDivFD6Pairs @ 0xED94C (_MulDivFD6Pairs.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _ComputeInverseMatrix3x3 @ 0x1BC698 (_ComputeInverseMatrix3x3.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 */

int __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, PVOID *a2)
{
  size_t v2; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ebx
  HSEMAPHORE Semaphore; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  char v11; // di
  unsigned int v12; // ecx
  int v13; // edx
  __int16 v14; // ax
  __int16 v15; // ax
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  bool v19; // zf
  __int16 v20; // ax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // esi
  _WORD *v25; // ecx
  bool v26; // cc
  _DWORD *v27; // esi
  __int16 v28; // cx
  char v29; // cl
  char v30; // al
  int v31; // edx
  unsigned __int16 *v32; // eax
  PVOID *v33; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // esi
  unsigned int v40; // edx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // eax
  int v47; // esi
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // esi
  int v53; // edi
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  __int16 v57; // ax
  __int16 v58; // ax
  __int16 v59; // ax
  int v60; // [esp-18h] [ebp-110h]
  int v61; // [esp-10h] [ebp-108h]
  int v62; // [esp-8h] [ebp-100h]
  int v63; // [esp-4h] [ebp-FCh]
  int v64; // [esp-4h] [ebp-FCh]
  int v65; // [esp-4h] [ebp-FCh]
  int v66; // [esp-4h] [ebp-FCh]
  int v67; // [esp-4h] [ebp-FCh]
  _DWORD v68[9]; // [esp+10h] [ebp-E8h] BYREF
  PVOID *v69; // [esp+34h] [ebp-C4h]
  _DWORD *v70; // [esp+38h] [ebp-C0h]
  int v71; // [esp+3Ch] [ebp-BCh]
  unsigned int v72; // [esp+40h] [ebp-B8h]
  unsigned int v73; // [esp+44h] [ebp-B4h]
  unsigned int v74; // [esp+48h] [ebp-B0h]
  int v75; // [esp+4Ch] [ebp-ACh]
  int v76; // [esp+50h] [ebp-A8h]
  PVOID pv; // [esp+54h] [ebp-A4h]
  unsigned __int16 *v78; // [esp+58h] [ebp-A0h]
  _DWORD *v79; // [esp+5Ch] [ebp-9Ch]
  int v80; // [esp+60h] [ebp-98h]
  int v81; // [esp+64h] [ebp-94h]
  int v82; // [esp+68h] [ebp-90h]
  char v83; // [esp+6Fh] [ebp-89h]
  _DWORD v84[19]; // [esp+70h] [ebp-88h] BYREF
  _WORD v85[4]; // [esp+BCh] [ebp-3Ch] BYREF
  int v86; // [esp+C4h] [ebp-34h]
  int v87; // [esp+C8h] [ebp-30h]
  int v88; // [esp+CCh] [ebp-2Ch]
  int v89; // [esp+D0h] [ebp-28h]
  int v90; // [esp+D4h] [ebp-24h]
  int v91; // [esp+D8h] [ebp-20h]
  _DWORD v92[4]; // [esp+DCh] [ebp-1Ch] BYREF
  unsigned int v93; // [esp+ECh] [ebp-Ch]
  int v94; // [esp+F0h] [ebp-8h]

  v2 = 68;
  v69 = a2;
  v70 = Src;
  memset(v84, 0, 0x44u);
  if ( *Src == 1213491458 )
  {
    v2 = 60;
  }
  else if ( *Src != 1213491459 )
  {
    return -1;
  }
  v84[0] = v2;
  memcpy(v84, Src, v2);
  v4 = EngAllocMem(1u, 0x1B8Cu, 0x30345448u);
  v5 = v4;
  pv = v4;
  if ( !v4 )
    return -2;
  v6 = v4 + 8;
  v79 = v4 + 8;
  v4[8] = 1414021956;
  Semaphore = EngCreateSemaphore();
  v5[9] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v5);
    return -11000;
  }
  v8 = v84[2];
  v5[10] = v84[2];
  if ( !v8 )
    v5[10] = GetDbgTagFlags;
  v9 = v84[5];
  LOWORD(v84[1]) &= 0x6FFu;
  HIWORD(v10) = 0;
  v5[11] = 305459218;
  if ( v9 && *(_WORD *)(v9 + 22) == 0xFFFE )
  {
    v75 = 0;
  }
  else
  {
    qmemcpy(v92, "THTN0002.naDuohC", sizeof(v92));
    HIWORD(v9) = 0;
    v62 = v6[3];
    v84[5] = 0;
    v75 = 1;
    v10 = ComputeChecksum(v92, v62, 16);
    v6[3] = v10;
  }
  LOWORD(v9) = HIWORD(v84[15]);
  LOWORD(v10) = v84[15];
  v76 = 0xFFFF;
  v81 = v10;
  v82 = LOWORD(v84[16]);
  v80 = v9;
  if ( LOWORD(v84[15]) == 0xFFFF && *(_DWORD *)((char *)&v84[15] + 2) == (v76 | 0xFFFF0000) )
  {
    v76 = 128;
LABEL_58:
    v82 = 10000;
    v80 = 10000;
    *(_DWORD *)((char *)&v84[15] + 2) = 655370000;
    v81 = 10000;
    LOWORD(v84[15]) = 10000;
    goto LABEL_16;
  }
  v76 = 0;
  if ( LOWORD(v84[15]) < 0x64u
    || LOWORD(v84[15]) > 0xFFDCu
    || (unsigned __int16)(HIWORD(v84[15]) - 100) > 0xFF78u
    || LOWORD(v84[16]) < 0x64u
    || LOWORD(v84[16]) > 0xFFDCu )
  {
    goto LABEL_58;
  }
LABEL_16:
  v11 = v84[1];
  v78 = (unsigned __int16 *)v6 + 85;
  v12 = HIWORD(v84[8]);
  v13 = (unsigned __int16)(8 * (v84[1] & 1));
  v14 = HIWORD(v84[7]);
  v6[41] = v13;
  *((_WORD *)v6 + 84) = v14;
  if ( !v14 || (v15 = v84[8], *((_WORD *)v6 + 85) = v84[8], !v15) )
  {
    *((_WORD *)v6 + 85) = 300;
    *((_WORD *)v6 + 84) = 300;
    v12 = 0;
    v78 = (unsigned __int16 *)v6 + 85;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v35 = v12 & 0x7FFF;
    if ( (unsigned int)(v35 - 333) > 0x394B )
      goto LABEL_23;
    v17 = 1000 * v35;
  }
  else
  {
    v16 = *((unsigned __int16 *)v6 + 84);
    if ( v12 > 3 * v16 || v12 > 3 * (unsigned int)*v78 )
      v12 = 0;
    if ( !v12 )
    {
      v11 = v84[1];
LABEL_23:
      v17 = (int)&loc_F423E + 2;
      goto LABEL_24;
    }
    v36 = *v78 * *v78;
    v92[1] = 2 * v12 * v12;
    v92[0] = v36 + v16 * v16;
    DivFD6(v92[0], v92[1]);
    v37 = RaisePower(3);
    v13 = v6[41];
    v11 = v84[1];
    v17 = v37;
  }
LABEL_24:
  v71 = v11 & 4;
  if ( (v11 & 4) != 0 )
  {
    *((_BYTE *)v6 + 21) = 0;
    v6[41] = v13 | 2;
  }
  else
  {
    v19 = SLOBYTE(v84[1]) >= 0;
    *((_BYTE *)v6 + 21) = 1;
    if ( !v19 )
    {
      v13 |= 0x400u;
      v6[41] = v13;
    }
    if ( (v84[1] & 2) != 0 )
      v6[41] = v13 | 1;
  }
  v18 = 100 * (unsigned __int16)v81;
  v6[43] = v17;
  v6[33] = v18;
  v81 = 7;
  v6[34] = 100 * (unsigned __int16)v80;
  v19 = v75 == 0;
  v6[35] = 100 * (unsigned __int16)v82;
  v20 = HIWORD(v84[1]);
  if ( (!v19 || HIWORD(v84[1]) > 0x12u || HIWORD(v84[1]) == 18 && !v84[3])
    && HIWORD(v84[1]) != 6
    && HIWORD(v84[1]) != (_WORD)v81 )
  {
    v20 = 17;
    HIWORD(v84[1]) = 17;
    v11 = v84[1];
  }
  if ( (unsigned __int16)v20 <= 3u && (_WORD)v71 )
  {
    HIWORD(v84[1]) = 17;
    v11 = v84[1];
  }
  v21 = v11 & 0x70;
  if ( v21 == 32 )
  {
    v64 = 4;
  }
  else if ( v21 == 48 )
  {
    v64 = 2;
  }
  else
  {
    if ( v21 != 64 )
    {
      if ( v21 == 80 )
      {
        v22 = 1;
      }
      else if ( v21 == 96 )
      {
        v22 = 6;
      }
      else
      {
        v22 = v21 != 112 ? 3 : 0;
      }
      goto LABEL_37;
    }
    v64 = 5;
  }
  v22 = v64;
LABEL_37:
  v92[0] = v22;
  *((_BYTE *)v6 + 22) = v22;
  GetCIEPrims(6, 1);
  GetCIEPrims(v63, 0);
  v23 = v6[41];
  if ( (v23 & 4) != 0 )
  {
    v72 = 0;
    v73 = 0;
    v74 = 0;
    if ( v84[6] )
    {
      v82 = 1;
      v72 = *(_DWORD *)v84[6];
      v73 = *(_DWORD *)(v84[6] + 4);
      v74 = *(_DWORD *)(v84[6] + 8);
      v38 = v72;
      v39 = v74;
      v40 = v73;
      if ( (unsigned __int16)v72 > 0x2328u
        || (v6 = v79, HIWORD(v72) > 0x2328u)
        || (v6 = v79, (unsigned __int16)v73 > 0x2328u)
        || (v80 = HIWORD(v73), v6 = v79, HIWORD(v73) > 0x2328u)
        || (v6 = v79, (unsigned __int16)v74 > 0x2328u)
        || (v81 = HIWORD(v74), v6 = v79, HIWORD(v74) > 0x2328u) )
      {
        v41 = 0;
      }
      else if ( v72 || (_WORD)v73 || (_WORD)v80 || (_WORD)v74 )
      {
        v41 = v82;
      }
      else
      {
        v41 = v82;
        if ( !(_WORD)v81 )
          v79[41] = v23 & 0xFFFB;
      }
      v42 = *((_DWORD *)pv + 49);
    }
    else
    {
      v39 = v74;
      v41 = 0;
      v40 = v73;
      v42 = v23 & 0xFFFB;
      v38 = v72;
      v6[41] = v42;
    }
    if ( (v42 & 4) != 0 )
    {
      if ( v75 || !v41 )
      {
        v72 = DefaultSolidDyesInfo[0];
        v73 = DefaultSolidDyesInfo[1];
        v74 = DefaultSolidDyesInfo[2];
        v39 = v74;
        v40 = v73;
        v38 = DefaultSolidDyesInfo[0];
      }
      v68[1] = 100 * (unsigned __int16)v40;
      v68[2] = 100 * (unsigned __int16)v39;
      v68[3] = 100 * (unsigned __int16)v38;
      v68[5] = 100 * HIWORD(v39);
      v68[8] = 1000000;
      v68[4] = 1000000;
      v68[0] = 1000000;
      v68[6] = 100 * HIWORD(v38);
      v68[7] = 100 * HIWORD(v40);
      ComputeInverseMatrix3x3(v68, v6 + 24);
      if ( (v6[41] & 1) == 0 )
      {
        v65 = v6[99];
        v85[0] = 3;
        v85[1] = 0;
        v86 = v6[24];
        v88 = v6[25];
        v90 = v6[26];
        v87 = 1000000;
        v89 = 1000000;
        v91 = 1000000;
        v43 = MulDivFD6Pairs(v85);
        v44 = MulFD6(1000000 - v43, v65);
        v87 = 1000000;
        v45 = 1000000 - v44;
        v89 = 1000000;
        v86 = v6[27];
        v66 = v6[100];
        v88 = v6[28];
        v90 = v6[29];
        v91 = 1000000;
        v46 = MulDivFD6Pairs(v85);
        v47 = v45 - MulFD6(1000000 - v46, v66);
        v87 = 1000000;
        v86 = v6[30];
        v67 = v6[101];
        v88 = v6[31];
        v90 = v6[32];
        v89 = 1000000;
        v91 = 1000000;
        v48 = MulDivFD6Pairs(v85);
        v49 = MulFD6(1000000 - v48, v67);
        v6[41] |= 1u;
        v6[23] = MulFD6(v6[23], v47 - v49);
      }
    }
  }
  v24 = ComputeHTCell(v6);
  v25 = pv;
  if ( v24 < 0 )
  {
    CleanUpDHI(pv);
    return v24;
  }
  else
  {
    *((_WORD *)v6 + 404) = 31;
    v6[199] = 603980031;
    *((_WORD *)v6 + 405) = 1152;
    *(_DWORD *)v25 = 0;
    v26 = LOWORD(v84[10]) <= 8u;
    v25[2] = *((_WORD *)v6 + 75);
    v25[3] = *((_WORD *)v6 + 77);
    if ( v26 && LOWORD(v84[9]) == 24 && (*(_DWORD *)((char *)&v84[10] + 2) != 655370000 || HIWORD(v84[11]) != 10000) )
      v27 = &v84[9];
    else
      v27 = &gcaDefault;
    qmemcpy(v25 + 4, v27, 0x18u);
    v28 = v84[1];
    if ( (v84[1] & 0x204) == 0x200 )
      v6[41] |= 0x1000u;
    if ( (v84[1] & 8) != 0 )
    {
      v6[41] |= 8 * (v28 & 0x400 | 0x20);
      v83 = BYTE2(v84[16]);
      v92[1] = BYTE2(v84[16]) >> 5;
      v92[2] = (BYTE2(v84[16]) >> 2) & 7;
      v92[3] = BYTE2(v84[16]) & 3;
      if ( BYTE2(v84[16]) == 1 )
      {
        v92[3] = 4;
        v92[2] = 4;
        v92[1] = 4;
        v83 = 124;
      }
      else if ( BYTE2(v84[16]) == 2 )
      {
        v92[3] = 5;
        v92[2] = 5;
        v92[1] = 5;
        v83 = -41;
      }
      else if ( !(BYTE2(v84[16]) >> 5) || ((BYTE2(v84[16]) >> 2) & 7) == 0 || (v84[16] & 0x30000) == 0 )
      {
        v92[3] = 255;
        v92[2] = 255;
        v92[1] = 255;
        v6[41] |= 0x200u;
        v83 = -1;
      }
      v50 = v6[41];
      *((_BYTE *)v6 + 784) = (v50 & 0x2000) != 0;
      if ( v92[1] == v92[2] && v92[1] == v92[3] )
      {
        v6[41] = v50 | 0x800;
        *((_BYTE *)v6 + 433) = v92[1];
      }
      else
      {
        *((_BYTE *)v6 + 433) = 0;
      }
      v51 = v92[1];
      v93 = v92[1];
      if ( v92[1] < v92[2] )
      {
        v51 = v92[2];
        v93 = v92[2];
      }
      if ( v51 < v92[3] )
        v93 = v92[3];
      v52 = 6;
      v6[113] = 0xFFFF;
      if ( v93 <= 6 && (v53 = v70[5]) != 0 && *(_WORD *)(v53 + 16) == 0xFFFE )
      {
        v6[41] |= 0x4000u;
        v6[114] = DivFD6(*(unsigned __int8 *)(v53 + 19) + 1, 256);
        v6[115] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 18) + 1, 256);
        v6[116] = DivFD6(*(unsigned __int8 *)(v53 + 21) + 1, 256);
        v6[117] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 20) + 1, 256);
        v6[118] = DivFD6(*(unsigned __int8 *)(v53 + 5) + 1, 256);
        v6[119] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 4) + 1, 256);
        v6[120] = DivFD6(*(unsigned __int8 *)(v53 + 25) + 1, 256);
        v6[121] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 24) + 1, 256);
        v6[122] = DivFD6(*(unsigned __int8 *)(v53 + 27) + 1, 256);
        v6[123] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 26) + 1, 256);
        v6[124] = DivFD6(*(unsigned __int8 *)(v53 + 29) + 1, 256);
        v6[125] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 28) + 1, 256);
        v6[126] = DivFD6(*(unsigned __int8 *)(v53 + 31) + 1, 256);
        v6[127] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 30) + 1, 256);
        v6[128] = DivFD6(*(unsigned __int8 *)(v53 + 33) + 1, 256);
        v6[129] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 32) + 1, 256);
        v6[130] = DivFD6(*(unsigned __int8 *)(v53 + 35) + 1, 256);
        v6[131] = DivFD6((unsigned __int8)*(_WORD *)(v53 + 34) + 1, 256);
        v54 = *(unsigned __int16 *)(v53 + 10);
        if ( (unsigned __int16)v54 < 0x2710u )
        {
          if ( (_WORD)v54 )
            v6[113] = 100 * v54;
        }
        else
        {
          v6[113] = 0;
        }
        v92[0] = DivFD6(1000000, v6[43]);
        v6[110] = MulFD6(v6[v92[1] + 113], v92[0]);
        v6[111] = MulFD6(v6[v92[2] + 119], v92[0]);
        v6[112] = MulFD6(v6[v92[3] + 125], v92[0]);
        v94 = 6;
        do
        {
          if ( v52 >= v92[1] )
          {
            v6[v52 + 113] = 1000000;
            v52 = v94;
          }
          if ( v52 >= v92[2] )
          {
            v6[v52 + 119] = 1000000;
            v52 = v94;
          }
          if ( v52 >= v92[3] )
          {
            v6[v52 + 125] = 1000000;
            v52 = v94;
          }
          v94 = --v52;
        }
        while ( v52 );
      }
      else
      {
        v92[0] = v93 * v6[43];
        v6[110] = DivFD6(1000000 * v92[1], v92[0]);
        v6[111] = DivFD6(1000000 * v92[2], v92[0]);
        v6[112] = DivFD6(1000000 * v92[3], v92[0]);
      }
      v55 = v6[110];
      v92[0] = v55;
      if ( v55 < v6[111] )
      {
        v55 = v6[111];
        v92[0] = v55;
      }
      if ( v55 < v6[112] )
      {
        v55 = v6[112];
        v92[0] = v55;
      }
      v56 = v6[113];
      if ( v56 == 0xFFFF )
      {
        if ( v55 == 1000000 && (v6[41] & 0x800) != 0 )
          v56 = 0;
        else
          v56 = 666667;
        v6[113] = v56;
        v55 = v92[0];
      }
      if ( !v56 && (v55 != 1000000 || (v6[41] & 0x800) == 0) )
        v6[113] = 1000000;
      v6[113] = RaisePower(0);
      v57 = MulFD6(v6[110], 4095);
      v61 = v6[111];
      *((_WORD *)v6 + 217) = v57 + 1;
      v58 = MulFD6(v61, 4095);
      v60 = v6[112];
      *((_WORD *)v6 + 218) = v58 + 1;
      v59 = MulFD6(v60, 4095);
      v29 = v83;
      *((_WORD *)v6 + 219) = v59 + 1;
      v30 = v92[1];
    }
    else
    {
      v29 = -1;
      v30 = 1;
      v93 = 1;
      v92[3] = 1;
      v92[2] = 1;
      v92[1] = 1;
    }
    v31 = *((unsigned __int16 *)v6 + 84);
    *((_BYTE *)v6 + 428) = v30;
    *((_BYTE *)v6 + 429) = v92[2];
    *((_BYTE *)v6 + 430) = v92[3];
    *((_BYTE *)v6 + 431) = v93;
    v32 = v78;
    *((_BYTE *)v6 + 432) = v29;
    v92[0] = v31;
    v92[1] = *v32;
    v92[2] = v6[43];
    v92[3] = v92[1] + v31;
    v6[4] = ComputeChecksum(v92, -1474748353, 16);
    if ( *((_BYTE *)v6 + 22) > 6u )
      *((_BYTE *)v6 + 22) = 3;
    v6[41] |= v76;
    *((_WORD *)v6 + 88) = 0x8000;
    v33 = v69;
    *((_WORD *)v6 + 90) = -1;
    *v33 = pv;
    return 1414021956;
  }
}
