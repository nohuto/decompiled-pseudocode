/*
 * XREFs of CmpCheckKey @ 0x1405F8D60
 * Callers:
 *     CmpCheckRegistry2 @ 0x1405F84F0 (CmpCheckRegistry2.c)
 * Callees:
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpCheckLeaf @ 0x1405F71F0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1405F87A0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405F96C0 (HvIsCellAllocated.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1405F9850 (CmpFindSecurityCellCacheIndex.c)
 *     HvpMarkCellDirty @ 0x140699B30 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  __int64 v7; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // r13d
  unsigned int v18; // esi
  __int64 v19; // r12
  int v20; // r14d
  __int64 v21; // rsi
  unsigned int v22; // ecx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int16 v26; // dx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned int v30; // esi
  int v31; // r13d
  __int64 (__fastcall *v32)(ULONG_PTR, _QWORD, int *); // rax
  __int64 v33; // r14
  int v34; // esi
  int v35; // r12d
  unsigned int v36; // esi
  int v37; // r14d
  __int64 v38; // rax
  _WORD *v39; // r14
  bool v40; // cl
  PRTL_BITMAP v42; // r14
  _WORD *v43; // rax
  __int16 *v44; // r10
  unsigned int v45; // r8d
  __int16 v46; // dx
  int v47; // eax
  int v48; // r9d
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int16 v52; // ax
  __int64 v53; // rax
  bool v54; // cc
  void (__fastcall *v55)(ULONG_PTR, _DWORD *); // rax
  int v56; // r12d
  int v57; // r15d
  __int16 *v58; // rsi
  _WORD *v59; // rax
  _WORD *v60; // r14
  unsigned int v61; // edx
  __int16 v62; // r8
  int v63; // eax
  int v64; // r9d
  int v65; // eax
  int v66; // eax
  unsigned int v67; // edx
  unsigned int v68; // ecx
  int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r14
  __int16 v73; // cx
  int v74; // edx
  _DWORD *v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  bool v78; // al
  int v79; // [rsp+20h] [rbp-81h]
  int v80; // [rsp+20h] [rbp-81h]
  int v81; // [rsp+20h] [rbp-81h]
  int v82; // [rsp+20h] [rbp-81h]
  int v83; // [rsp+20h] [rbp-81h]
  int v84; // [rsp+20h] [rbp-81h]
  char v85; // [rsp+50h] [rbp-51h]
  _WORD *v86; // [rsp+58h] [rbp-49h]
  _DWORD v87[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v88; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v89[2]; // [rsp+70h] [rbp-31h] BYREF
  int v90; // [rsp+78h] [rbp-29h] BYREF
  int v91; // [rsp+7Ch] [rbp-25h]
  _DWORD v92[2]; // [rsp+80h] [rbp-21h] BYREF
  _DWORD v93[2]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v94; // [rsp+90h] [rbp-11h] BYREF
  _DWORD v95[2]; // [rsp+98h] [rbp-9h] BYREF
  _DWORD v96[2]; // [rsp+A0h] [rbp-1h] BYREF
  unsigned int v97; // [rsp+A8h] [rbp+7h]

  v7 = a7;
  v92[1] = 0;
  v92[0] = -1;
  v88 = 0LL;
  v95[0] = -1;
  v95[1] = 0;
  v89[0] = -1;
  v89[1] = 0;
  v87[0] = -1;
  v87[1] = 0;
  v96[0] = -1;
  v96[1] = 0;
  v85 = 0;
  v86 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(a1, a3, BitMapHeader) )
  {
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a3, v95);
  v13 = v12;
  if ( !v12 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v12;
  v14 = -4 - *(_DWORD *)(v12 - 4);
  if ( v14 - 76 > 0x410 )
  {
    v79 = 32;
    goto LABEL_366;
  }
  v15 = *(unsigned __int16 *)(v12 + 72);
  if ( !(_WORD)v15 || v15 + 76 > v14 )
  {
    v79 = 48;
    goto LABEL_366;
  }
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v12 + 76) )
    {
      v16 = 0;
      while ( *(_BYTE *)(v16 + v13 + 76) != 92 )
      {
        if ( ++v16 >= v15 )
          goto LABEL_15;
      }
      v79 = 1280;
    }
    else
    {
      v79 = 64;
    }
    goto LABEL_366;
  }
  if ( (v15 & 1) != 0 )
  {
    v79 = 80;
LABEL_366:
    v34 = -1073741492;
    goto LABEL_367;
  }
  if ( !*(_WORD *)(v12 + 76) )
  {
    v79 = 96;
    goto LABEL_366;
  }
  v67 = v15 >> 1;
  v68 = 0;
  if ( v67 )
  {
    while ( *(_WORD *)(v12 + 2LL * v68 + 76) != 92 )
    {
      if ( ++v68 >= v67 )
        goto LABEL_15;
    }
    v79 = 1296;
    goto LABEL_366;
  }
LABEL_15:
  if ( *(_WORD *)v13 != 27502 )
  {
    v85 = 1;
    v34 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v79 = 144;
      v69 = 1;
LABEL_368:
      SetFailureLocation(v7, v69, 14, v34, v79);
      goto LABEL_73;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      v79 = 128;
      goto LABEL_367;
    }
    *(_WORD *)v13 = 27502;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v13 + 13) & 3) != 0 )
  {
    v85 = 1;
    v34 = -1073741492;
    if ( (a2 & 0x20000) == 0 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 146);
      if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
      {
        *(_BYTE *)(v13 + 13) &= 0xFCu;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
        goto LABEL_18;
      }
      v34 = -1073741443;
      v79 = 150;
    }
    else
    {
      v79 = 148;
    }
LABEL_367:
    v69 = 0;
    goto LABEL_368;
  }
LABEL_18:
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v13 + 13) & 1) == 0 )
      goto LABEL_21;
    v85 = 1;
    v34 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v79 = 492;
      goto LABEL_367;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 484);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      v79 = 488;
      goto LABEL_367;
    }
    *(_BYTE *)(v13 + 13) = *(_BYTE *)(v13 + 13) & 0xFC | 2;
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v89) + 13) & 3) != 3
      || (((*(_BYTE *)(v13 + 13) & 3) - 1) & 0xFD) == 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v89);
      goto LABEL_21;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v89);
    v85 = 1;
    v34 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v79 = 156;
      goto LABEL_367;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 152);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      v79 = 154;
      goto LABEL_367;
    }
    *(_BYTE *)(v13 + 13) |= 3u;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_21:
  v17 = *(unsigned __int16 *)(v13 + 74);
  v18 = *(_DWORD *)(v13 + 48);
  v19 = *(unsigned int *)(v13 + 36);
  v20 = *(_DWORD *)(v13 + 44);
  v97 = *(_DWORD *)(v13 + 40);
  if ( !v17 )
  {
    if ( v18 != -1 )
    {
      v34 = -1073741492;
      v85 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 228);
        goto LABEL_73;
      }
      v21 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 232);
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
      {
        v34 = -1073741443;
        SetFailureLocation(a7, 1, 14, -1073741443, 236);
        goto LABEL_73;
      }
      *(_DWORD *)(v13 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( v18 == -1 )
  {
    v34 = -1073741492;
    v85 = 1;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 157);
      goto LABEL_73;
    }
    v21 = a7;
    SetFailureLocation(a7, 0, 14, -1073741492, 155);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 159);
      goto LABEL_73;
    }
    v17 = 0;
    *(_WORD *)(v13 + 74) = 0;
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(v13 + 13) & 3) == 1 )
  {
    v80 = 158;
LABEL_199:
    v21 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, v80);
    goto LABEL_202;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(a1, v18, BitMapHeader) )
  {
    v21 = a7;
LABEL_202:
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v21, 0, 14, -1073741492, 192);
      v34 = -1073741492;
      goto LABEL_73;
    }
    SetFailureLocation(v21, 1, 14, -1073741492, 160);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 176);
      goto LABEL_73;
    }
    v85 = 1;
    *(_DWORD *)(v13 + 48) = -1;
    *(_WORD *)(v13 + 74) = 0;
    v17 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_24;
  }
  v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v18, v96);
  if ( !v53 )
  {
    v34 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 208);
    goto LABEL_73;
  }
  v54 = v17 <= -4 - *(_DWORD *)(v53 - 4);
  v55 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16);
  if ( !v54 )
  {
    v55(a1, v96);
    v80 = 224;
    goto LABEL_199;
  }
  v55(a1, v96);
LABEL_23:
  v21 = a7;
LABEL_24:
  if ( v20 == -1 )
  {
    SetFailureLocation(v21, 1, 14, -1073741492, 256);
    goto LABEL_220;
  }
  v22 = a4;
  v23 = a2;
  if ( a4 == -1 )
    goto LABEL_106;
  if ( (a2 & 0x20000) == 0 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_221;
  while ( 1 )
  {
    if ( v22 == -1 )
    {
LABEL_106:
      v52 = *(_WORD *)(v13 + 2);
      if ( (v52 & 0x50) != 0 )
      {
        v34 = -1073741492;
        SetFailureLocation(a7, 0, 14, -1073741492, 432);
        goto LABEL_363;
      }
      if ( (v52 & 2) != 0 )
      {
        v85 = 1;
        v34 = -1073741492;
        if ( (v23 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 480);
          goto LABEL_363;
        }
        v21 = a7;
        SetFailureLocation(a7, 1, 14, -1073741492, 448);
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
        {
          v34 = -1073741443;
          SetFailureLocation(a7, 0, 14, -1073741443, 464);
          goto LABEL_363;
        }
        *(_WORD *)(v13 + 2) &= ~2u;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
    }
    else
    {
      if ( *(_DWORD *)(v13 + 16) != v22 )
      {
        v85 = 1;
        v34 = -1073741492;
        if ( (v23 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 352);
          goto LABEL_363;
        }
        v21 = a7;
        SetFailureLocation(a7, 1, 14, -1073741492, 320);
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
        {
          v34 = -1073741443;
          SetFailureLocation(a7, 0, 14, -1073741443, 336);
          goto LABEL_363;
        }
        v22 = a4;
        *(_DWORD *)(v13 + 16) = a4;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v22, v89);
      v25 = v24;
      if ( !v24 )
      {
        v34 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 368);
        goto LABEL_363;
      }
      v26 = *(_WORD *)(v13 + 72);
      if ( (*(_BYTE *)(v13 + 2) & 0x20) != 0 )
        v26 *= 2;
      if ( (unsigned __int16)*(_DWORD *)(v24 + 52) < (unsigned int)v26 )
      {
        v34 = -1073741492;
        v85 = 1;
        if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 370);
          goto LABEL_264;
        }
        v21 = a7;
        SetFailureLocation(a7, 1, 14, -1073741492, 372);
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, a4) )
        {
          v81 = 374;
          v74 = 1;
          goto LABEL_261;
        }
        v73 = 2 * *(_WORD *)(v13 + 72);
        if ( (*(_BYTE *)(v13 + 2) & 0x20) == 0 )
          v73 = *(_WORD *)(v13 + 72);
        *(_WORD *)(v25 + 52) = v73;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      if ( *(_DWORD *)(v25 + 56) < v17 )
      {
        v34 = -1073741492;
        v85 = 1;
        if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          v81 = 376;
          v74 = 0;
          goto LABEL_263;
        }
        v21 = a7;
        SetFailureLocation(a7, 1, 14, -1073741492, 378);
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, a4) )
        {
          v81 = 380;
          v74 = 0;
LABEL_261:
          v34 = -1073741443;
LABEL_263:
          SetFailureLocation(a7, v74, 14, v34, v81);
LABEL_264:
          v75 = v89;
LABEL_266:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v75);
          goto LABEL_363;
        }
        *(_DWORD *)(v25 + 56) = v17;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v89);
      if ( (*(_BYTE *)(v13 + 2) & 0xE) != 0 )
      {
        v34 = -1073741492;
        v85 = 1;
        if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 416);
          goto LABEL_363;
        }
        v21 = a7;
        SetFailureLocation(a7, 1, 14, -1073741492, 384);
        if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
        {
          v34 = -1073741443;
          SetFailureLocation(a7, 0, 14, -1073741443, 400);
          goto LABEL_363;
        }
        *(_WORD *)(v13 + 2) &= 0xFFF1u;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
    }
    v27 = *(unsigned int *)(v13 + 44);
    v94 = 0;
    if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(a1, v27, &v94) )
      break;
    SetFailureLocation(v21, 1, 14, -1073741492, 496);
LABEL_220:
    v23 = a2;
    v22 = a4;
LABEL_221:
    if ( (v23 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v21, 0, 14, -1073741492, 304);
      v34 = -1073741492;
      goto LABEL_363;
    }
    v93[0] = -1;
    v93[1] = 0;
    v90 = -1;
    v91 = 0;
    if ( v22 == -1 )
    {
      v76 = a7;
      v34 = -1073741492;
      v83 = 272;
LABEL_295:
      SetFailureLocation(v76, 0, 14, v34, v83);
LABEL_363:
      v39 = v86;
      goto LABEL_71;
    }
    v70 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v22, v93);
    v71 = v70;
    if ( !v70 )
    {
      v34 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 276);
      goto LABEL_363;
    }
    v72 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v70 + 44), &v90);
    if ( !v72 )
    {
      v34 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 280);
      v75 = v93;
      goto LABEL_266;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 284);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v90);
      v75 = v93;
      goto LABEL_266;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v71 + 44)) )
    {
      v34 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 288);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v90);
      v75 = v93;
      goto LABEL_266;
    }
    *(_DWORD *)(v13 + 44) = *(_DWORD *)(v71 + 44);
    ++*(_DWORD *)(v72 + 12);
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v90);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v93);
    v22 = a4;
    v23 = a2;
    v21 = a7;
    v85 = 1;
  }
  v28 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v94 + 8);
  ++*(_DWORD *)(v28 + 28);
  v29 = *(_WORD *)(v13 + 2);
  if ( (v29 & 0x40) == 0 )
  {
    if ( !(_DWORD)v19 )
    {
      v7 = a7;
      v31 = -1;
      goto LABEL_47;
    }
    if ( (*(_BYTE *)(v13 + 13) & 3) == 1 )
    {
      v82 = 504;
    }
    else
    {
      v30 = v97;
      if ( (unsigned __int8)HvIsCellAllocated(a1, v97, BitMapHeader) )
      {
        v91 = 0;
        v31 = -1;
        v32 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8);
        v90 = -1;
        v33 = v32(a1, v30, &v90);
        if ( !v33 )
        {
          v34 = -1073741670;
          SetFailureLocation(a7, 0, 14, -1073741670, 528);
          goto LABEL_363;
        }
        if ( (unsigned __int64)(4 * v19) > 0xFFFFFFFF || 4 * (int)v19 > (unsigned int)(-4 - *(_DWORD *)(v33 - 4)) )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v90);
          v7 = a7;
          v34 = -1073741492;
          SetFailureLocation(a7, 1, 14, -1073741492, 544);
        }
        else
        {
          v7 = a7;
          v34 = CmpCheckValueList(
                  a1,
                  (*(_BYTE *)(v13 + 2) & 0x10) != 0,
                  v33,
                  v19,
                  a3,
                  a2,
                  BitMapHeader,
                  a7,
                  &v88,
                  (unsigned int *)&v88 + 1);
          (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v90);
          if ( v34 == -2147483606 )
          {
            v85 = 1;
            goto LABEL_47;
          }
          if ( v34 >= 0 )
          {
LABEL_47:
            v35 = a2;
            v36 = a3;
            while ( 1 )
            {
              if ( *(_DWORD *)(v13 + 36) )
                goto LABEL_49;
              if ( *(_DWORD *)(v13 + 40) == -1 )
                break;
              v34 = -1073741492;
              SetFailureLocation(v7, 1, 14, -1073741492, 608);
LABEL_285:
              if ( (v35 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
              {
                SetFailureLocation(v7, 0, 14, v34, 592);
                goto LABEL_363;
              }
              v36 = a3;
              if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
              {
                v83 = 576;
                goto LABEL_292;
              }
              *(_DWORD *)(v13 + 40) = -1;
              *(_DWORD *)(v13 + 36) = 0;
              v85 = 1;
              *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
            }
            v88 = 0LL;
LABEL_49:
            if ( *(_DWORD *)(v13 + 60) < (unsigned int)v88 )
            {
              v85 = 1;
              v34 = -1073741492;
              if ( (v35 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
              {
                v83 = 610;
                goto LABEL_293;
              }
              v36 = a3;
              if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
              {
                v83 = 612;
                goto LABEL_292;
              }
              *(_DWORD *)(v13 + 60) = v88;
              *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
            }
            v37 = v35 & 0x20000;
            if ( *(_DWORD *)(v13 + 64) >= HIDWORD(v88) )
              goto LABEL_51;
            v85 = 1;
            v34 = -1073741492;
            if ( v37 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
            {
              v83 = 614;
              goto LABEL_293;
            }
            v36 = a3;
            if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
            {
              *(_DWORD *)(v13 + 64) = HIDWORD(v88);
              *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_51:
              if ( !v37 )
              {
                if ( *(_DWORD *)(v13 + 60) != (_DWORD)v88 && (unsigned __int8)HvpMarkCellDirty(a1, v36) )
                  *(_DWORD *)(v13 + 60) = v88;
                if ( *(_DWORD *)(v13 + 64) != HIDWORD(v88) && (unsigned __int8)HvpMarkCellDirty(a1, v36) )
                  *(_DWORD *)(v13 + 64) = HIDWORD(v88);
              }
              goto LABEL_54;
            }
            v83 = 616;
LABEL_292:
            v34 = -1073741443;
            goto LABEL_293;
          }
          if ( v34 != -1073741492 )
            goto LABEL_363;
          if ( a7 )
            *(_QWORD *)(a7 + 248) = v33;
          SetFailureLocation(a7, 1, 14, -1073741492, 560);
        }
LABEL_277:
        v35 = a2;
        goto LABEL_285;
      }
      v82 = 512;
    }
    v7 = a7;
    v34 = -1073741492;
    SetFailureLocation(a7, 1, 14, -1073741492, v82);
    v31 = -1;
    goto LABEL_277;
  }
  v35 = a2;
  if ( (v29 & 0x1E) != 0 )
  {
    v85 = 1;
    v34 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 656);
      goto LABEL_363;
    }
    v36 = a3;
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v34 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 640);
      goto LABEL_363;
    }
    *(_WORD *)(v13 + 2) &= 0xFFE1u;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v36 = a3;
  }
  if ( *(int *)(v13 + 36) >= 0 )
  {
    v34 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, 672);
    goto LABEL_363;
  }
  v7 = a7;
  v31 = -1;
LABEL_54:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v95);
  v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v36, v95);
  v13 = v38;
  if ( !v38 )
  {
    v34 = -1073741670;
    v83 = 688;
    goto LABEL_293;
  }
  if ( v7 )
    *(_QWORD *)(v7 + 248) = v38;
  if ( (v36 & 0x80000000) != 0 )
  {
    if ( !*(_DWORD *)(v38 + 20) )
      goto LABEL_59;
    v34 = -1073741492;
    v83 = 704;
LABEL_293:
    v76 = v7;
    goto LABEL_295;
  }
  if ( !*(_DWORD *)(v38 + 20) )
  {
LABEL_59:
    v39 = 0LL;
    goto LABEL_60;
  }
  if ( (*(_BYTE *)(v38 + 13) & 3) == 1 )
  {
    v39 = 0LL;
    v34 = -1073741492;
    v77 = 712;
    goto LABEL_343;
  }
  v42 = BitMapHeader;
  if ( !(unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v38 + 28), BitMapHeader) )
  {
    v39 = 0LL;
    v34 = -1073741492;
    v77 = 720;
    goto LABEL_343;
  }
  v43 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v13 + 28), v87);
  v86 = v43;
  v44 = v43;
  if ( !v43 )
  {
    v34 = -1073741670;
    v79 = 736;
    goto LABEL_367;
  }
  v45 = -4 - *((_DWORD *)v43 - 1);
  if ( v45 < 8
    || ((v46 = *v43, ((*v43 - 26220) & 0xFDFF) != 0) ? (v47 = 4) : (v47 = 8),
        (v48 = (unsigned __int16)v44[1], (unsigned __int64)(unsigned int)(v48 * v47) + 4 < 4)
     || (((v46 - 26220) & 0xFDFF) != 0 ? (v49 = 4) : (v49 = 8), (unsigned __int64)(unsigned int)(v48 * v49) + 4 > v45)) )
  {
    v34 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
    v39 = 0LL;
    v77 = 752;
    goto LABEL_343;
  }
  if ( !(_WORD)v48 )
  {
    v34 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
    v39 = 0LL;
    v77 = 784;
    goto LABEL_343;
  }
  if ( v7 )
  {
    *(_QWORD *)(v7 + 256) = v44;
    v46 = *v44;
  }
  if ( v46 != 26220 && v46 != 26988 && v46 != 26732 && v46 != 26994 )
  {
    v34 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
    v39 = 0LL;
    v77 = 992;
    goto LABEL_343;
  }
  v50 = (unsigned __int16)v44[1];
  if ( v46 != 26994 )
  {
    if ( v50 != *(_DWORD *)(v13 + 20) )
    {
      v34 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
      v39 = 0LL;
      v77 = 816;
      goto LABEL_343;
    }
    v51 = CmpCheckLeaf(a1, v35, v44, *(_DWORD *)(v13 + 28), v7);
    v34 = v51;
    if ( v51 == -2147483606 )
    {
      v85 = 1;
    }
    else if ( v51 < 0 )
    {
      v39 = v86;
      if ( v51 == -1073741492 )
      {
        v77 = 832;
        goto LABEL_343;
      }
      goto LABEL_71;
    }
    goto LABEL_96;
  }
  v56 = 0;
  v57 = 0;
  if ( !(_WORD)v50 )
  {
LABEL_136:
    if ( *(_DWORD *)(v13 + 20) != v56 )
    {
      v34 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
      v7 = a7;
      v35 = a2;
      v39 = 0LL;
      v77 = 960;
      goto LABEL_343;
    }
    v7 = a7;
    v35 = a2;
LABEL_96:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
    v36 = a3;
    goto LABEL_59;
  }
  while ( 1 )
  {
    if ( a7 )
      *(_DWORD *)(a7 + 264) = v57;
    v58 = &v44[2 * v57];
    if ( !(unsigned __int8)HvIsCellAllocated(a1, *((unsigned int *)v58 + 1), v42) )
    {
      v34 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
      v7 = a7;
      v35 = a2;
      v39 = 0LL;
      v77 = 848;
      goto LABEL_343;
    }
    v59 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                     a1,
                     *((unsigned int *)v58 + 1),
                     v92);
    v60 = v59;
    if ( !v59 )
    {
      v34 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 864);
      goto LABEL_363;
    }
    v61 = -4 - *((_DWORD *)v59 - 1);
    if ( v61 < 8
      || ((v62 = *v59, ((*v59 - 26220) & 0xFDFF) != 0) ? (v63 = 4) : (v63 = 8),
          (v64 = (unsigned __int16)v60[1], (unsigned __int64)(unsigned int)(v64 * v63) + 4 < 4)
       || (((v62 - 26220) & 0xFDFF) != 0 ? (v65 = 4) : (v65 = 8), (unsigned __int64)(unsigned int)(v64 * v65) + 4 > v61)) )
    {
      v34 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
      v7 = a7;
      v35 = a2;
      v39 = 0LL;
      v77 = 880;
      goto LABEL_343;
    }
    if ( !(_WORD)v64 )
    {
      v34 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
      v7 = a7;
      v35 = a2;
      v39 = 0LL;
      v77 = 912;
      goto LABEL_343;
    }
    if ( ((v62 - 26220) & 0xFCFF) != 0 || v62 == 26476 )
    {
      v34 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
      v7 = a7;
      v35 = a2;
      v39 = 0LL;
      v77 = 944;
      goto LABEL_343;
    }
    v66 = CmpCheckLeaf(a1, a2, v60, *((_DWORD *)v58 + 1), a7);
    v34 = v66;
    if ( v66 != -2147483606 )
      break;
    v85 = 1;
LABEL_132:
    v56 += (unsigned __int16)v60[1];
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
    v44 = v86;
    if ( ++v57 >= (unsigned int)(unsigned __int16)v86[1] )
      goto LABEL_136;
    v42 = BitMapHeader;
  }
  if ( v66 >= 0 )
    goto LABEL_132;
  if ( v66 != -1073741492 )
    goto LABEL_363;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
  v7 = a7;
  v35 = a2;
  v39 = 0LL;
  v77 = 952;
LABEL_343:
  SetFailureLocation(v7, 1, 14, v34, v77);
  if ( (v35 & 0x20000) == 0 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
  {
    SetFailureLocation(v7, 1, 14, v34, 1008);
    v36 = a3;
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v84 = 1024;
      goto LABEL_349;
    }
    *(_DWORD *)(v13 + 28) = -1;
    *(_DWORD *)(v13 + 20) = 0;
    v85 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_60:
    v40 = *(_DWORD *)(v13 + 32) != -1 || *(_DWORD *)(v13 + 24);
    if ( (v35 & 0x40000) != 0 && v40 )
    {
      v34 = -1073741492;
      v84 = 1040;
      goto LABEL_350;
    }
    v78 = (v35 & 2) != 0;
    if ( (v35 & 0xD) != 0 && v40 )
      v78 = 1;
    if ( (v35 & 8) != 0 && *(_DWORD *)(a1 + 212) < 4u || v78 )
    {
      if ( (unsigned __int8)HvpMarkCellDirty(a1, v36) )
      {
        *(_DWORD *)(v13 + 24) = 0;
        if ( (v35 & 4) != 0 && *(_DWORD *)(a1 + 212) >= 4u )
          v31 = -1163005939;
        *(_DWORD *)(v13 + 32) = v31;
        goto LABEL_69;
      }
      v84 = 1056;
LABEL_349:
      v34 = -1073741443;
LABEL_350:
      SetFailureLocation(v7, 0, 14, v34, v84);
    }
    else
    {
LABEL_69:
      if ( v85 )
        v34 = -2147483606;
      else
        v34 = 0;
    }
  }
  else
  {
    SetFailureLocation(v7, 0, 14, v34, 1040);
  }
LABEL_71:
  if ( v39 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v87);
LABEL_73:
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v95);
  return (unsigned int)v34;
}
