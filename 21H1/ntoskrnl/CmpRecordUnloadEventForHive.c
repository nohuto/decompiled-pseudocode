/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x1406593A0
 * Callers:
 *     CmpFreezeHive @ 0x140659420 (CmpFreezeHive.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  PVOID PoolWithTag; // rdi
  __int64 v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(*(_DWORD *)(a1 + 2912) + 1), 0x76456D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = *(unsigned int *)(a1 + 2912);
  if ( (_DWORD)v5 )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 2920), 8 * v5);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2920), 0);
    v5 = *(unsigned int *)(a1 + 2912);
  }
  *(_QWORD *)(a1 + 2920) = PoolWithTag;
  *((_QWORD *)PoolWithTag + v5) = a2;
  ++*(_DWORD *)(a1 + 2912);
  ObfReferenceObject(a2);
  return 0LL;
}
