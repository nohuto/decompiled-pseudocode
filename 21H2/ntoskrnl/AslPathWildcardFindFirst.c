/*
 * XREFs of AslPathWildcardFindFirst @ 0x140968CD4
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlUShortAdd @ 0x14023071C (RtlUShortAdd.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x14026D5E8 (RtlStringCbCopyNW.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     AslDoesFileExistNtPath @ 0x140967DBC (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x1409686FC (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x1409692A4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x14096A064 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14096A134 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x14096A180 (AslpPathWildcardMakeLeaves.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(NTSTRSAFE_PWSTR pszDest, size_t a2, const WCHAR *a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  WCHAR *v8; // r15
  int matched; // ebx
  __int64 v10; // rcx
  size_t v11; // rbx
  wchar_t *v12; // rax
  int Leaves; // eax
  __int64 v14; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  size_t v22; // rsi
  void *v23; // r14
  PVOID PoolWithTag; // rax
  void *v25; // rbx
  void *v26; // rcx
  unsigned __int64 v27; // r13
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // kr10_8
  size_t v34; // rsi
  void *v35; // r12
  void *v36; // rbx
  size_t v37; // rax
  bool v38; // sf
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  _DWORD *v41; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v44; // [rsp+58h] [rbp-28h] BYREF
  __int128 v45; // [rsp+68h] [rbp-18h]
  size_t pusResult; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v48; // [rsp+D8h] [rbp+58h]

  v48 = a4;
  pusResult = a2;
  v4 = a4;
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
  v44 = 0LL;
  v45 = 0LL;
  if ( !RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = -1073741801;
    goto LABEL_9;
  }
  matched = AslPathCleanUstr(&DestinationString.Length);
  if ( matched >= 0 )
  {
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched >= 0 )
    {
      v11 = (unsigned __int16)pusResult;
      v12 = (wchar_t *)AslAlloc(v10, (unsigned __int16)pusResult);
      v8 = v12;
      if ( !v12 )
      {
        matched = -1073741801;
        goto LABEL_74;
      }
      matched = RtlStringCbCopyNW(v12, v11, DestinationString.Buffer, DestinationString.Length);
      if ( matched >= 0 )
      {
        Leaves = AslpPathWildcardMakeLeaves(v8);
        if ( !Leaves )
        {
          matched = -1073741767;
          goto LABEL_9;
        }
        if ( Leaves == 1 )
        {
          Buffer = DestinationString.Buffer;
          *v4 = -1LL;
          if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
          {
            matched = -2147483642;
            goto LABEL_74;
          }
          matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
          if ( matched >= 0 )
          {
            matched = 0;
            goto LABEL_74;
          }
          goto LABEL_9;
        }
        v41 = AslAlloc(v14, 0x40uLL);
        v16 = v41;
        if ( !v41 )
        {
          matched = -1073741801;
LABEL_73:
          v4 = v48;
          goto LABEL_74;
        }
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
        v17 = *((_QWORD *)v16 + 6);
        v18 = v17 - 1;
        v19 = v17 + 7;
        if ( v19 < 8 )
        {
          matched = -2147483637;
          goto LABEL_42;
        }
        v20 = *((_QWORD *)v16 + 3);
        pusResult = 0LL;
        v21 = v19 & ~v18;
        if ( !is_mul_ok(0LL, v20) || (pusResult = 0LL, v22 = v21 * v20, !is_mul_ok(v21, v20)) )
        {
          matched = -2147483637;
          goto LABEL_39;
        }
        v23 = (void *)*((_QWORD *)v16 + 7);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21 * v20, 0x72615452u);
        v25 = PoolWithTag;
        if ( v23 )
        {
          if ( PoolWithTag )
            memset(PoolWithTag, 0, v22);
          if ( !v25 )
            goto LABEL_38;
          memmove(v25, v23, 0LL);
          ExFreePoolWithTag(v23, 0x72615452u);
        }
        else if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v22);
        }
        if ( v25 )
        {
          *((_QWORD *)v16 + 5) = v21;
          *((_QWORD *)v16 + 7) = v25;
          matched = 0;
          goto LABEL_39;
        }
LABEL_38:
        matched = -2147024882;
LABEL_39:
        if ( !matched )
        {
          matched = 0;
          goto LABEL_45;
        }
LABEL_42:
        v26 = (void *)*((_QWORD *)v16 + 7);
        if ( v26 )
          ExFreePoolWithTag(v26, 0x72615452u);
        *((_OWORD *)v16 + 1) = 0LL;
        *((_OWORD *)v16 + 2) = 0LL;
        *((_OWORD *)v16 + 3) = 0LL;
        AslLogCallPrintf(1LL);
LABEL_45:
        if ( matched < 0
          || (RtlInitUnicodeString(&SourceString, *((PCWSTR *)v16 + 1)),
              matched = AslpPathWildcardAllocMatchNode(&v44, &SourceString, 0LL, 0),
              matched < 0) )
        {
LABEL_46:
          AslLogCallPrintf(1LL);
          goto LABEL_73;
        }
        v27 = *((_QWORD *)v16 + 4);
        *((_QWORD *)&v28 + 1) = *((_QWORD *)v16 + 5);
        if ( v27 < *((_QWORD *)&v28 + 1) )
          goto LABEL_66;
        v29 = v27 + 1;
        if ( v27 + 1 <= *((_QWORD *)&v28 + 1) )
        {
          matched = -2147024809;
LABEL_70:
          v38 = matched < 0;
LABEL_71:
          if ( !v38 )
          {
            v44 = 0LL;
            *v48 = v16;
            v45 = 0LL;
            matched = AslPathWildcardFindNext(pszDest, *((_QWORD *)&v28 + 1), v16);
            goto LABEL_73;
          }
          goto LABEL_46;
        }
        v30 = *((_QWORD *)v16 + 6) - 1LL;
        *(_QWORD *)&v28 = v30 + v29;
        if ( v30 + v29 < v29 )
        {
LABEL_69:
          matched = -2147483637;
          goto LABEL_70;
        }
        v31 = *((_QWORD *)v16 + 3);
        v32 = v28 & ~v30;
        v33 = *((_QWORD *)v16 + 5);
        v28 = *((unsigned __int64 *)&v28 + 1) * (unsigned __int128)v31;
        pusResult = v28;
        if ( !is_mul_ok(v33, v31) || (v28 = v32 * (unsigned __int128)v31, v34 = v32 * v31, !is_mul_ok(v32, v31)) )
        {
          matched = -2147483637;
          goto LABEL_65;
        }
        v35 = (void *)*((_QWORD *)v16 + 7);
        *(_QWORD *)&v28 = ExAllocatePoolWithTag(PagedPool, v28, 0x72615452u);
        v36 = (void *)v28;
        if ( v35 )
        {
          if ( !(_QWORD)v28 )
            goto LABEL_64;
          memset((void *)v28, 0, v34);
          v37 = pusResult;
          if ( pusResult >= v34 )
            v37 = v34;
          memmove(v36, v35, v37);
          ExFreePoolWithTag(v35, 0x72615452u);
        }
        else if ( (_QWORD)v28 )
        {
          memset((void *)v28, 0, v34);
        }
        if ( v36 )
        {
          *((_QWORD *)v16 + 7) = v36;
          matched = 0;
          *((_QWORD *)v16 + 5) = v32;
          goto LABEL_65;
        }
LABEL_64:
        matched = -2147024882;
LABEL_65:
        v38 = matched < 0;
        if ( matched )
          goto LABEL_71;
LABEL_66:
        v28 = *((unsigned __int64 *)v16 + 3) * (unsigned __int128)v27;
        if ( is_mul_ok(*((_QWORD *)v16 + 3), v27) )
        {
          v39 = *((_QWORD *)v16 + 7);
          v40 = v39 + *((_QWORD *)v16 + 3) * v27;
          if ( v40 >= v39 )
          {
            matched = 0;
            *(UNICODE_STRING *)v40 = v44;
            *(_OWORD *)(v40 + 16) = v45;
            ++*((_QWORD *)v16 + 4);
            goto LABEL_70;
          }
        }
        goto LABEL_69;
      }
    }
  }
LABEL_9:
  AslLogCallPrintf(1LL);
LABEL_74:
  RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v41);
    AslpPathWildcardFreeMatchNode(&v44);
    *v4 = 0LL;
  }
  return (unsigned int)matched;
}
