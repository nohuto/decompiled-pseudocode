/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x140960670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SdbpInitializeSearchDBContext @ 0x14073C444 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14073C618 (SdbpResolveMatchingFile.c)
 *     AslFree @ 0x14073D2F0 (AslFree.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x14073EE34 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     AslFileMappingCreate @ 0x1407414C8 (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbpCheckAllAttributes @ 0x14079A16C (SdbpCheckAllAttributes.c)
 *     AslPathWildcardFindClose @ 0x1409640B8 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409646CC (AslPathWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  void *v9; // rdi
  PVOID *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  _WORD *v13; // r8
  __int64 v14; // r13
  int *v15; // rdx
  int v16; // r15d
  int i; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  PVOID *v23; // [rsp+38h] [rbp-C8h] BYREF
  void *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  _WORD *v27; // [rsp+58h] [rbp-A8h]
  _DWORD *v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  int *v30; // [rsp+70h] [rbp-90h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v26 = a2;
  v29 = a3;
  v7 = a1;
  v28 = a1;
  v8 = 0;
  v9 = 0LL;
  v22 = 0;
  v10 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v22 = 1;
LABEL_28:
    v8 = 1;
    goto LABEL_29;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_29;
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  v27 = (_WORD *)StringTagPtr;
  v13 = (_WORD *)StringTagPtr;
  if ( !StringTagPtr )
  {
LABEL_5:
    AslLogCallPrintf(1LL);
    goto LABEL_29;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(StringTagPtr + 2 * v14) );
  if ( (*(_DWORD *)a6 & 1) == 0 )
  {
    if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      goto LABEL_5;
    v13 = v27;
  }
  v15 = *(int **)(a6 + 72);
  v16 = 0;
  v30 = v15;
  if ( *v15 <= 0 )
  {
LABEL_27:
    v7 = v28;
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_28;
  }
  while ( (unsigned int)SdbpResolveMatchingFile(v26, a6, v13, v14, (__int64)&v15[12 * v16 + 2], &v24) )
  {
    AslPathWildcardFindClose(&v25);
    memset(pszDest, 0, 0x208uLL);
    v9 = v24;
    for ( i = AslPathWildcardFindFirst(pszDest); ; i = AslPathWildcardFindNext(pszDest, v19, v25) )
    {
      v18 = 0LL;
      if ( i < 0 )
        break;
      if ( v10 )
      {
        AslFileMappingDelete(v10);
        v23 = 0LL;
      }
      i = AslFileMappingCreate((__int64 *)&v23, pszDest, 0LL, 0LL, 0LL);
      v10 = v23;
      if ( i < 0 )
        break;
      if ( (int)SdbpCheckAllAttributes(&v22, v26, v29, a5, (__int64)v23) >= 0 )
        goto LABEL_27;
    }
    if ( i != -2147483642 )
      AslLogCallPrintf(3LL);
    if ( v9 )
    {
      AslFree(v18, v9);
      v9 = 0LL;
      v24 = 0LL;
    }
    v15 = v30;
    if ( ++v16 >= *v30 )
      goto LABEL_27;
    v13 = v27;
  }
  AslLogCallPrintf(1LL);
  v9 = v24;
  v7 = v28;
LABEL_29:
  AslPathWildcardFindClose(&v25);
  AslFileMappingDelete(v10);
  if ( v9 )
    AslFree(v20, v9);
  result = v8;
  *v7 = v22;
  return result;
}
