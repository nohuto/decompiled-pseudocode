/*
 * XREFs of AslPathWildcardFindFirst @ 0x140A15ECC
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140A11A00 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140248A04 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     AslDoesFileExistNtPath @ 0x140A14CE0 (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x140A1582C (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x140A1641C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x140A171B8 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x140A17288 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A172D4 (AslpPathWildcardMakeLeaves.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(
        NTSTRSAFE_PWSTR pszDest,
        unsigned __int64 a2,
        const wchar_t *a3,
        _QWORD *a4)
{
  wchar_t *v6; // r12
  WCHAR *v8; // r14
  int matched; // ebx
  __int64 v10; // rcx
  size_t v11; // rbx
  wchar_t *v12; // rax
  int Leaves; // eax
  __int64 v14; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rcx
  size_t v18; // r15
  PVOID PoolWithTag; // rax
  PVOID v20; // rbx
  void *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r15
  size_t v29; // r12
  SIZE_T v30; // rdx
  PVOID v31; // rax
  void *v32; // rbx
  PVOID v33; // rax
  size_t v34; // rax
  unsigned __int128 v35; // rax
  unsigned __int64 v36; // kr30_8
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  UNICODE_STRING *v39; // rcx
  UNICODE_STRING v40; // xmm0
  _DWORD *v41; // [rsp+30h] [rbp-50h] BYREF
  void *Src; // [rsp+38h] [rbp-48h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v45; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING v46; // [rsp+70h] [rbp-10h]
  unsigned __int64 pusResult; // [rsp+C8h] [rbp+48h] BYREF

  pusResult = a2;
  v6 = pszDest;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *pszDest = 0;
  v41 = 0LL;
  LOWORD(pusResult) = 0;
  *a4 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  SourceString = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = AslPathCleanUstr(&DestinationString.Length);
    if ( matched < 0 )
      goto LABEL_41;
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched < 0 )
      goto LABEL_41;
    v11 = (unsigned __int16)pusResult;
    v12 = (wchar_t *)AslAlloc(v10, (unsigned __int16)pusResult);
    v8 = v12;
    if ( !v12 )
    {
LABEL_13:
      matched = -1073741801;
      goto LABEL_42;
    }
    matched = RtlStringCbCopyNW(v12, v11, DestinationString.Buffer, DestinationString.Length);
    if ( matched < 0 )
    {
LABEL_41:
      AslLogCallPrintf(1LL);
      goto LABEL_42;
    }
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      goto LABEL_9;
    }
    if ( Leaves == 1 )
    {
      Buffer = DestinationString.Buffer;
      *a4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_42;
      }
      matched = RtlStringCchCopyW(v6, 0x104uLL, a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_42;
      }
      goto LABEL_41;
    }
    v41 = AslAlloc(v14, 0x40uLL);
    v16 = v41;
    if ( !v41 )
      goto LABEL_13;
    *v41 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v16 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v16 + 1) = 0LL;
    *((_OWORD *)v16 + 2) = 0LL;
    *((_OWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_QWORD *)v16 + 6) = 16LL;
    *((_QWORD *)v16 + 4) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 3) = 32LL;
    v17 = *((_QWORD *)v16 + 3);
    pusResult = 0LL;
    if ( !is_mul_ok(0LL, v17) )
    {
      matched = -2147483637;
LABEL_31:
      v21 = (void *)*((_QWORD *)v16 + 7);
      if ( v21 )
        ExFreePoolWithTag(v21, 0x72615452u);
      *((_OWORD *)v16 + 1) = 0LL;
      *((_OWORD *)v16 + 2) = 0LL;
      *((_OWORD *)v16 + 3) = 0LL;
      AslLogCallPrintf(1LL);
      goto LABEL_41;
    }
    pusResult = 0LL;
    v18 = 16 * v17;
    if ( !is_mul_ok(0x10uLL, v17) )
    {
      matched = -2147483637;
      goto LABEL_31;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v17, 0x72615452u);
    v20 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v18);
    if ( !v20 )
    {
      matched = -2147024882;
      goto LABEL_31;
    }
    *((_QWORD *)v16 + 7) = v20;
    *((_QWORD *)v16 + 5) = 16LL;
    RtlInitUnicodeString(&SourceString, *((PCWSTR *)v16 + 1));
    matched = AslpPathWildcardAllocMatchNode(&v45, &SourceString, 0LL, 0);
    if ( matched < 0 )
      goto LABEL_41;
    v22 = *((_QWORD *)v16 + 4);
    v23 = *((_QWORD *)v16 + 5);
    *(_QWORD *)&SourceString.Length = v22;
    if ( v22 < v23 )
      goto LABEL_57;
    v24 = v22 + 1;
    if ( v22 + 1 <= v23 )
    {
      matched = -2147024809;
      goto LABEL_41;
    }
    v25 = *((_QWORD *)v16 + 6) - 1LL;
    v26 = v25 + v24;
    if ( v25 + v24 < v24
      || (v27 = *((_QWORD *)v16 + 3), v28 = v26 & ~v25, pusResult = v23 * v27, !is_mul_ok(v23, v27))
      || (Src = 0LL, v29 = v28 * v27, !is_mul_ok(v28, v27)) )
    {
LABEL_40:
      matched = -2147483637;
      goto LABEL_41;
    }
    Src = (void *)*((_QWORD *)v16 + 7);
    v30 = v28 * v27;
    if ( Src )
    {
      v33 = ExAllocatePoolWithTag(PagedPool, v30, 0x72615452u);
      v32 = v33;
      if ( v33 )
      {
        memset(v33, 0, v29);
        v34 = pusResult;
        if ( pusResult >= v29 )
          v34 = v29;
        memmove(v32, Src, v34);
        ExFreePoolWithTag(Src, 0x72615452u);
        goto LABEL_56;
      }
    }
    else
    {
      v31 = ExAllocatePoolWithTag(PagedPool, v30, 0x72615452u);
      v32 = v31;
      if ( v31 )
      {
        memset(v31, 0, v29);
LABEL_56:
        v22 = *(_QWORD *)&SourceString.Length;
        v6 = pszDest;
        *((_QWORD *)v16 + 5) = v28;
        *((_QWORD *)v16 + 7) = v32;
LABEL_57:
        v36 = v22;
        v35 = *((unsigned __int64 *)v16 + 3) * (unsigned __int128)v22;
        v37 = v35;
        if ( is_mul_ok(*((_QWORD *)v16 + 3), v36) )
        {
          v38 = *((_QWORD *)v16 + 7);
          v39 = (UNICODE_STRING *)(v38 + v37);
          if ( (unsigned __int64)v39 >= v38 )
          {
            v40 = v45;
            *a4 = v16;
            *v39 = v40;
            v39[1] = v46;
            ++*((_QWORD *)v16 + 4);
            v45 = 0LL;
            v46 = 0LL;
            matched = AslPathWildcardFindNext(v6, *((_QWORD *)&v35 + 1), v16);
            goto LABEL_42;
          }
        }
        goto LABEL_40;
      }
    }
    matched = -2147024882;
    goto LABEL_41;
  }
  matched = -1073741801;
LABEL_9:
  AslLogCallPrintf(1LL);
LABEL_42:
  RtlFreeUnicodeString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v41);
    AslpPathWildcardFreeMatchNode(&v45);
    *a4 = 0LL;
  }
  return (unsigned int)matched;
}
