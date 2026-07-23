/*
 * XREFs of CmpCheckValueList @ 0x1406DFBC0
 * Callers:
 *     CmpCheckKey @ 0x1406E0950 (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpCompareUnicodeString @ 0x140667B50 (CmpCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 *     HvIsCellAllocated @ 0x1406E22D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        unsigned int BugCheckParameter3,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  char v11; // r15
  unsigned int v12; // esi
  unsigned int v14; // r14d
  unsigned __int64 v15; // r12
  void *v16; // r13
  bool v17; // zf
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // rax
  int *v22; // rax
  int v23; // r8d
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // r9
  bool v28; // si
  _WORD *v29; // rax
  _WORD *v30; // r13
  unsigned int v31; // ecx
  int v32; // edx
  __int16 v33; // r8
  unsigned int v34; // esi
  __int16 v35; // si
  __int16 v36; // ax
  int v37; // eax
  __int16 v38; // r8
  unsigned __int16 v39; // cx
  unsigned int v40; // esi
  unsigned int v41; // r14d
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // eax
  char v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned int v57; // [rsp+20h] [rbp-61h]
  unsigned int v58; // [rsp+30h] [rbp-51h]
  _DWORD v59[2]; // [rsp+38h] [rbp-49h] BYREF
  void *v60; // [rsp+40h] [rbp-41h]
  _DWORD v61[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v62; // [rsp+50h] [rbp-31h] BYREF
  _DWORD v63[2]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v64[2]; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v65[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v66; // [rsp+70h] [rbp-11h] BYREF
  __int64 v68; // [rsp+D0h] [rbp+4Fh]
  unsigned int v69; // [rsp+D8h] [rbp+57h]
  char v70; // [rsp+F8h] [rbp+77h]

  v69 = a4;
  v68 = a3;
  v11 = a2;
  v59[0] = -1;
  v59[1] = 0;
  v58 = 0;
  v61[0] = -1;
  v12 = a4;
  v61[1] = 0;
  v65[0] = -1;
  v14 = 0;
  v65[1] = 0;
  v64[0] = -1;
  v64[1] = 0;
  v63[0] = -1;
  v63[1] = 0;
  v70 = 0;
  v66 = 0LL;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  if ( !a4 )
    return 0;
  while ( 1 )
  {
    v15 = *(unsigned int *)(a3 + 4LL * v14);
    v16 = (void *)(a3 + 4LL * v14);
    v60 = v16;
    if ( v11 && v12 != 1 )
    {
      v34 = -1073741492;
      SetFailureLocation(a8, 0, 15, 0xC000014C, 0x40u);
      goto LABEL_141;
    }
    if ( (_DWORD)v15 == -1 )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x50u);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 284) = -1;
        goto LABEL_130;
      }
      goto LABEL_131;
    }
    v62 = 0LL;
    v17 = (*(_BYTE *)(a1 + 140) & 1) == 0;
    LODWORD(v62) = -1;
    if ( v17 )
    {
      v18 = 632LL * ((unsigned int)v15 >> 31);
      v19 = *(_DWORD *)(v18 + a1 + 272);
      if ( (v15 & 0x7FFFFFFF) >= v19 || (v15 & 7) != 0 )
        goto LABEL_27;
      if ( BitMapHeader && (v15 & 0x80000000) == 0LL )
      {
        if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v15 >> 3) )
          goto LABEL_27;
        RtlClearBits(BitMapHeader, (unsigned int)v15 >> 3, 1u);
        v19 = *(_DWORD *)(v18 + a1 + 272);
      }
      if ( (unsigned int)v15 + (v15 & 0x80000000) >= v19 )
        goto LABEL_27;
      v20 = *(_QWORD *)(*(_QWORD *)(v18 + a1 + 280) + 8 * ((v15 >> 21) & 0x3FF)) + 24 * ((v15 >> 12) & 0x1FF);
      if ( !v20 || (*(_BYTE *)(v20 + 8) & 2) != 0 )
        goto LABEL_27;
      v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, (unsigned int)v15, &v62);
      if ( v21 )
      {
        v22 = (int *)(v21 - 4);
        if ( v22 )
        {
          v23 = (int)v22;
          v24 = *v22;
          v25 = v23 - (*(_DWORD *)(v20 + 8) & 0xFFFFFFF0);
          v26 = -v24;
          v28 = 0;
          if ( v24 < 0 && v26 - 8 <= 0xFFFF8 )
          {
            v27 = *(unsigned int *)((*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( v26 <= (unsigned __int64)(v27 - 32) && v25 - v24 <= (unsigned int)v27 && v25 >= 0x20 )
              v28 = 1;
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v62);
          if ( !v28 )
          {
LABEL_27:
            SetFailureLocation(a8, 1, 15, 0xC000014C, 0x60u);
            if ( a8 )
            {
              *(_DWORD *)(a8 + 284) = v15;
LABEL_130:
              *(_DWORD *)(a8 + 280) = v14;
              goto LABEL_131;
            }
            goto LABEL_131;
          }
        }
      }
    }
    v29 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v15, v59);
    v30 = v29;
    if ( !v29 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, 0xC000009A, 0x70u);
LABEL_141:
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
      }
      return v34;
    }
    v31 = -4 - *((_DWORD *)v29 - 1);
    if ( v31 < 0x14 )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x80u);
      goto LABEL_125;
    }
    if ( *v29 != 27510 )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x88u);
      goto LABEL_125;
    }
    v32 = (unsigned __int16)v29[1];
    if ( v32 + 20 > v31 )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x90u);
      goto LABEL_125;
    }
    v33 = v29[8];
    if ( (v33 & 1) == 0 )
    {
      if ( (v32 & 1) != 0 )
      {
        SetFailureLocation(a8, 1, 15, 0xC000014C, 0x94u);
      }
      else
      {
        if ( (unsigned __int16)v32 <= 0x7FFFu )
          goto LABEL_38;
        SetFailureLocation(a8, 1, 15, 0xC000014C, 0x96u);
      }
LABEL_125:
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
      goto LABEL_127;
    }
    if ( (unsigned __int16)v32 > 0x3FFFu )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x92u);
      goto LABEL_125;
    }
LABEL_38:
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (v33 & 2) != 0 )
    {
      v70 = 1;
      v34 = -1073741492;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v29;
      }
      if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a8, 0, 15, 0xC000014C, 0x9Cu);
        goto LABEL_145;
      }
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x98u);
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v15) )
      {
        v34 = -1073741443;
        SetFailureLocation(a8, 1, 15, 0xC000017D, 0x9Au);
LABEL_145:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
        return v34;
      }
      v11 = a2;
      v30[8] &= ~2u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( v11 )
    {
      v35 = v30[8];
      v36 = v30[1];
      if ( (v35 & 1) != 0 )
      {
        v37 = CmpCompareCompressedName((__int64)&CmSymbolicLinkValueName, (unsigned __int8 *)v30 + 20, v30[1], 0);
      }
      else
      {
        *((_QWORD *)&v66 + 1) = v30 + 10;
        LOWORD(v66) = v36;
        WORD1(v66) = v36;
        v37 = CmpCompareUnicodeString((__int64)&CmSymbolicLinkValueName, (__int64)&v66, 0);
      }
      if ( v37 )
      {
        v57 = 160;
        goto LABEL_148;
      }
      if ( *((_DWORD *)v30 + 3) != 6 && (v35 & 2) == 0 )
      {
        v57 = 176;
        goto LABEL_148;
      }
    }
    v38 = v30[8];
    v39 = 2 * v30[1];
    if ( (v38 & 1) == 0 )
      v39 = v30[1];
    if ( *a9 < (unsigned int)v39 )
      *a9 = v39;
    v40 = *((_DWORD *)v30 + 1);
    if ( v11 )
    {
      if ( (v40 & 1) != 0 )
      {
        v57 = 192;
      }
      else
      {
        if ( v40 <= 0xFFFF )
          goto LABEL_61;
        v57 = 208;
      }
LABEL_148:
      v34 = -1073741492;
      SetFailureLocation(a8, 0, 15, 0xC000014C, v57);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v14;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
      goto LABEL_145;
    }
LABEL_61:
    if ( (v38 & 2) != 0 )
    {
      if ( v40 || *((_DWORD *)v30 + 3) )
      {
        SetFailureLocation(a8, 1, 15, 0xC000014C, 0xE0u);
        goto LABEL_125;
      }
    }
    else if ( v40 >= 0x80000000 )
    {
      if ( v40 + 0x80000000 <= 4 )
        goto LABEL_114;
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x1A0u);
      goto LABEL_125;
    }
    v41 = *((_DWORD *)v30 + 2);
    v42 = 0LL;
    if ( !v40 )
    {
      if ( v41 != -1 )
      {
        SetFailureLocation(a8, 1, 15, 0xC000014C, 0xE0u);
        v14 = v58;
        goto LABEL_125;
      }
      goto LABEL_71;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v41, BitMapHeader) )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0xF0u);
      v14 = v58;
      goto LABEL_125;
    }
    v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v41, v61);
    if ( !v42 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, 0xC000009A, 0x100u);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v58;
        *(_DWORD *)(a8 + 284) = v41;
      }
      goto LABEL_145;
    }
LABEL_71:
    if ( *(_DWORD *)(a1 + 212) < 4u || v40 <= 0x3FD8 )
    {
      if ( !v40 || v40 <= -4 - *(_DWORD *)(v42 - 4) )
        goto LABEL_88;
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x190u);
      v14 = v58;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v58;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
LABEL_105:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
LABEL_127:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      v16 = v60;
      goto LABEL_131;
    }
    if ( (unsigned int)(-4 - *(_DWORD *)(v42 - 4)) < 8
      || *(_WORD *)v42 != 25188
      || !*(_WORD *)(v42 + 2)
      || (v43 = *(unsigned int *)(v42 + 4), (_DWORD)v43 == -1) )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x110u);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v58;
        *(_DWORD *)(a8 + 284) = v41;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      v14 = v58;
      v16 = v60;
      goto LABEL_131;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v43, BitMapHeader) )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x120u);
      v14 = v58;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v58;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v42 + 4);
        *(_QWORD *)(a8 + 288) = v42;
      }
      goto LABEL_105;
    }
    v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v42 + 4), v63);
    v62 = v44;
    v45 = v44;
    if ( !v44 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, 0xC000009A, 0x130u);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v58;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v42 + 4);
      }
LABEL_159:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      goto LABEL_145;
    }
    v46 = *(unsigned __int16 *)(v42 + 2);
    if ( (unsigned __int64)(4 * v46) < 4 || 4 * v46 > (unsigned __int64)(unsigned int)(-4 - *(_DWORD *)(v44 - 4)) )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x140u);
      goto LABEL_100;
    }
    if ( (_DWORD)v46 != (v40 + 16343) / 0x3FD8 )
    {
      SetFailureLocation(a8, 1, 15, 0xC000014C, 0x150u);
LABEL_100:
      v14 = v58;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v58;
        *(_DWORD *)(a8 + 284) = v15;
        *(_QWORD *)(a8 + 288) = v30;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
      goto LABEL_105;
    }
    v47 = 0LL;
    if ( !(_DWORD)v46 )
    {
LABEL_87:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(a1 + 16))(a1, v63, v46, v45);
LABEL_88:
      if ( v42 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      v40 = *((_DWORD *)v30 + 1);
      v14 = v58;
LABEL_114:
      v51 = v40 + 0x80000000;
      if ( v40 < 0x80000000 )
        v51 = v40;
      if ( *a10 < v51 )
        *a10 = v51;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
      v52 = v70;
      ++v14;
      v12 = v69;
      v58 = v14;
      goto LABEL_138;
    }
    while ( (unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v45 + 4 * v47), BitMapHeader) )
    {
      v48 = v62;
      v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v62 + 4 * v47), v64);
      if ( !v49 )
      {
        v34 = -1073741670;
        SetFailureLocation(a8, 0, 15, 0xC000009A, 0x170u);
        if ( a8 )
        {
          v54 = v62;
          *(_DWORD *)(a8 + 280) = v47;
          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v54 + 4 * v47);
          *(_QWORD *)(a8 + 288) = v42;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
        goto LABEL_159;
      }
      if ( (unsigned int)(-4 - *(_DWORD *)(v49 - 4)) < 0x3FD8 )
      {
        SetFailureLocation(a8, 1, 15, 0xC000014C, 0x180u);
        if ( a8 )
        {
          *(_DWORD *)(a8 + 280) = v47;
          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v48 + 4 * v47);
          *(_QWORD *)(a8 + 288) = v42;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v64);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
        v14 = v58;
        v16 = v60;
        goto LABEL_131;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v64);
      v47 = (unsigned int)(v47 + 1);
      v45 = v48;
      if ( (unsigned int)v47 >= *(unsigned __int16 *)(v42 + 2) )
        goto LABEL_87;
    }
    SetFailureLocation(a8, 1, 15, 0xC000014C, 0x160u);
    if ( a8 )
    {
      v50 = v62;
      *(_DWORD *)(a8 + 280) = v47;
      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v50 + 4 * v47);
      *(_QWORD *)(a8 + 288) = v42;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v63);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v59);
    v14 = v58;
    v16 = v60;
LABEL_131:
    if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a8, 0, 15, 0xC000014C, 0x30u);
      return (unsigned int)-1073741492;
    }
    SetFailureLocation(a8, 1, 15, 0xC000014C, 0);
    v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, BugCheckParameter3, v65);
    if ( !v53 )
    {
      v34 = -1073741670;
      SetFailureLocation(a8, 0, 15, 0xC000009A, 0x10u);
      return v34;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, BugCheckParameter3) )
      break;
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v53 + 40)) )
    {
      v55 = 40;
      goto LABEL_165;
    }
    --*(_DWORD *)(v53 + 36);
    v12 = --v69;
    memmove(v16, (const void *)(v68 + 4LL * (v14 + 1)), 4LL * (v69 - v14));
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v65);
    v52 = 1;
    v70 = 1;
LABEL_138:
    if ( v14 >= v12 )
    {
      if ( v52 )
        return (unsigned int)-2147483606;
      return 0;
    }
    v11 = a2;
    a3 = v68;
  }
  v55 = 24;
LABEL_165:
  v34 = -1073741443;
  SetFailureLocation(a8, 0, 15, 0xC000017D, v55);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v65);
  return v34;
}
