/*
 * XREFs of PiDmListInitEnumCallback @ 0x140790640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     PiDmListAddObject @ 0x140735694 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDmListInitEnumCallback(ULONG_PTR a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  int ObjectProperty; // edi
  wchar_t *v10; // rdx
  int v11; // eax
  unsigned int *v12; // r8
  PVOID v13; // rsi
  void *v15; // rcx
  PVOID PoolWithTag; // rax
  int v17; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  wchar_t v20[40]; // [rsp+70h] [rbp-29h] BYREF

  v18 = 0;
  P = 0LL;
  v3 = 1024;
  v17 = 1024;
  *a3 = 0;
  while ( 1 )
  {
    if ( v3 > *(_DWORD *)(a2 + 8) )
    {
      v15 = *(void **)a2;
      *(_DWORD *)(a2 + 8) = v3;
      if ( v15 )
        ExFreePoolWithTag(v15, 0x5A706E50u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 8), 0x5A706E50u);
      *(_QWORD *)a2 = PoolWithTag;
      if ( !PoolWithTag )
        break;
    }
    v6 = *(int *)(a2 + 12);
    v7 = *(unsigned int *)(a1 + 28);
    v8 = *(_QWORD *)(a1 + 16);
    v17 = 0;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v8,
                       v7,
                       0LL,
                       0LL,
                       PiDmListDefs[5 * v6 + 4],
                       (__int64)&v18,
                       *(_QWORD *)a2,
                       *(_DWORD *)(a2 + 8),
                       (__int64)&v17,
                       0);
    if ( ObjectProperty != -1073741789 )
      goto LABEL_4;
    v3 = v17;
  }
  ObjectProperty = -1073741670;
LABEL_4:
  if ( ObjectProperty == -1073741275 )
  {
    return 0;
  }
  else if ( ObjectProperty >= 0 )
  {
    if ( v18 == 13 )
    {
      PnpStringFromGuid(*(int **)a2, v20);
      v10 = v20;
    }
    else
    {
      if ( v18 != 18 )
        return (unsigned int)ObjectProperty;
      v10 = *(wchar_t **)a2;
    }
    v11 = PiDmAddCacheReferenceForObject(PiDmListDefs[5 * *(int *)(a2 + 12)], v10, (volatile signed __int32 **)&P);
    v13 = P;
    ObjectProperty = v11;
    if ( v11 >= 0 )
      PiDmListAddObject(*(_DWORD *)(a2 + 12), (ULONG_PTR)P, a1, 0LL);
    if ( v13 )
    {
      PiDmRemoveCacheReferenceForObject(*((_DWORD *)v13 + 7), *((_QWORD *)v13 + 2), v12);
      PiDmObjectRelease((unsigned int *)v13);
    }
  }
  return (unsigned int)ObjectProperty;
}
