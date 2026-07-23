/*
 * XREFs of AslPathWildcardFindNext @ 0x1409692A4
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x14026D5E8 (RtlStringCbCopyNW.c)
 *     ZwQueryDirectoryFile @ 0x1403FAC20 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlStringCbCatNW @ 0x1405C0D70 (RtlStringCbCatNW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14096A134 (AslpPathWildcardFreeMatchNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, __int64 a2, unsigned __int64 *a3)
{
  wchar_t *FileInformation; // r15
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // kr10_8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  NTSTATUS v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r12
  size_t v40; // r15
  size_t v41; // rsi
  void *v42; // r14
  PVOID PoolWithTag; // rax
  void *v44; // rbx
  int v45; // eax
  const wchar_t *v46; // r14
  int matched; // eax
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // r14
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // r14
  size_t v55; // r12
  size_t v56; // rsi
  void *v57; // r15
  PVOID v58; // rax
  void *v59; // rbx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  size_t v62; // rdx
  wchar_t *v63; // rax
  size_t v64; // rax
  size_t v65; // rcx
  __int64 v66; // r8
  char *v67; // rax
  __int16 v68; // r9
  _WORD *v69; // rax
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-9h] BYREF
  UNICODE_STRING v72; // [rsp+88h] [rbp+7h] BYREF
  __int128 v73; // [rsp+98h] [rbp+17h]
  wchar_t *v75; // [rsp+F0h] [rbp+6Fh]

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
  v75 = (wchar_t *)AslAlloc((__int64)a1, 0x268uLL);
  FileInformation = v75;
  if ( !v75 )
    return (unsigned int)-1073741801;
  v7 = a3[4];
  if ( !v7 )
  {
LABEL_97:
    v6 = -2147483642;
    goto LABEL_98;
  }
  v8 = a3[4];
  while ( 1 )
  {
    v9 = v7 - 1;
    v10 = 0LL;
    if ( v9 < v8 )
    {
      v12 = v9;
      v11 = a3[3] * v9;
      if ( !is_mul_ok(a3[3], v12) || (v13 = a3[7], v10 = (unsigned __int16 *)(v13 + v11), v13 + v11 < v13) )
        v10 = 0LL;
    }
    if ( !v10 )
    {
      AslLogCallPrintf(1LL);
      v6 = -1073741595;
      goto LABEL_121;
    }
    if ( !*((_QWORD *)v10 + 3) )
    {
      AslLogCallPrintf(1LL);
      v14 = a3[4];
      if ( !v14 )
        goto LABEL_95;
      v15 = v14 - 1;
      v16 = a3[3] * (v14 - 1);
      if ( !is_mul_ok(a3[3], v15) || (v17 = a3[7], v18 = v17 + v16, v17 + v16 < v17) )
        v18 = 0LL;
      if ( !v18 )
      {
LABEL_23:
        AslLogCallPrintf(1LL);
LABEL_95:
        AslLogCallPrintf(1LL);
        goto LABEL_96;
      }
      AslpPathWildcardFreeMatchNode(v18);
      v19 = a3[4];
      v20 = v19 - 1;
      if ( !v19 )
        goto LABEL_96;
      v21 = a3[3];
      v22 = v21 * v20;
      if ( !is_mul_ok(v21, v20) )
        goto LABEL_96;
      v23 = a3[7];
      if ( v23 + v22 < v23 )
        goto LABEL_96;
      memset((void *)(v23 + v22), 0, v21);
      v24 = --a3[4];
      if ( v24 <= 0x10 )
        goto LABEL_96;
      v25 = a3[3];
      v26 = a3[5];
      v27 = v26 * v25;
      goto LABEL_43;
    }
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
    v28 = ZwQueryDirectoryFile(
            *((HANDLE *)v10 + 3),
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
    if ( v28 >= 0 )
      break;
    if ( v28 != -2147483642 && v28 != -1073741809 )
    {
      AslLogCallPrintf(1LL);
      AslLogCallPrintf(2LL);
    }
    v29 = a3[4];
    if ( !v29 )
      goto LABEL_95;
    v30 = v29 - 1;
    v31 = a3[3] * (v29 - 1);
    if ( !is_mul_ok(a3[3], v30) || (v32 = a3[7], v33 = v32 + v31, v32 + v31 < v32) )
      v33 = 0LL;
    if ( !v33 )
      goto LABEL_23;
    AslpPathWildcardFreeMatchNode(v33);
    v34 = a3[4];
    v35 = v34 - 1;
    if ( !v34 )
      goto LABEL_96;
    v36 = a3[3];
    v37 = v36 * v35;
    if ( !is_mul_ok(v36, v35) )
      goto LABEL_96;
    v38 = a3[7];
    if ( v38 + v37 < v38 )
      goto LABEL_96;
    memset((void *)(v38 + v37), 0, v36);
    v24 = --a3[4];
    if ( v24 <= 0x10 )
      goto LABEL_96;
    v26 = a3[5];
    v25 = a3[3];
    v27 = v25 * v26;
LABEL_43:
    if ( v27 >= 0x400 && v24 < v26 >> 2 )
    {
      v39 = v26 >> 1;
      v40 = v26 * v25;
      if ( is_mul_ok(v26, v25) )
      {
        v41 = v39 * v25;
        if ( is_mul_ok(v39, v25) )
        {
          v42 = (void *)a3[7];
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v39 * v25, 0x72615452u);
          v44 = PoolWithTag;
          if ( v42 )
          {
            if ( PoolWithTag )
              memset(PoolWithTag, 0, v41);
            if ( !v44 )
              goto LABEL_96;
            if ( v40 >= v41 )
              v40 = v41;
            memmove(v44, v42, v40);
            ExFreePoolWithTag(v42, 0x72615452u);
          }
          else if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v41);
          }
          if ( v44 )
          {
            a3[7] = (unsigned __int64)v44;
            a3[5] = v39;
          }
        }
      }
    }
LABEL_96:
    v7 = a3[4];
    FileInformation = v75;
    v8 = v7;
    if ( !v7 )
      goto LABEL_97;
  }
  v45 = *((_DWORD *)FileInformation + 15);
  if ( v45 != 4 )
    goto LABEL_61;
  v46 = FileInformation + 47;
  if ( FileInformation[47] == 46 )
  {
    if ( FileInformation[48] == 46 )
      goto LABEL_96;
LABEL_61:
    v46 = FileInformation + 47;
    if ( v45 == 2 && *v46 == 46 )
      goto LABEL_96;
  }
  matched = AslpPathWildcardAllocMatchNode(&v72, (PCUNICODE_STRING)v10, v46, *((_DWORD *)FileInformation + 15));
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_96;
    if ( matched < 0 )
      goto LABEL_95;
    v48 = a3[4];
    v49 = a3[5];
    if ( v48 < v49 )
      goto LABEL_90;
    v50 = v48 + 1;
    if ( v48 + 1 <= v49 )
    {
      v6 = -2147024809;
      goto LABEL_70;
    }
    v51 = a3[6] - 1;
    v52 = v51 + v50;
    if ( v51 + v50 < v50 )
    {
      v6 = -2147483637;
    }
    else
    {
      v53 = a3[3];
      v54 = v52 & ~v51;
      v55 = v49 * v53;
      if ( is_mul_ok(v49, v53) && (v56 = v54 * v53, is_mul_ok(v54, v53)) )
      {
        v57 = (void *)a3[7];
        v58 = ExAllocatePoolWithTag(PagedPool, v54 * v53, 0x72615452u);
        v59 = v58;
        if ( !v57 )
        {
          if ( v58 )
            memset(v58, 0, v56);
          goto LABEL_85;
        }
        if ( v58 )
          memset(v58, 0, v56);
        if ( !v59 )
          goto LABEL_87;
        if ( v55 >= v56 )
          v55 = v56;
        memmove(v59, v57, v55);
        ExFreePoolWithTag(v57, 0x72615452u);
LABEL_85:
        if ( v59 )
        {
          a3[7] = (unsigned __int64)v59;
          v6 = 0;
          a3[5] = v54;
        }
        else
        {
LABEL_87:
          v6 = -2147024882;
        }
        FileInformation = v75;
      }
      else
      {
        v6 = -2147483637;
      }
      if ( !v6 )
      {
LABEL_90:
        if ( is_mul_ok(a3[3], v48) && (v60 = a3[7], v61 = v60 + a3[3] * v48, v61 >= v60) )
        {
          v6 = 0;
          *(UNICODE_STRING *)v61 = v72;
          *(_OWORD *)(v61 + 16) = v73;
          ++a3[4];
        }
        else
        {
          v6 = -2147483637;
        }
      }
    }
LABEL_70:
    if ( v6 < 0 )
      goto LABEL_121;
    goto LABEL_96;
  }
  v6 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v10 + 1), *v10);
  if ( v6 >= 0 )
  {
    if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) == 92 )
      goto LABEL_118;
    v63 = a1;
    v62 = 260LL;
    do
    {
      if ( !*v63 )
        break;
      ++v63;
      --v62;
    }
    while ( v62 );
    v6 = v62 == 0 ? 0xC000000D : 0;
    if ( v62 )
      v64 = 260 - v62;
    else
      v64 = 0LL;
    if ( v62 )
    {
      v62 = (size_t)&a1[v64];
      v65 = 260 - v64;
      if ( 260 != v64 )
      {
        v66 = 1LL;
        v67 = (char *)L"\\" - v62;
        do
        {
          if ( !v66 )
            break;
          v68 = *(_WORD *)&v67[v62];
          if ( !v68 )
            break;
          *(_WORD *)v62 = v68;
          --v66;
          v62 += 2LL;
          --v65;
        }
        while ( v65 );
      }
      v69 = (_WORD *)(v62 - 2);
      if ( v65 )
        v69 = (_WORD *)v62;
      v6 = v65 == 0 ? 0x80000005 : 0;
      *v69 = 0;
    }
    if ( v6 >= 0 )
    {
LABEL_118:
      v6 = RtlStringCbCatNW(a1, v62, v46, *((unsigned int *)FileInformation + 15));
      if ( v6 >= 0 )
      {
        v6 = 0;
        goto LABEL_98;
      }
    }
  }
LABEL_121:
  AslLogCallPrintf(1LL);
LABEL_98:
  ExFreePoolWithTag(FileInformation, 0x74705041u);
  return (unsigned int)v6;
}
