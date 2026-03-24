/*
 * XREFs of MiEnumerateSlabAllocators @ 0x1402B8CCC
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 *     MiFreeSlabPage @ 0x14037BF74 (MiFreeSlabPage.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140552E84 (MiGetSlabAllocatorStandbyList.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MmUpdateSlabRangeProtection @ 0x140A929A8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiEnumerateSlabAllocators(
        __int64 a1,
        unsigned int (__fastcall *a2)(__int64, unsigned __int64, __int64),
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi

  v3 = a1 + 5184;
  v5 = a1 + 6144;
  while ( 1 )
  {
    if ( v3 >= v5 )
      return 0LL;
    if ( a2(a1, v3, a3) )
      break;
    v3 += 120LL;
  }
  return 1LL;
}
