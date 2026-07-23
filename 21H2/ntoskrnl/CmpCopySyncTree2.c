/*
 * XREFs of CmpCopySyncTree2 @ 0x1408786F0
 * Callers:
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpAddSubKeyEx @ 0x14065DA04 (CmpAddSubKeyEx.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACAF8 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x1408792E8 (CmpInitializeKeyNameString.c)
 *     CmpMarkKeyParentDirty @ 0x140879364 (CmpMarkKeyParentDirty.c)
 *     CmpMergeKeyValues @ 0x1408795E0 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14087A3C8 (CmpSyncSubKeysAfterDelete.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int16 a6,
        int a7)
{
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdx
  _DWORD *v11; // rdi
  PVOID PoolWithTag; // rax
  unsigned int *v13; // rbx
  _DWORD *v14; // rax
  unsigned __int64 v15; // r13
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rax
  char v21; // al
  int v22; // ecx
  void (__fastcall *v23)(__int64, _DWORD *); // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  char v28; // cl
  unsigned int v29; // r15d
  int v30; // r15d
  __int64 v31; // r15
  _OWORD *v32; // rdi
  void *v33; // r13
  unsigned int v34; // eax
  int v35; // r13d
  __int64 v36; // rcx
  size_t v37; // r8
  int v38; // r15d
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rbx
  char v44; // al
  char v45; // di
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int16 v49; // cx
  unsigned int v50; // eax
  __int64 v51; // rcx
  char v52; // al
  char v53; // r13
  __int64 v55; // [rsp+30h] [rbp-99h]
  char v56; // [rsp+48h] [rbp-81h]
  int v57; // [rsp+4Ch] [rbp-7Dh]
  int v58; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h]
  unsigned int v60; // [rsp+60h] [rbp-69h]
  _DWORD *v61; // [rsp+68h] [rbp-61h]
  unsigned int v62; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v63; // [rsp+74h] [rbp-55h] BYREF
  int v64; // [rsp+78h] [rbp-51h]
  int v65; // [rsp+7Ch] [rbp-4Dh]
  _DWORD v66[2]; // [rsp+80h] [rbp-49h] BYREF
  _DWORD v67[2]; // [rsp+88h] [rbp-41h] BYREF
  void *Src; // [rsp+90h] [rbp-39h]
  _DWORD v69[2]; // [rsp+98h] [rbp-31h] BYREF
  _DWORD v70[2]; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD v71[2]; // [rsp+A8h] [rbp-21h] BYREF
  _DWORD v72[2]; // [rsp+B0h] [rbp-19h] BYREF
  _DWORD v73[2]; // [rsp+B8h] [rbp-11h] BYREF
  _DWORD v74[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v75[4]; // [rsp+C8h] [rbp-1h] BYREF
  bool v77; // [rsp+120h] [rbp+57h]

  v7 = 0LL;
  v62 = 0;
  v67[1] = 0;
  v8 = 0LL;
  v71[1] = 0;
  v9 = a1;
  v70[1] = 0;
  v73[1] = 0;
  v72[1] = 0;
  v64 = a6 & 1;
  v56 = 0;
  v67[0] = -1;
  v75[0] = 0LL;
  v71[0] = -1;
  v70[0] = -1;
  Src = 0LL;
  v11 = 0LL;
  v73[0] = -1;
  v72[0] = -1;
  v65 = -1;
  P = 0LL;
  v77 = (unsigned int)(a7 - 1) <= 1;
  v66[0] = -1;
  v66[1] = 0;
  v60 = 0;
  v57 = -1;
  v58 = 1;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E5A6D43u);
    P = PoolWithTag;
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (char)PoolWithTag;
    v9 = a1;
  }
  while ( 2 )
  {
    v13 = (unsigned int *)(v9 + 20 * v7);
    v13[2] = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v11 )
          (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v70);
        v14 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, *v13, v70);
        v61 = v14;
        v11 = v14;
        if ( !v14 )
        {
          v53 = 0;
          goto LABEL_102;
        }
        if ( (int)CmpFindSubKeyByNumber(a4, v14, v13[2], &v62) < 0 )
          goto LABEL_91;
        v15 = v62;
        ++v13[2];
        if ( (_DWORD)v15 != -1 && ((_BYTE)v64 || (v15 & 0x80000000) == 0LL) )
          break;
        if ( v77 && a7 != 2 )
        {
          v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v13[1],
                  v73);
          v26 = v24;
          if ( !v24 )
            goto LABEL_91;
          if ( (_BYTE)v64 )
            v27 = v11[6];
          else
            v27 = 0;
          if ( *(_DWORD *)(v24 + 20) + *(_DWORD *)(v24 + 24) > (unsigned int)(v11[5] + v27) )
            CmpSyncSubKeysAfterDelete(a4, (_DWORD)v11, BugCheckParameter2, v24, v8);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            v73,
            v25,
            v26);
        }
        v28 = *((_BYTE *)v13 + 16);
        v29 = v57;
        if ( (v28 & 1) != 0 )
        {
          v29 = v57 + 1;
          v57 = v29;
          if ( v29 < v60 )
          {
            v32 = Src;
          }
          else
          {
            v30 = 1;
            if ( v60 + 1 <= (v60 >> 1) + v60 )
              v30 = v60 >> 1;
            v31 = v60 + v30;
            v32 = ExAllocatePoolWithTag(PagedPool, 20 * v31, 0x20204D43u);
            if ( !v32 )
              goto LABEL_91;
            v33 = Src;
            memmove(v32, Src, 20LL * v60);
            if ( v33 )
              ExFreePoolWithTag(v33, 0);
            v28 = *((_BYTE *)v13 + 16);
            v60 = v31;
            v29 = v57;
            Src = v32;
          }
          v34 = v13[3];
          v13[2] = 0;
          v35 = v58;
          v13[3] ^= ((unsigned __int8)v58 ^ (unsigned __int8)v34) & 7;
          *((_BYTE *)v13 + 16) = v28 & 0xFE;
          v36 = 5LL * v29;
          *(_OWORD *)((char *)v32 + 4 * v36) = *(_OWORD *)v13;
          *((_DWORD *)v32 + v36 + 4) = v13[4];
        }
        else
        {
          v32 = Src;
          v35 = v58;
        }
        if ( (_DWORD)v7 )
        {
          v39 = a1;
        }
        else
        {
          if ( v29 == -1 )
          {
            if ( (a6 & 0x40) != 0 )
              *(_DWORD *)(BugCheckParameter2 + 4800) = *(_DWORD *)(BugCheckParameter2 + 272);
            v43 = 0LL;
            v53 = 1;
            v17 = 0LL;
            goto LABEL_97;
          }
          v37 = 20LL * v29;
          v38 = v29 - 1;
          v57 = v38;
          if ( ((*((_BYTE *)v32 + 12) ^ *((_BYTE *)v32 + v37 + 12)) & 7) != 0 )
          {
            *(_OWORD *)a1 = *v32;
            *(_DWORD *)(a1 + 16) = *((_DWORD *)v32 + 4);
            memmove(v32, (char *)v32 + 20, v37);
            v39 = a1;
          }
          else
          {
            v39 = a1;
            *(_OWORD *)a1 = *(_OWORD *)((char *)v32 + v37);
            *(_DWORD *)(a1 + 16) = *(_DWORD *)((char *)v32 + v37 + 16);
          }
          LODWORD(v7) = 1;
          if ( v35 == (int)(*(_DWORD *)(v39 + 12) << 29) >> 29 )
          {
            v40 = *(_DWORD *)(BugCheckParameter2 + 272);
            v58 = v35 + 1;
            v57 = v38;
            if ( v35 == 1 )
              *(_DWORD *)(BugCheckParameter2 + 4792) = v40;
            else
              *(_DWORD *)(BugCheckParameter2 + 4796) = v40;
          }
        }
        v11 = v61;
        v7 = (unsigned int)(v7 - 1);
        v8 = (__int64)P;
        v13 = (unsigned int *)(v39 + 20 * v7);
        if ( v56 && (_DWORD)v7 == v65 )
        {
          v77 = 1;
          v56 = 0;
        }
      }
      if ( v77 )
        break;
LABEL_17:
      if ( (a6 & 0x40) == 0 )
        goto LABEL_69;
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v15, v66);
      if ( !v20 )
        goto LABEL_91;
      v21 = *(_BYTE *)(v20 + 12);
      if ( (v21 & 2) != 0 )
        v22 = 1;
      else
        v22 = ((v21 & 1) == 0) | 2;
      if ( v22 > v58 )
      {
        *((_BYTE *)v13 + 16) |= 1u;
        (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v66);
        goto LABEL_26;
      }
      v23 = *(void (__fastcall **)(__int64, _DWORD *))(a4 + 16);
      if ( v22 > (int)(v13[3] << 29) >> 29 )
      {
        v23(a4, v66);
LABEL_69:
        v19 = CmpCopyKeyPartial(a4, (unsigned int)v15, BugCheckParameter2, v13[1], a6 | 4u, v55, 2u);
        if ( v19 != -1 )
        {
          v45 = 1;
          if ( (v13[4] & 2) != 0 )
            goto LABEL_73;
          if ( HvpMarkCellDirty(BugCheckParameter2, v13[1], 0) )
          {
            *((_BYTE *)v13 + 16) |= 2u;
LABEL_73:
            if ( CmpAddSubKeyEx(BugCheckParameter2, v13[1], v19, v61[(v15 >> 31) + 5]) )
            {
              v46 = v13[1];
              v69[0] = -1;
              v69[1] = 0;
              v74[0] = -1;
              v74[1] = 0;
              v47 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      v46,
                      v69);
              if ( v47 )
              {
                v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        v19,
                        v74);
                if ( v48 )
                {
                  v49 = 2 * *(_WORD *)(v48 + 72);
                  if ( (*(_BYTE *)(v48 + 2) & 0x20) == 0 )
                    v49 = *(_WORD *)(v48 + 72);
                  if ( (unsigned __int16)*(_DWORD *)(v47 + 52) < (unsigned int)v49 )
                    *(_WORD *)(v47 + 52) = v49;
                  v50 = *(unsigned __int16 *)(v48 + 74);
                  if ( *(_DWORD *)(v47 + 56) < v50 )
                    *(_DWORD *)(v47 + 56) = v50;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v74);
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v69);
                  if ( !v77 || !v56 )
                    goto LABEL_86;
                  if ( (unsigned __int8)CmpMarkKeyParentDirty(BugCheckParameter2) )
                  {
                    v65 = v7;
                    v77 = 0;
                    goto LABEL_86;
                  }
                }
                else
                {
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v69);
                }
              }
            }
          }
        }
LABEL_91:
        v43 = 0LL;
        v17 = 0LL;
        goto LABEL_92;
      }
      v23(a4, v66);
LABEL_26:
      v8 = (__int64)P;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v15, v67);
    v17 = v16;
    if ( !v16 )
      goto LABEL_89;
    CmpInitializeKeyNameString(v16);
    v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v13[1],
            v72);
    if ( !v18 )
      goto LABEL_89;
    v63 = 0;
    CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v18, (unsigned __int16 *)v75, &v63);
    v19 = v63;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v72);
    if ( v19 == -1 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v67);
      v11 = v61;
      v56 = 1;
      goto LABEL_17;
    }
    v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v19,
            v71);
    v43 = v41;
    if ( v41 )
    {
      if ( a7 != 2 )
      {
        if ( *(_QWORD *)(v41 + 4) < *(_QWORD *)(v17 + 4) )
        {
          v55 = v41;
          v44 = CmpSyncKeyValues(a4, v42, v17, BugCheckParameter2, v19);
          goto LABEL_65;
        }
LABEL_67:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v71);
        (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v67);
        v45 = 0;
LABEL_86:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 < 0x200 )
        {
          v9 = a1;
          v51 = 5 * v7;
          v52 = *(_BYTE *)(a1 + 20 * v7 + 16);
          *(_DWORD *)(a1 + 4 * v51 + 12) &= 0xFFFFFFF8;
          *(_DWORD *)(a1 + 4 * v51 + 4) = v19;
          v8 = (__int64)P;
          *(_BYTE *)(a1 + 4 * v51 + 16) = v52 & 0xFC | (2 * v45);
          v11 = v61;
          *(_DWORD *)(a1 + 4 * v51) = v15;
          continue;
        }
        v17 = 0LL;
LABEL_89:
        v43 = 0LL;
LABEL_92:
        v53 = 0;
        goto LABEL_97;
      }
      v44 = CmpMergeKeyValues(a4, v42, v17, BugCheckParameter2, v19, v41);
LABEL_65:
      if ( v44 )
      {
        *(_QWORD *)(v43 + 4) = *(_QWORD *)(v17 + 4);
        goto LABEL_67;
      }
    }
    break;
  }
  v53 = 0;
LABEL_97:
  (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v70);
  if ( v17 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v67);
  if ( v43 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v71);
LABEL_102:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  LOBYTE(PoolWithTag) = v53;
  return (char)PoolWithTag;
}
