/*
 * XREFs of AslPathWildcardFindNext @ 0x140A1641C
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140A11A00 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140248A04 (RtlStringCbCopyNW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryDirectoryFile @ 0x14041BE00 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlStringCbCatNW @ 0x140649BD4 (RtlStringCbCatNW.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x140A17288 (AslpPathWildcardFreeMatchNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, __int64 a2, unsigned __int64 *a3)
{
  wchar_t *FileInformation; // r15
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr10_8
  unsigned __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  NTSTATUS v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r12
  size_t v38; // r13
  size_t v39; // r14
  void *v40; // r15
  PVOID PoolWithTag; // rax
  void *v42; // rsi
  int v43; // eax
  const wchar_t *v44; // r14
  int matched; // eax
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r15
  unsigned __int128 v53; // rax
  size_t v54; // r14
  void *v55; // r12
  PVOID v56; // rax
  void *v57; // rsi
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  size_t v60; // rdx
  wchar_t *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  char *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  signed __int64 v67; // r8
  __int16 v68; // r9
  char *v69; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING v72; // [rsp+80h] [rbp-9h] BYREF
  __int128 v73; // [rsp+90h] [rbp+7h]
  wchar_t *P; // [rsp+F8h] [rbp+6Fh]
  size_t Size; // [rsp+100h] [rbp+77h]
  __int64 v77; // [rsp+108h] [rbp+7Fh]

  if ( a3 == (unsigned __int64 *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  P = (wchar_t *)AslAlloc((__int64)a1, 0x268uLL);
  FileInformation = P;
  if ( !P )
    return (unsigned int)-1073741801;
  v7 = a3[4];
  if ( !v7 )
  {
LABEL_109:
    v6 = -2147483642;
    goto LABEL_110;
  }
  v8 = a3[4];
  v6 = -1073741595;
  while ( 1 )
  {
    v9 = v7 - 1;
    if ( v9 >= v8
      || (v11 = v9, v10 = a3[3] * v9, !is_mul_ok(a3[3], v11))
      || (v12 = a3[7], v13 = (unsigned __int16 *)(v12 + v10), v12 + v10 < v12)
      || !v13 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_108;
    }
    if ( *((_QWORD *)v13 + 3) )
      break;
    AslLogCallPrintf(1LL);
    v14 = a3[4];
    if ( !v14 )
      goto LABEL_27;
    v15 = v14 - 1;
    v16 = a3[3] * (v14 - 1);
    if ( !is_mul_ok(a3[3], v15) || (v17 = a3[7], v18 = v17 + v16, v17 + v16 < v17) || !v18 )
    {
LABEL_26:
      AslLogCallPrintf(1LL);
LABEL_27:
      AslLogCallPrintf(1LL);
      goto LABEL_85;
    }
    AslpPathWildcardFreeMatchNode(v18);
    v19 = a3[4];
    if ( !v19 )
      goto LABEL_85;
    v20 = a3[3];
    v21 = v20 * (v19 - 1);
    if ( !is_mul_ok(v20, v19 - 1) )
      goto LABEL_85;
    v22 = a3[7];
    if ( v22 + v21 < v22 )
      goto LABEL_85;
    memset((void *)(v22 + v21), 0, v20);
    v23 = --a3[4];
    if ( v23 <= 0x10 )
      goto LABEL_85;
    v24 = a3[3];
    v25 = a3[5];
    v26 = v25 * v24;
LABEL_41:
    if ( v26 >= 0x400 && v23 < v25 >> 2 )
    {
      v37 = v25 >> 1;
      v38 = v25 * v24;
      if ( is_mul_ok(v25, v24) )
      {
        v39 = v37 * v24;
        if ( is_mul_ok(v37, v24) )
        {
          v40 = (void *)a3[7];
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v37 * v24, 0x72615452u);
          v42 = PoolWithTag;
          if ( v40 )
          {
            if ( !PoolWithTag )
              goto LABEL_85;
            memset(PoolWithTag, 0, v39);
            if ( v38 >= v39 )
              v38 = v39;
            memmove(v42, v40, v38);
            ExFreePoolWithTag(v40, 0x72615452u);
LABEL_54:
            a3[7] = (unsigned __int64)v42;
            a3[5] = v37;
            goto LABEL_85;
          }
          if ( PoolWithTag )
            memset(PoolWithTag, 0, v39);
          if ( v42 )
            goto LABEL_54;
        }
      }
    }
LABEL_85:
    v7 = a3[4];
    v8 = v7;
    if ( !v7 )
      goto LABEL_109;
    FileInformation = P;
  }
  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v13 + 2));
  v27 = ZwQueryDirectoryFile(
          *((HANDLE *)v13 + 3),
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x268u,
          FileBothDirectoryInformation,
          1u,
          &DestinationString,
          0);
  if ( v27 < 0 )
  {
    if ( v27 != -2147483642 && v27 != -1073741809 )
    {
      AslLogCallPrintf(1LL);
      AslLogCallPrintf(2LL);
    }
    v28 = a3[4];
    if ( !v28 )
      goto LABEL_27;
    v29 = v28 - 1;
    v30 = a3[3] * (v28 - 1);
    if ( !is_mul_ok(a3[3], v29) )
      goto LABEL_26;
    v31 = a3[7];
    v32 = v31 + v30;
    if ( v31 + v30 < v31 || !v32 )
      goto LABEL_26;
    AslpPathWildcardFreeMatchNode(v32);
    v33 = a3[4];
    if ( !v33 )
      goto LABEL_85;
    v34 = a3[3];
    v35 = v34 * (v33 - 1);
    if ( !is_mul_ok(v34, v33 - 1) )
      goto LABEL_85;
    v36 = a3[7];
    if ( v36 + v35 < v36 )
      goto LABEL_85;
    memset((void *)(v36 + v35), 0, v34);
    v23 = --a3[4];
    if ( v23 <= 0x10 )
      goto LABEL_85;
    v25 = a3[5];
    v24 = a3[3];
    v26 = v24 * v25;
    goto LABEL_41;
  }
  v43 = *((_DWORD *)FileInformation + 15);
  if ( v43 == 4 )
  {
    v44 = FileInformation + 47;
    if ( FileInformation[47] == 46 )
    {
      if ( FileInformation[48] == 46 )
        goto LABEL_85;
LABEL_58:
      v44 = FileInformation + 47;
    }
  }
  else
  {
    if ( v43 != 2 )
      goto LABEL_58;
    v44 = FileInformation + 47;
    if ( FileInformation[47] == 46 )
      goto LABEL_85;
  }
  matched = AslpPathWildcardAllocMatchNode(&v72, (PCUNICODE_STRING)v13, v44, *((_DWORD *)FileInformation + 15));
  if ( matched != -1073741197 )
  {
    if ( matched != -1073741565 && matched != -1073741638 )
    {
      if ( matched < 0 )
        goto LABEL_27;
      v46 = a3[4];
      v47 = a3[5];
      if ( v46 >= v47 )
      {
        v48 = v46 + 1;
        if ( v46 + 1 <= v47 )
        {
          v6 = -2147024809;
          goto LABEL_108;
        }
        v49 = a3[6] - 1;
        v50 = v49 + v48;
        if ( v49 + v48 < v48
          || (v51 = a3[3], v52 = v50 & ~v49, v53 = v47 * (unsigned __int128)v51, Size = v53, !is_mul_ok(a3[5], v51))
          || (v77 &= *((_QWORD *)&v53 + 1), v54 = v52 * v51, !is_mul_ok(v52, v51)) )
        {
LABEL_88:
          v6 = -2147483637;
          goto LABEL_108;
        }
        v55 = (void *)a3[7];
        v56 = ExAllocatePoolWithTag(PagedPool, v52 * v51, 0x72615452u);
        v57 = v56;
        if ( v55 )
        {
          if ( !v56 )
            goto LABEL_72;
          memset(v56, 0, v54);
          if ( Size < v54 )
            v54 = Size;
          memmove(v57, v55, v54);
          ExFreePoolWithTag(v55, 0x72615452u);
        }
        else
        {
          if ( v56 )
            memset(v56, 0, v54);
          if ( !v57 )
          {
LABEL_72:
            v6 = -2147024882;
            goto LABEL_108;
          }
        }
        a3[7] = (unsigned __int64)v57;
        a3[5] = v52;
      }
      if ( !is_mul_ok(a3[3], v46) )
        goto LABEL_88;
      v58 = a3[7];
      v59 = v58 + a3[3] * v46;
      if ( v59 < v58 )
        goto LABEL_88;
      *(UNICODE_STRING *)v59 = v72;
      *(_OWORD *)(v59 + 16) = v73;
      ++a3[4];
    }
    goto LABEL_85;
  }
  v6 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v13 + 1), *v13);
  if ( v6 >= 0 )
  {
    if ( *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1) - 2) == 92 )
      goto LABEL_105;
    v60 = 260LL;
    v61 = a1;
    v62 = 260LL;
    do
    {
      if ( !*v61 )
        break;
      ++v61;
      --v62;
    }
    while ( v62 );
    v63 = (260 - v62) & -(__int64)(v62 != 0);
    v6 = v62 == 0 ? 0xC000000D : 0;
    if ( v62 )
    {
      v64 = (char *)&a1[v63];
      v65 = 260 - v63;
      if ( 260 != v63 )
      {
        v66 = 1LL;
        v67 = (char *)L"\\" - v64;
        do
        {
          if ( !v66 )
            break;
          v68 = *(_WORD *)&v64[v67];
          if ( !v68 )
            break;
          *(_WORD *)v64 = v68;
          --v66;
          v64 += 2;
          --v65;
        }
        while ( v65 );
      }
      v69 = v64 - 2;
      if ( v65 )
        v69 = v64;
      v60 = -v65;
      v6 = v60 == 0 ? 0x80000005 : 0;
      *(_WORD *)v69 = 0;
    }
    if ( v6 >= 0 )
    {
LABEL_105:
      v6 = RtlStringCbCatNW(a1, v60, v44, *((unsigned int *)FileInformation + 15));
      if ( v6 >= 0 )
      {
        v6 = 0;
        goto LABEL_110;
      }
    }
  }
LABEL_108:
  AslLogCallPrintf(1LL);
LABEL_110:
  ExFreePoolWithTag(P, 0x74705041u);
  return (unsigned int)v6;
}
