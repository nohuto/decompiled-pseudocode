/*
 * XREFs of CmpCheckKey @ 0x140673FC0
 * Callers:
 *     CmpCheckRegistry2 @ 0x140672DC0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140268230 (CmpFindSecurityCellCacheIndex.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpCheckLeaf @ 0x140670730 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1406731E0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x140675890 (HvIsCellAllocated.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
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
  int v11; // r13d
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  char v18; // r12
  int v19; // edi
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edi
  int v24; // r15d
  __int64 v25; // rax
  bool v26; // cc
  void (__fastcall *v27)(ULONG_PTR, _DWORD *); // rax
  unsigned int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r15
  unsigned __int16 v34; // cx
  int v35; // eax
  __int16 v36; // cx
  unsigned int v37; // edi
  __int16 v38; // ax
  int v39; // edx
  int v40; // edx
  __int64 v41; // rcx
  __int16 v42; // ax
  unsigned int v43; // r15d
  __int64 (__fastcall *v44)(ULONG_PTR, _QWORD, int *); // rax
  __int64 v45; // r15
  unsigned __int64 v46; // rax
  int v47; // r15d
  __int64 v48; // rax
  int v49; // eax
  PRTL_BITMAP v50; // r15
  __int16 *v51; // rax
  __int16 *v52; // r10
  unsigned int v53; // r8d
  __int16 v54; // dx
  int v55; // r9d
  bool v56; // zf
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // eax
  int v61; // r13d
  int v62; // r12d
  __int16 *v63; // rdi
  _WORD *v64; // rax
  _WORD *v65; // r15
  unsigned int v66; // edx
  __int16 v67; // r8
  int v68; // r9d
  __int16 v69; // cx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // edi
  bool v74; // cl
  bool v75; // al
  int v76; // [rsp+20h] [rbp-81h]
  int v77; // [rsp+20h] [rbp-81h]
  int v78; // [rsp+20h] [rbp-81h]
  int v79; // [rsp+20h] [rbp-81h]
  int v80; // [rsp+20h] [rbp-81h]
  __int16 *v81; // [rsp+50h] [rbp-51h]
  _DWORD v82[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v83; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v84; // [rsp+68h] [rbp-39h]
  _DWORD v85[2]; // [rsp+70h] [rbp-31h] BYREF
  int v86; // [rsp+78h] [rbp-29h] BYREF
  int v87; // [rsp+7Ch] [rbp-25h]
  _DWORD v88[2]; // [rsp+80h] [rbp-21h] BYREF
  _DWORD v89[2]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v90; // [rsp+90h] [rbp-11h] BYREF
  int v91; // [rsp+94h] [rbp-Dh]
  _DWORD v92[2]; // [rsp+98h] [rbp-9h] BYREF
  _DWORD v93[2]; // [rsp+A0h] [rbp-1h] BYREF
  unsigned int v94; // [rsp+A8h] [rbp+7h]
  char v98; // [rsp+120h] [rbp+7Fh]

  v88[1] = 0;
  v83 = 0LL;
  v88[0] = -1;
  v92[0] = -1;
  v85[0] = -1;
  v11 = a2;
  v82[0] = -1;
  v93[0] = -1;
  v92[1] = 0;
  v85[1] = 0;
  v82[1] = 0;
  v93[1] = 0;
  v98 = 0;
  v81 = 0LL;
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
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a3, v92);
  v14 = v13;
  if ( !v13 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v13;
  v15 = -4 - *(_DWORD *)(v13 - 4);
  if ( v15 - 76 > 0x410 )
  {
    v76 = 32;
    goto LABEL_350;
  }
  v16 = *(unsigned __int16 *)(v13 + 72);
  if ( !(_WORD)v16 || v16 + 76 > v15 )
  {
    v76 = 48;
    goto LABEL_350;
  }
  if ( (*(_BYTE *)(v13 + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v16 <= 0x100u )
    {
      if ( *(_BYTE *)(v13 + 76) )
      {
        v17 = 0;
        while ( *(_BYTE *)(v17 + v13 + 76) != 92 )
        {
          if ( ++v17 >= v16 )
            goto LABEL_20;
        }
        v76 = 1280;
      }
      else
      {
        v76 = 64;
      }
    }
    else
    {
      v76 = 53;
    }
    goto LABEL_350;
  }
  if ( (unsigned __int16)v16 > 0x200u )
  {
    v76 = 69;
    goto LABEL_350;
  }
  if ( (v16 & 1) != 0 )
  {
    v76 = 80;
    goto LABEL_350;
  }
  if ( !*(_WORD *)(v13 + 76) )
  {
    v76 = 96;
    goto LABEL_350;
  }
  v20 = v16 >> 1;
  v21 = 0;
  if ( v20 )
  {
    while ( *(_WORD *)(v13 + 2LL * v21 + 76) != 92 )
    {
      if ( ++v21 >= v20 )
        goto LABEL_20;
    }
    v76 = 1296;
LABEL_350:
    v19 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, v76);
    goto LABEL_351;
  }
LABEL_20:
  v18 = 1;
  if ( *(_WORD *)v13 != 27502 )
  {
    v98 = 1;
    v19 = -1073741492;
    if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 144);
      goto LABEL_351;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v19 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 128);
      goto LABEL_351;
    }
    *(_WORD *)v14 = 27502;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v14 + 13) & 3) != 0 )
  {
    v98 = 1;
    v19 = -1073741492;
    if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 148);
      goto LABEL_351;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 146);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v19 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 150);
      goto LABEL_351;
    }
    *(_BYTE *)(v14 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v14 + 13) & 1) != 0 )
    {
      v98 = 1;
      v19 = -1073741492;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 492);
        goto LABEL_351;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 484);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 488);
        goto LABEL_351;
      }
      *(_BYTE *)(v14 + 13) = *(_BYTE *)(v14 + 13) & 0xFC | 2;
      goto LABEL_58;
    }
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v85) + 13) & 3) == 3
      && (((*(_BYTE *)(v14 + 13) & 3) - 1) & 0xFD) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v85);
      v98 = 1;
      v19 = -1073741492;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 156);
        goto LABEL_351;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 152);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 154);
        goto LABEL_351;
      }
      *(_BYTE *)(v14 + 13) |= 3u;
LABEL_58:
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_59;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v85);
  }
LABEL_59:
  v22 = *(unsigned __int16 *)(v14 + 74);
  v23 = *(_DWORD *)(v14 + 48);
  v24 = *(_DWORD *)(v14 + 44);
  v91 = *(_DWORD *)(v14 + 36);
  v94 = *(_DWORD *)(v14 + 40);
  v84 = v22;
  if ( v22 )
  {
    if ( v23 == -1 )
    {
      v98 = 1;
      v19 = -1073741492;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 157);
        goto LABEL_351;
      }
      SetFailureLocation(a7, 0, 14, -1073741492, 155);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 159);
        goto LABEL_351;
      }
      v84 = 0;
      *(_WORD *)(v14 + 74) = 0;
      goto LABEL_92;
    }
    if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 158);
      goto LABEL_80;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v23, BitMapHeader) )
    {
LABEL_80:
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 192);
        v19 = -1073741492;
        goto LABEL_351;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 160);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 176);
        goto LABEL_351;
      }
      v98 = 1;
      *(_WORD *)(v14 + 74) = 0;
      *(_DWORD *)(v14 + 48) = -1;
      v84 = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_92;
    }
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v23, v93);
    if ( !v25 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 208);
      goto LABEL_351;
    }
    v26 = v84 <= -4 - *(_DWORD *)(v25 - 4);
    v27 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16);
    if ( !v26 )
    {
      v27(a1, v93);
      SetFailureLocation(a7, 1, 14, -1073741492, 224);
      goto LABEL_80;
    }
    v27(a1, v93);
LABEL_91:
    v18 = v98;
    goto LABEL_92;
  }
  if ( v23 == -1 )
    goto LABEL_91;
  v98 = 1;
  v19 = -1073741492;
  if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
  {
    SetFailureLocation(a7, 0, 14, -1073741492, 228);
    goto LABEL_351;
  }
  SetFailureLocation(a7, 1, 14, -1073741492, 232);
  if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
  {
    v19 = -1073741443;
    SetFailureLocation(a7, 1, 14, -1073741443, 236);
    goto LABEL_351;
  }
  *(_DWORD *)(v14 + 48) = -1;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_92:
  if ( v24 == -1 )
  {
    SetFailureLocation(a7, 1, 14, -1073741492, 256);
    v28 = a4;
    goto LABEL_110;
  }
  v28 = a4;
  if ( a4 == -1 )
    goto LABEL_149;
  if ( (v11 & 0x20000) == 0 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_110;
  while ( 1 )
  {
    if ( v28 == -1 )
    {
LABEL_149:
      v38 = *(_WORD *)(v14 + 2);
      if ( (v38 & 0x50) != 0 )
      {
        v79 = 432;
        goto LABEL_344;
      }
      if ( (v38 & 2) == 0 )
        goto LABEL_157;
      v18 = 1;
      v19 = -1073741492;
      v98 = 1;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 480);
        goto LABEL_346;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 448);
      v37 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 464);
        goto LABEL_346;
      }
      *(_WORD *)(v14 + 2) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    else
    {
      if ( *(_DWORD *)(v14 + 16) != v28 )
      {
        v18 = 1;
        v19 = -1073741492;
        v98 = 1;
        if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 352);
          goto LABEL_346;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 320);
        if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
        {
          v19 = -1073741443;
          SetFailureLocation(a7, 0, 14, -1073741443, 336);
          goto LABEL_346;
        }
        *(_DWORD *)(v14 + 16) = v28;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v28, v85);
      v33 = v32;
      if ( !v32 )
      {
        v19 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 368);
        goto LABEL_346;
      }
      v34 = 2 * *(_WORD *)(v14 + 72);
      v35 = *(_DWORD *)(v32 + 52);
      if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
        v34 = *(_WORD *)(v14 + 72);
      if ( (unsigned __int16)v35 < (unsigned int)v34 )
      {
        v18 = 1;
        v19 = -1073741492;
        v98 = 1;
        if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 370);
          goto LABEL_164;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 372);
        if ( !(unsigned __int8)HvMarkCellDirty(a1, a4, 0LL) )
        {
          v77 = 374;
          v40 = 1;
          goto LABEL_163;
        }
        v36 = 2 * *(_WORD *)(v14 + 72);
        if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
          v36 = *(_WORD *)(v14 + 72);
        *(_WORD *)(v33 + 52) = v36;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      if ( *(_DWORD *)(v33 + 56) < v84 )
      {
        v18 = 1;
        v19 = -1073741492;
        v98 = 1;
        if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 376);
          goto LABEL_164;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 378);
        if ( !(unsigned __int8)HvMarkCellDirty(a1, a4, 0LL) )
        {
          v77 = 380;
          v40 = 0;
LABEL_163:
          v19 = -1073741443;
          SetFailureLocation(a7, v40, 14, -1073741443, v77);
LABEL_164:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v85);
          goto LABEL_346;
        }
        *(_DWORD *)(v33 + 56) = v84;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v85);
      if ( (*(_BYTE *)(v14 + 2) & 0xE) == 0 )
      {
        v28 = a4;
LABEL_157:
        v37 = a3;
        goto LABEL_158;
      }
      v18 = 1;
      v19 = -1073741492;
      v98 = 1;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 416);
        goto LABEL_346;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 384);
      v37 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 400);
        goto LABEL_346;
      }
      v28 = a4;
      *(_WORD *)(v14 + 2) &= 0xFFF1u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
LABEL_158:
    v39 = *(_DWORD *)(v14 + 44);
    v90 = 0;
    if ( CmpFindSecurityCellCacheIndex(a1, v39, &v90) )
      break;
    SetFailureLocation(a7, 1, 14, -1073741492, 496);
LABEL_110:
    if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 304);
      v19 = -1073741492;
      goto LABEL_346;
    }
    v89[0] = -1;
    v89[1] = 0;
    v86 = -1;
    v87 = 0;
    if ( v28 == -1 )
    {
      v79 = 272;
      goto LABEL_344;
    }
    v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v28, v89);
    v30 = v29;
    if ( !v29 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 276);
      goto LABEL_346;
    }
    v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v29 + 44), &v86);
    if ( !v31 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 280);
      goto LABEL_341;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v80 = 284;
      goto LABEL_339;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, *(unsigned int *)(v30 + 44), 0LL) )
    {
      v80 = 288;
LABEL_339:
      v19 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, v80);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v86);
LABEL_341:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v89);
      goto LABEL_346;
    }
    *(_DWORD *)(v14 + 44) = *(_DWORD *)(v30 + 44);
    ++*(_DWORD *)(v31 + 12);
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v86);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v89);
    v28 = a4;
    v18 = 1;
    v98 = 1;
  }
  v41 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v90 + 8);
  ++*(_DWORD *)(v41 + 28);
  v42 = *(_WORD *)(v14 + 2);
  if ( (v42 & 0x40) != 0 )
  {
    if ( (v42 & 0x1E) != 0 )
    {
      v18 = 1;
      v19 = -1073741492;
      v98 = 1;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 656);
        goto LABEL_346;
      }
      v37 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 640);
        goto LABEL_346;
      }
      *(_WORD *)(v14 + 2) &= 0xFFE1u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( *(int *)(v14 + 36) >= 0 )
    {
      v79 = 672;
      goto LABEL_344;
    }
    goto LABEL_226;
  }
  if ( !v91 )
    goto LABEL_187;
  if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
  {
    v78 = 504;
LABEL_177:
    v19 = -1073741492;
    SetFailureLocation(a7, 1, 14, -1073741492, v78);
    goto LABEL_190;
  }
  v43 = v94;
  if ( !(unsigned __int8)HvIsCellAllocated(a1, v94, BitMapHeader) )
  {
    v78 = 512;
    goto LABEL_177;
  }
  v87 = 0;
  v44 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8);
  v86 = -1;
  v45 = v44(a1, v43, &v86);
  if ( !v45 )
  {
    v19 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 528);
    goto LABEL_346;
  }
  v46 = 4LL * (unsigned int)v91;
  if ( v46 > 0xFFFFFFFF || (unsigned int)v46 > -4 - *(_DWORD *)(v45 - 4) )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v86);
    v78 = 544;
    goto LABEL_177;
  }
  v19 = CmpCheckValueList(
          a1,
          (*(_BYTE *)(v14 + 2) & 0x10) != 0,
          v45,
          v91,
          a3,
          v11,
          BitMapHeader,
          a7,
          &v83,
          (unsigned int *)&v83 + 1);
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v86);
  if ( v19 == -2147483606 )
  {
    v18 = 1;
    v98 = 1;
LABEL_186:
    v37 = a3;
    goto LABEL_187;
  }
  if ( v19 >= 0 )
    goto LABEL_186;
  if ( v19 == -1073741492 )
  {
    if ( a7 )
      *(_QWORD *)(a7 + 248) = v45;
    SetFailureLocation(a7, 1, 14, -1073741492, 560);
    while ( 1 )
    {
LABEL_190:
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, v19, 592);
        goto LABEL_346;
      }
      v37 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 576);
        goto LABEL_346;
      }
      *(_DWORD *)(v14 + 40) = -1;
      *(_DWORD *)(v14 + 36) = 0;
      v18 = 1;
      v98 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_187:
      if ( *(_DWORD *)(v14 + 36) )
        goto LABEL_204;
      if ( *(_DWORD *)(v14 + 40) == -1 )
        break;
      v19 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, 608);
    }
    v83 = 0LL;
LABEL_204:
    if ( *(_DWORD *)(v14 + 60) < (unsigned int)v83 )
    {
      v18 = 1;
      v19 = -1073741492;
      v98 = 1;
      if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 610);
        goto LABEL_346;
      }
      v37 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 612);
        goto LABEL_346;
      }
      *(_DWORD *)(v14 + 60) = v83;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    v47 = v11 & 0x20000;
    if ( *(_DWORD *)(v14 + 64) < HIDWORD(v83) )
    {
      v18 = 1;
      v19 = -1073741492;
      v98 = 1;
      if ( v47 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 614);
        goto LABEL_346;
      }
      v37 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 616);
        goto LABEL_346;
      }
      *(_DWORD *)(v14 + 64) = HIDWORD(v83);
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( !v47 )
    {
      if ( *(_DWORD *)(v14 + 60) != (_DWORD)v83 && (unsigned __int8)HvMarkCellDirty(a1, v37, 0LL) )
        *(_DWORD *)(v14 + 60) = v83;
      if ( *(_DWORD *)(v14 + 64) != HIDWORD(v83) && (unsigned __int8)HvMarkCellDirty(a1, v37, 0LL) )
        *(_DWORD *)(v14 + 64) = HIDWORD(v83);
    }
LABEL_226:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
    v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v37, v92);
    v14 = v48;
    if ( !v48 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 688);
      goto LABEL_346;
    }
    if ( a7 )
      *(_QWORD *)(a7 + 248) = v48;
    if ( (v37 & 0x80000000) != 0 )
    {
      if ( *(_DWORD *)(v48 + 20) )
      {
        v79 = 704;
        goto LABEL_344;
      }
LABEL_306:
      v73 = -1;
      goto LABEL_307;
    }
    if ( !*(_DWORD *)(v48 + 20) )
      goto LABEL_306;
    if ( (*(_BYTE *)(v48 + 13) & 3) == 1 )
    {
      v19 = -1073741492;
      v49 = 712;
      goto LABEL_312;
    }
    v50 = BitMapHeader;
    if ( !(unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v48 + 28), BitMapHeader) )
    {
      v19 = -1073741492;
      v49 = 720;
      goto LABEL_312;
    }
    v51 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                       a1,
                       *(unsigned int *)(v14 + 28),
                       v82);
    v81 = v51;
    v52 = v51;
    if ( !v51 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 736);
      goto LABEL_351;
    }
    v53 = -4 - *((_DWORD *)v51 - 1);
    if ( v53 < 8 )
      goto LABEL_310;
    v54 = *v51;
    v55 = (unsigned __int16)v51[1];
    v56 = ((*v51 - 26220) & 0xFDFF) == 0;
    v57 = 8;
    if ( !v56 )
      v57 = 4;
    if ( (unsigned __int64)(unsigned int)(v55 * v57) + 4 < 4 )
      goto LABEL_310;
    v58 = 8;
    if ( ((v54 - 26220) & 0xFDFF) != 0 )
      v58 = 4;
    if ( (unsigned __int64)(unsigned int)(v55 * v58) + 4 > v53 )
    {
LABEL_310:
      v19 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
      v49 = 752;
      goto LABEL_311;
    }
    if ( !(_WORD)v55 )
    {
      v19 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
      v49 = 784;
      goto LABEL_311;
    }
    if ( a7 )
    {
      *(_QWORD *)(a7 + 256) = v52;
      v54 = *v52;
    }
    if ( v54 != 26988 && v54 != 26220 && v54 != 26732 && v54 != 26994 )
    {
      v19 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
      v49 = 992;
      goto LABEL_311;
    }
    v59 = (unsigned __int16)v52[1];
    if ( v54 == 26994 )
    {
      v61 = 0;
      v62 = 0;
      if ( (_WORD)v59 )
      {
        while ( 1 )
        {
          if ( a7 )
            *(_DWORD *)(a7 + 264) = v62;
          v63 = &v52[2 * v62];
          if ( !(unsigned __int8)HvIsCellAllocated(a1, *((unsigned int *)v63 + 1), v50) )
          {
            v19 = -1073741492;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
            v11 = a2;
            v49 = 848;
            goto LABEL_311;
          }
          v64 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                           a1,
                           *((unsigned int *)v63 + 1),
                           v88);
          v65 = v64;
          if ( !v64 )
          {
            v19 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 864);
            goto LABEL_346;
          }
          v66 = -4 - *((_DWORD *)v64 - 1);
          if ( v66 < 8 )
            goto LABEL_299;
          v67 = *v64;
          v68 = (unsigned __int16)v64[1];
          v69 = *v64 - 26220;
          v70 = 8;
          if ( (v69 & 0xFDFF) != 0 )
            v70 = 4;
          if ( (unsigned __int64)(unsigned int)(v68 * v70) + 4 < 4 )
            goto LABEL_299;
          v71 = 8;
          if ( ((v67 - 26220) & 0xFDFF) != 0 )
            v71 = 4;
          if ( (unsigned __int64)(unsigned int)(v68 * v71) + 4 > v66 )
          {
LABEL_299:
            v19 = -1073741492;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v88);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
            v11 = a2;
            v49 = 880;
            goto LABEL_311;
          }
          if ( !(_WORD)v68 )
          {
            v19 = -1073741492;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v88);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
            v11 = a2;
            v49 = 912;
            goto LABEL_311;
          }
          if ( ((v67 - 26220) & 0xFCFF) != 0 || v67 == 26476 )
          {
            v19 = -1073741492;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v88);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
            v11 = a2;
            v49 = 944;
            goto LABEL_311;
          }
          v72 = CmpCheckLeaf(a1, a2, v65, *((_DWORD *)v63 + 1), a7);
          v19 = v72;
          if ( v72 == -2147483606 )
          {
            v98 = 1;
          }
          else if ( v72 < 0 )
          {
            if ( v72 != -1073741492 )
              goto LABEL_346;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v88);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
            v11 = a2;
            v49 = 952;
LABEL_311:
            v81 = 0LL;
LABEL_312:
            SetFailureLocation(a7, 1, 14, v19, v49);
            if ( (v11 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(a7, 0, 14, v19, 1040);
              goto LABEL_346;
            }
            SetFailureLocation(a7, 1, 14, v19, 1008);
            if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
            {
              v19 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 1024);
              goto LABEL_346;
            }
            *(_DWORD *)(v14 + 20) = 0;
            v73 = -1;
            *(_DWORD *)(v14 + 28) = -1;
            v18 = 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_307:
            v74 = *(_DWORD *)(v14 + 32) != -1 || *(_DWORD *)(v14 + 24);
            if ( (v11 & 0x40000) == 0 || !v74 )
            {
              v75 = (v11 & 2) != 0;
              if ( (v11 & 0xD) != 0 && v74 )
                v75 = 1;
              if ( (v11 & 8) != 0 && *(_DWORD *)(a1 + 212) < 4u || v75 )
              {
                if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
                {
                  v19 = -1073741443;
                  SetFailureLocation(a7, 0, 14, -1073741443, 1056);
                  goto LABEL_346;
                }
                *(_DWORD *)(v14 + 24) = 0;
                if ( (v11 & 4) != 0 && *(_DWORD *)(a1 + 212) >= 4u )
                  v73 = -1163005939;
                *(_DWORD *)(v14 + 32) = v73;
              }
              v19 = v18 != 0 ? 0x8000002A : 0;
              goto LABEL_346;
            }
            v79 = 1040;
LABEL_344:
            v19 = -1073741492;
            SetFailureLocation(a7, 0, 14, -1073741492, v79);
            goto LABEL_346;
          }
          v61 += (unsigned __int16)v65[1];
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v88);
          v52 = v81;
          if ( ++v62 >= (unsigned int)(unsigned __int16)v81[1] )
            break;
          v50 = BitMapHeader;
        }
      }
      if ( *(_DWORD *)(v14 + 20) != v61 )
      {
        v19 = -1073741492;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
        v11 = a2;
        v49 = 960;
        goto LABEL_311;
      }
      v18 = v98;
      v11 = a2;
      goto LABEL_305;
    }
    if ( v59 != *(_DWORD *)(v14 + 20) )
    {
      v19 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
      v49 = 816;
      goto LABEL_311;
    }
    v60 = CmpCheckLeaf(a1, v11, v52, *(_DWORD *)(v14 + 28), a7);
    v19 = v60;
    if ( v60 == -2147483606 )
    {
      v18 = 1;
LABEL_305:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
      v81 = 0LL;
      goto LABEL_306;
    }
    if ( v60 >= 0 )
      goto LABEL_305;
    if ( v60 == -1073741492 )
    {
      v49 = 832;
      goto LABEL_312;
    }
  }
LABEL_346:
  if ( v81 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v82);
LABEL_351:
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
  return (unsigned int)v19;
}
