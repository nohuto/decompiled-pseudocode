/*
 * XREFs of CmpCheckKey @ 0x1406E0950
 * Callers:
 *     CmpCheckRegistry2 @ 0x1406DF7A0 (CmpCheckRegistry2.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1403F094C (CmpKeySecurityIncrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCheckLeaf @ 0x1406DB680 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1406DFBC0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1406E22D0 (HvIsCellAllocated.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
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
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  char v18; // r12
  signed int v19; // edi
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // edi
  int v24; // r15d
  __int64 v25; // rax
  bool v26; // cc
  void (__fastcall *v27)(ULONG_PTR, _DWORD *); // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdi
  signed int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // eax
  unsigned __int16 v36; // dx
  __int16 v37; // cx
  __int16 v38; // ax
  __int16 v39; // ax
  int v40; // edx
  NTSTATUS v41; // eax
  __int64 v42; // r9
  int v43; // edx
  int v44; // r13d
  unsigned int v45; // r13d
  __int64 (__fastcall *v46)(ULONG_PTR, _QWORD, int *); // rax
  __int64 v47; // r15
  unsigned __int64 v48; // rax
  unsigned int v49; // edi
  int v50; // r15d
  __int64 v51; // rax
  unsigned int v52; // eax
  PRTL_BITMAP v53; // r15
  __int16 *v54; // rax
  __int16 *v55; // r10
  unsigned int v56; // r8d
  __int16 v57; // dx
  int v58; // r9d
  bool v59; // zf
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // eax
  int v64; // r13d
  int v65; // r12d
  __int16 *v66; // rdi
  _WORD *v67; // rax
  _WORD *v68; // r15
  unsigned int v69; // edx
  __int16 v70; // r8
  int v71; // r9d
  __int16 v72; // cx
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned int v76; // r13d
  bool v77; // cl
  bool v78; // al
  unsigned int v79; // [rsp+20h] [rbp-91h]
  unsigned int v80; // [rsp+20h] [rbp-91h]
  unsigned int v81; // [rsp+20h] [rbp-91h]
  unsigned int v82; // [rsp+20h] [rbp-91h]
  unsigned int v83; // [rsp+50h] [rbp-61h]
  int v84; // [rsp+50h] [rbp-61h]
  __int16 *v85; // [rsp+58h] [rbp-59h]
  _DWORD v86[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v87; // [rsp+68h] [rbp-49h] BYREF
  int v88; // [rsp+70h] [rbp-41h] BYREF
  int v89; // [rsp+74h] [rbp-3Dh]
  _DWORD v90[2]; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v91[2]; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v92[2]; // [rsp+88h] [rbp-29h] BYREF
  unsigned int v93; // [rsp+90h] [rbp-21h] BYREF
  ULONG pulResult; // [rsp+94h] [rbp-1Dh] BYREF
  int v95; // [rsp+98h] [rbp-19h]
  _DWORD v96[2]; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD v97[2]; // [rsp+A8h] [rbp-9h] BYREF
  unsigned int v98; // [rsp+B0h] [rbp-1h]
  char v101; // [rsp+130h] [rbp+7Fh]

  v91[1] = 0;
  v87 = 0LL;
  v91[0] = -1;
  v96[0] = -1;
  v90[0] = -1;
  v86[0] = -1;
  v97[0] = -1;
  v96[1] = 0;
  v90[1] = 0;
  v86[1] = 0;
  v97[1] = 0;
  v101 = 0;
  v85 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(a1, a3, BitMapHeader) )
  {
    SetFailureLocation(a7, 0, 14, 0xC000014C, 0);
    return 3221225804LL;
  }
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a3, v96);
  v14 = v13;
  if ( !v13 )
  {
    SetFailureLocation(a7, 0, 14, 0xC000009A, 0x10u);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v13;
  v15 = -4 - *(_DWORD *)(v13 - 4);
  if ( v15 - 76 > 0x410 )
  {
    v79 = 32;
    goto LABEL_357;
  }
  v16 = *(unsigned __int16 *)(v13 + 72);
  if ( !(_WORD)v16 || v16 + 76 > v15 )
  {
    v79 = 48;
    goto LABEL_357;
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
        v79 = 1280;
      }
      else
      {
        v79 = 64;
      }
    }
    else
    {
      v79 = 53;
    }
    goto LABEL_357;
  }
  if ( (unsigned __int16)v16 > 0x200u )
  {
    v79 = 69;
    goto LABEL_357;
  }
  if ( (v16 & 1) != 0 )
  {
    v79 = 80;
    goto LABEL_357;
  }
  if ( !*(_WORD *)(v13 + 76) )
  {
    v79 = 96;
    goto LABEL_357;
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
    v79 = 1296;
LABEL_357:
    v19 = -1073741492;
    SetFailureLocation(a7, 0, 14, 0xC000014C, v79);
    goto LABEL_358;
  }
LABEL_20:
  v18 = 1;
  if ( *(_WORD *)v13 != 27502 )
  {
    v101 = 1;
    v19 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x90u);
      goto LABEL_358;
    }
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x70u);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v19 = -1073741443;
      SetFailureLocation(a7, 0, 14, 0xC000017D, 0x80u);
      goto LABEL_358;
    }
    *(_WORD *)v14 = 27502;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v14 + 13) & 3) != 0 )
  {
    v101 = 1;
    v19 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, 0xC000014C, 0x94u);
      goto LABEL_358;
    }
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x92u);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v19 = -1073741443;
      SetFailureLocation(a7, 0, 14, 0xC000017D, 0x96u);
      goto LABEL_358;
    }
    *(_BYTE *)(v14 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v14 + 13) & 1) != 0 )
    {
      v101 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, 0xC000014C, 0x1ECu);
        goto LABEL_358;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x1E4u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, 0xC000017D, 0x1E8u);
        goto LABEL_358;
      }
      *(_BYTE *)(v14 + 13) = *(_BYTE *)(v14 + 13) & 0xFC | 2;
      goto LABEL_58;
    }
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v90) + 13) & 3) == 3
      && (((*(_BYTE *)(v14 + 13) & 3) - 1) & 0xFD) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v90);
      v101 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, 0xC000014C, 0x9Cu);
        goto LABEL_358;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x98u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, 0xC000017D, 0x9Au);
        goto LABEL_358;
      }
      *(_BYTE *)(v14 + 13) |= 3u;
LABEL_58:
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_59;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v90);
  }
LABEL_59:
  v22 = *(unsigned __int16 *)(v14 + 74);
  v23 = *(_DWORD *)(v14 + 48);
  v24 = *(_DWORD *)(v14 + 44);
  v95 = *(_DWORD *)(v14 + 36);
  v98 = *(_DWORD *)(v14 + 40);
  v83 = v22;
  if ( v22 )
  {
    if ( v23 == -1 )
    {
      v19 = -1073741492;
      v101 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, 0xC000014C, 0x9Du);
        goto LABEL_358;
      }
      SetFailureLocation(a7, 0, 14, 0xC000014C, 0x9Bu);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, 0xC000017D, 0x9Fu);
        goto LABEL_358;
      }
      v83 = 0;
      *(_WORD *)(v14 + 74) = 0;
      goto LABEL_92;
    }
    if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
    {
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x9Eu);
      goto LABEL_80;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v23, BitMapHeader) )
    {
LABEL_80:
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, 0xC000014C, 0xC0u);
        v19 = -1073741492;
        goto LABEL_358;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0xA0u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        SetFailureLocation(a7, 0, 14, 0xC000017D, 0xB0u);
        goto LABEL_358;
      }
      v101 = 1;
      *(_WORD *)(v14 + 74) = 0;
      *(_DWORD *)(v14 + 48) = -1;
      v83 = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_92;
    }
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v23, v97);
    if ( !v25 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, 0xC000009A, 0xD0u);
      goto LABEL_358;
    }
    v26 = v83 <= -4 - *(_DWORD *)(v25 - 4);
    v27 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16);
    if ( !v26 )
    {
      v27(a1, v97);
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0xE0u);
      goto LABEL_80;
    }
    v27(a1, v97);
  }
  else if ( v23 != -1 )
  {
    v19 = -1073741492;
    v101 = 1;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, 0xC000014C, 0xE4u);
      goto LABEL_358;
    }
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0xE8u);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v19 = -1073741443;
      SetFailureLocation(a7, 1, 14, 0xC000017D, 0xECu);
      goto LABEL_358;
    }
    *(_DWORD *)(v14 + 48) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_92;
  }
  v18 = v101;
LABEL_92:
  if ( v24 == -1 )
  {
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x100u);
    goto LABEL_110;
  }
  v28 = a2;
  if ( a4 == -1 )
  {
    v39 = *(_WORD *)(v14 + 2);
    if ( (v39 & 0x50) == 0 )
    {
      if ( (v39 & 2) == 0 )
        goto LABEL_158;
      v18 = 1;
      v19 = -1073741492;
      v101 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v80 = 480;
        goto LABEL_351;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x1C0u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        v80 = 464;
        goto LABEL_351;
      }
      v38 = -3;
      goto LABEL_150;
    }
    v80 = 432;
    goto LABEL_350;
  }
  if ( (a2 & 0x20000) == 0 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_111;
  while ( 1 )
  {
    if ( *(_DWORD *)(v14 + 16) != a4 )
    {
      v18 = 1;
      v19 = -1073741492;
      v101 = 1;
      if ( (v28 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v80 = 352;
        goto LABEL_351;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x140u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        v80 = 336;
        goto LABEL_351;
      }
      *(_DWORD *)(v14 + 16) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v90);
    v34 = v33;
    if ( !v33 )
    {
      v19 = -1073741670;
      v80 = 368;
      goto LABEL_351;
    }
    v35 = *(_DWORD *)(v33 + 52);
    v36 = 2 * *(_WORD *)(v14 + 72);
    if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
      v36 = *(_WORD *)(v14 + 72);
    if ( (unsigned __int16)v35 < v36 )
    {
      v18 = 1;
      v101 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, 0xC000014C, 0x172u);
        goto LABEL_167;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x174u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a4, 0LL) )
      {
        v81 = 374;
        v43 = 1;
        goto LABEL_166;
      }
      v37 = 2 * *(_WORD *)(v14 + 72);
      if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
        v37 = *(_WORD *)(v14 + 72);
      *(_WORD *)(v34 + 52) = v37;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v34 + 56) >= v83 )
      goto LABEL_144;
    v18 = 1;
    v101 = 1;
    v19 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, 0xC000014C, 0x178u);
      goto LABEL_167;
    }
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x17Au);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a4, 0LL) )
    {
      v81 = 380;
      v43 = 0;
LABEL_166:
      v19 = -1073741443;
      SetFailureLocation(a7, v43, 14, 0xC000017D, v81);
LABEL_167:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v90);
      goto LABEL_353;
    }
    *(_DWORD *)(v34 + 56) = v83;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_144:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v90);
    if ( (*(_BYTE *)(v14 + 2) & 0xE) != 0 )
    {
      v18 = 1;
      v101 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v80 = 416;
        goto LABEL_351;
      }
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x180u);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        v80 = 400;
        goto LABEL_351;
      }
      v38 = -15;
LABEL_150:
      *(_WORD *)(v14 + 2) &= v38;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
LABEL_158:
    v40 = *(_DWORD *)(v14 + 44);
    v93 = 0;
    pulResult = 0;
    if ( CmpFindSecurityCellCacheIndex(a1, v40, &v93) )
    {
      v41 = RtlULongAdd(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v93 + 8) + 28LL), 1u, &pulResult);
      if ( v41 >= 0 )
        *(_DWORD *)(v42 + 28) = pulResult;
      if ( v41 != -1073741275 )
        break;
    }
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x1F0u);
LABEL_110:
    v28 = a2;
LABEL_111:
    if ( (v28 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, 0xC000014C, 0x130u);
      v19 = -1073741492;
      goto LABEL_353;
    }
    v92[0] = -1;
    v92[1] = 0;
    v88 = -1;
    v89 = 0;
    if ( a4 == -1 )
    {
      v80 = 272;
LABEL_350:
      v19 = -1073741492;
      goto LABEL_351;
    }
    v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v92);
    v30 = v29;
    if ( !v29 )
    {
      v19 = -1073741670;
      v80 = 276;
      goto LABEL_351;
    }
    v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v29 + 44), &v88);
    if ( !v31 )
    {
      v19 = -1073741670;
      SetFailureLocation(a7, 0, 14, 0xC000009A, 0x118u);
      goto LABEL_347;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v82 = 284;
LABEL_344:
      v19 = -1073741443;
      SetFailureLocation(a7, 0, 14, 0xC000017D, v82);
LABEL_345:
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v88);
LABEL_347:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
      goto LABEL_353;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, *(unsigned int *)(v30 + 44), 0LL) )
    {
      v82 = 288;
      goto LABEL_344;
    }
    v32 = CmpKeySecurityIncrementReferenceCount(v31, a1, *(_DWORD *)(v30 + 44), 1);
    v19 = v32;
    if ( v32 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v32, 0x124u);
      goto LABEL_345;
    }
    *(_DWORD *)(v14 + 44) = *(_DWORD *)(v30 + 44);
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v88);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v92);
    v28 = a2;
    v18 = 1;
    v101 = 1;
  }
  if ( v41 < 0 )
  {
    v19 = -1073741492;
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x1F4u);
    goto LABEL_353;
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
  {
    v44 = a2;
    v18 = 1;
    v101 = 1;
    v19 = -1073741492;
    v84 = a2 & 0x20000;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v80 = 648;
LABEL_351:
      SetFailureLocation(a7, 0, 14, v19, v80);
      goto LABEL_353;
    }
    v49 = a3;
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v19 = -1073741443;
      v80 = 652;
      goto LABEL_351;
    }
    *(_DWORD *)(v14 + 36) = 0;
    *(_WORD *)(v14 + 2) &= ~0x40u;
    *(_DWORD *)(v14 + 40) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_240:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v96);
    v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v49, v96);
    v14 = v51;
    if ( !v51 )
    {
      v19 = -1073741670;
      v80 = 688;
      goto LABEL_351;
    }
    if ( a7 )
      *(_QWORD *)(a7 + 248) = v51;
    if ( (v49 & 0x80000000) == 0 )
    {
      if ( *(_DWORD *)(v51 + 20) )
      {
        if ( (*(_BYTE *)(v51 + 13) & 3) == 1 )
        {
          v19 = -1073741492;
          v52 = 712;
          goto LABEL_315;
        }
        v53 = BitMapHeader;
        if ( !(unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v51 + 28), BitMapHeader) )
        {
          v19 = -1073741492;
          v52 = 720;
          goto LABEL_315;
        }
        v54 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                           a1,
                           *(unsigned int *)(v14 + 28),
                           v86);
        v85 = v54;
        v55 = v54;
        if ( !v54 )
        {
          v19 = -1073741670;
          SetFailureLocation(a7, 0, 14, 0xC000009A, 0x2E0u);
          goto LABEL_358;
        }
        v56 = -4 - *((_DWORD *)v54 - 1);
        if ( v56 < 8 )
          goto LABEL_313;
        v57 = *v54;
        v58 = (unsigned __int16)v54[1];
        v59 = ((*v54 - 26220) & 0xFDFF) == 0;
        v60 = 8;
        if ( !v59 )
          v60 = 4;
        if ( (unsigned __int64)(unsigned int)(v58 * v60) + 4 < 4 )
          goto LABEL_313;
        v61 = 8;
        if ( ((v57 - 26220) & 0xFDFF) != 0 )
          v61 = 4;
        if ( (unsigned __int64)(unsigned int)(v58 * v61) + 4 > v56 )
        {
LABEL_313:
          v19 = -1073741492;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
          v52 = 752;
          goto LABEL_314;
        }
        if ( !(_WORD)v58 )
        {
          v19 = -1073741492;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
          v52 = 784;
          goto LABEL_314;
        }
        if ( a7 )
        {
          *(_QWORD *)(a7 + 256) = v55;
          v57 = *v55;
        }
        if ( v57 != 26988 && v57 != 26220 && v57 != 26732 && v57 != 26994 )
        {
          v19 = -1073741492;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
          v52 = 992;
          goto LABEL_314;
        }
        v62 = (unsigned __int16)v55[1];
        if ( v57 == 26994 )
        {
          v64 = 0;
          v65 = 0;
          if ( (_WORD)v62 )
          {
            while ( 1 )
            {
              if ( a7 )
                *(_DWORD *)(a7 + 264) = v65;
              v66 = &v55[2 * v65];
              if ( !(unsigned __int8)HvIsCellAllocated(a1, *((unsigned int *)v66 + 1), v53) )
              {
                v19 = -1073741492;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
                v52 = 848;
                goto LABEL_314;
              }
              v67 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                               a1,
                               *((unsigned int *)v66 + 1),
                               v91);
              v68 = v67;
              if ( !v67 )
              {
                v19 = -1073741670;
                v80 = 864;
                goto LABEL_351;
              }
              v69 = -4 - *((_DWORD *)v67 - 1);
              if ( v69 < 8 )
                goto LABEL_302;
              v70 = *v67;
              v71 = (unsigned __int16)v67[1];
              v72 = *v67 - 26220;
              v73 = 8;
              if ( (v72 & 0xFDFF) != 0 )
                v73 = 4;
              if ( (unsigned __int64)(unsigned int)(v71 * v73) + 4 < 4 )
                goto LABEL_302;
              v74 = 8;
              if ( ((v70 - 26220) & 0xFDFF) != 0 )
                v74 = 4;
              if ( (unsigned __int64)(unsigned int)(v71 * v74) + 4 > v69 )
              {
LABEL_302:
                v19 = -1073741492;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v91);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
                v52 = 880;
                goto LABEL_314;
              }
              if ( !(_WORD)v71 )
              {
                v19 = -1073741492;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v91);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
                v52 = 912;
                goto LABEL_314;
              }
              if ( ((v70 - 26220) & 0xFCFF) != 0 || v70 == 26476 )
              {
                v19 = -1073741492;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v91);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
                v52 = 944;
                goto LABEL_314;
              }
              v75 = CmpCheckLeaf(a1, a2, v68, *((_DWORD *)v66 + 1), a7);
              v19 = v75;
              if ( v75 == -2147483606 )
              {
                v101 = 1;
              }
              else if ( v75 < 0 )
              {
                if ( v75 != -1073741492 )
                  goto LABEL_353;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v91);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
                v52 = 952;
LABEL_314:
                v85 = 0LL;
LABEL_315:
                SetFailureLocation(a7, 1, 14, v19, v52);
                if ( v84 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
                {
                  v80 = 1040;
                  goto LABEL_351;
                }
                SetFailureLocation(a7, 1, 14, v19, 0x3F0u);
                v76 = a3;
                if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
                {
                  v19 = -1073741443;
                  v80 = 1024;
                  goto LABEL_351;
                }
                *(_DWORD *)(v14 + 20) = 0;
                *(_DWORD *)(v14 + 28) = -1;
                v18 = 1;
                *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_310:
                v77 = *(_DWORD *)(v14 + 32) != -1 || *(_DWORD *)(v14 + 24);
                if ( (a2 & 0x40000) != 0 && v77 )
                {
                  v80 = 1040;
                  goto LABEL_350;
                }
                v78 = (a2 & 2) != 0;
                if ( (a2 & 0xD) != 0 && v77 )
                  v78 = 1;
                if ( (a2 & 8) != 0 && *(_DWORD *)(a1 + 212) < 4u || v78 )
                {
                  if ( !(unsigned __int8)HvMarkCellDirty(a1, v76, 0LL) )
                  {
                    v19 = -1073741443;
                    v80 = 1056;
                    goto LABEL_351;
                  }
                  *(_DWORD *)(v14 + 24) = 0;
                  if ( (a2 & 4) != 0 && *(_DWORD *)(a1 + 212) >= 4u )
                  {
                    *(_DWORD *)(v14 + 32) = -1163005939;
                    v19 = v18 != 0 ? 0x8000002A : 0;
                    goto LABEL_353;
                  }
                  *(_DWORD *)(v14 + 32) = -1;
                }
                v19 = v18 != 0 ? 0x8000002A : 0;
                goto LABEL_353;
              }
              v64 += (unsigned __int16)v68[1];
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v91);
              v55 = v85;
              if ( ++v65 >= (unsigned int)(unsigned __int16)v85[1] )
                break;
              v53 = BitMapHeader;
            }
          }
          if ( *(_DWORD *)(v14 + 20) != v64 )
          {
            v19 = -1073741492;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
            v52 = 960;
            goto LABEL_314;
          }
          v18 = v101;
        }
        else
        {
          if ( v62 != *(_DWORD *)(v14 + 20) )
          {
            v19 = -1073741492;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
            v52 = 816;
            goto LABEL_314;
          }
          v63 = CmpCheckLeaf(a1, v44, v55, *(_DWORD *)(v14 + 28), a7);
          v19 = v63;
          if ( v63 == -2147483606 )
          {
            v18 = 1;
          }
          else if ( v63 < 0 )
          {
            if ( v63 == -1073741492 )
            {
              v52 = 832;
              goto LABEL_315;
            }
            goto LABEL_353;
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
        v85 = 0LL;
      }
    }
    else if ( *(_DWORD *)(v51 + 20) )
    {
      v80 = 704;
      goto LABEL_350;
    }
    v76 = a3;
    goto LABEL_310;
  }
  if ( !v95 )
  {
    v44 = a2;
LABEL_198:
    v49 = a3;
    goto LABEL_199;
  }
  if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
  {
    v19 = -1073741492;
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x1F8u);
    v44 = a2;
    goto LABEL_202;
  }
  v45 = v98;
  if ( !(unsigned __int8)HvIsCellAllocated(a1, v98, BitMapHeader) )
  {
    v19 = -1073741492;
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x200u);
    v44 = a2;
    goto LABEL_202;
  }
  v89 = 0;
  v46 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8);
  v88 = -1;
  v47 = v46(a1, v45, &v88);
  if ( !v47 )
  {
    v19 = -1073741670;
    v80 = 528;
    goto LABEL_351;
  }
  v48 = 4LL * (unsigned int)v95;
  if ( v48 > 0xFFFFFFFF || (unsigned int)v48 > -4 - *(_DWORD *)(v47 - 4) )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v88);
    v19 = -1073741492;
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x220u);
    v44 = a2;
    while ( 1 )
    {
LABEL_202:
      if ( (v44 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v80 = 592;
        goto LABEL_351;
      }
      v49 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        v80 = 576;
        goto LABEL_351;
      }
      *(_DWORD *)(v14 + 36) = 0;
      v18 = 1;
      *(_DWORD *)(v14 + 40) = -1;
      v101 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_199:
      if ( *(_DWORD *)(v14 + 36) )
        break;
      if ( *(_DWORD *)(v14 + 40) == -1 )
      {
        v87 = 0LL;
        break;
      }
      v19 = -1073741492;
      SetFailureLocation(a7, 1, 14, 0xC000014C, 0x260u);
    }
    if ( *(_DWORD *)(v14 + 60) < (unsigned int)v87 )
    {
      v18 = 1;
      v19 = -1073741492;
      v101 = 1;
      if ( (v44 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v80 = 610;
        goto LABEL_351;
      }
      v49 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        v80 = 612;
        goto LABEL_351;
      }
      *(_DWORD *)(v14 + 60) = v87;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    v50 = v44 & 0x20000;
    v84 = v44 & 0x20000;
    if ( *(_DWORD *)(v14 + 64) >= HIDWORD(v87) )
    {
      v84 = v44 & 0x20000;
    }
    else
    {
      v18 = 1;
      v19 = -1073741492;
      v101 = 1;
      if ( v50 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v80 = 614;
        goto LABEL_351;
      }
      v49 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v19 = -1073741443;
        v80 = 616;
        goto LABEL_351;
      }
      *(_DWORD *)(v14 + 64) = HIDWORD(v87);
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( !v50 )
    {
      if ( *(_DWORD *)(v14 + 60) != (_DWORD)v87 && (unsigned __int8)HvMarkCellDirty(a1, v49, 0LL) )
        *(_DWORD *)(v14 + 60) = v87;
      if ( *(_DWORD *)(v14 + 64) != HIDWORD(v87) && (unsigned __int8)HvMarkCellDirty(a1, v49, 0LL) )
        *(_DWORD *)(v14 + 64) = HIDWORD(v87);
    }
    goto LABEL_240;
  }
  v44 = a2;
  v19 = CmpCheckValueList(
          a1,
          (*(_BYTE *)(v14 + 2) & 0x10) != 0,
          v47,
          v95,
          a3,
          a2,
          BitMapHeader,
          a7,
          &v87,
          (unsigned int *)&v87 + 1);
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v88);
  if ( v19 == -2147483606 )
  {
    v18 = 1;
    v101 = 1;
    goto LABEL_198;
  }
  if ( v19 >= 0 )
    goto LABEL_198;
  if ( v19 == -1073741492 )
  {
    if ( a7 )
      *(_QWORD *)(a7 + 248) = v47;
    SetFailureLocation(a7, 1, 14, 0xC000014C, 0x230u);
    goto LABEL_202;
  }
LABEL_353:
  if ( v85 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v86);
LABEL_358:
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v96);
  return (unsigned int)v19;
}
