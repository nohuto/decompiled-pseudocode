/*
 * XREFs of PiUpdateDriverDBCache @ 0x14076950C
 * Callers:
 *     PiIsDriverBlocked @ 0x140769384 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402E5690 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
 *     RtlNumberGenericTableElementsAvl @ 0x1402FEBE0 (RtlNumberGenericTableElementsAvl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403CFCC0 (wcsrchr.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PiUpdateDriverDBCache(__int64 a1, void *a2, __int64 a3, int a4, __int128 *a5)
{
  _QWORD *result; // rax
  _QWORD *v8; // r14
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int128 v14; // xmm0
  const wchar_t *v15; // rcx
  wchar_t *v16; // rax
  _WORD *v17; // rbx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  void *v22; // rbx
  __int128 Buffer; // [rsp+20h] [rbp-40h] BYREF
  __int128 v24; // [rsp+30h] [rbp-30h]
  _BYTE v25[24]; // [rsp+40h] [rbp-20h] BYREF

  Buffer = 0LL;
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  result = RtlImageNtHeader(a2);
  v8 = result;
  if ( !result )
    return result;
  PiDDBCacheTable.TableContext = (void *)1;
  v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
  if ( v9 )
    v10 = v9 + 1;
  else
    v10 = *(wchar_t **)(a1 + 8);
  v11 = -1LL;
  *((_QWORD *)&v24 + 1) = v10;
  v12 = -1LL;
  do
    ++v12;
  while ( v10[v12] );
  LOWORD(v24) = 2 * v12;
  WORD1(v24) = 2 * v12;
  v13 = RtlLookupElementGenericTableAvl(&PiDDBCacheTable, &Buffer);
  if ( v13 )
  {
    v20 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
      goto LABEL_26;
    v21 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v21 != v13 )
      goto LABEL_26;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  else
  {
    if ( RtlNumberGenericTableElementsAvl(&PiDDBCacheTable) < 0x100 )
      goto LABEL_8;
    v13 = PiDDBCacheList;
    v19 = *(_QWORD *)PiDDBCacheList;
    if ( *((PVOID **)PiDDBCacheList + 1) != &PiDDBCacheList || *(PVOID *)(v19 + 8) != PiDDBCacheList )
      goto LABEL_26;
    PiDDBCacheList = *(PVOID *)PiDDBCacheList;
    *(_QWORD *)(v19 + 8) = &PiDDBCacheList;
  }
  if ( v13 )
  {
    v22 = (void *)v13[3];
    RtlDeleteElementGenericTableAvl(&PiDDBCacheTable, v13);
    ExFreePoolWithTag(v22, 0);
  }
LABEL_8:
  v14 = *a5;
  v15 = *(const wchar_t **)(a1 + 8);
  *(_DWORD *)&v25[4] = a4;
  *(_OWORD *)&v25[8] = v14;
  *(_DWORD *)v25 = *((_DWORD *)v8 + 2);
  v16 = wcsrchr(v15, 0x5Cu);
  if ( v16 )
    v17 = v16 + 1;
  else
    v17 = *(_WORD **)(a1 + 8);
  do
    ++v11;
  while ( v17[v11] );
  WORD1(v24) = 2 * v11;
  LOWORD(v24) = 2 * v11;
  result = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(2 * v11), 0x20207050u);
  *((_QWORD *)&v24 + 1) = result;
  if ( result )
  {
    memmove(result, v17, (unsigned __int16)v24);
    result = RtlInsertElementGenericTableAvl(&PiDDBCacheTable, &Buffer, 0x38u, 0LL);
    if ( result )
    {
      v18 = (_QWORD *)qword_140D2DC28;
      if ( *(PVOID **)qword_140D2DC28 == &PiDDBCacheList )
      {
        *result = &PiDDBCacheList;
        result[1] = v18;
        *v18 = result;
        qword_140D2DC28 = (__int64)result;
        return result;
      }
LABEL_26:
      __fastfail(3u);
    }
  }
  return result;
}
