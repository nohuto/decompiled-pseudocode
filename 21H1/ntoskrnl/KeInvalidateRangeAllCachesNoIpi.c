/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x1403533F0
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D62E8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404D67EC (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404D6974 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404D6D5C (HalpIommuMapLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404D717C (HalpIommuUnmapLogicalRange.c)
 *     IvtInitializeIdentityMappings @ 0x1404DAD40 (IvtInitializeIdentityMappings.c)
 *     KeInvalidateRangeAllCaches @ 0x140515630 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     KiFlushCacheLines @ 0x1403F9DC0 (KiFlushCacheLines.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx
  __int64 CFlushSize; // r8
  char *v4; // rax

  if ( a2 >= KiLargestCacheSize )
  {
    LOBYTE(v4) = KeInvalidateAllCaches();
  }
  else
  {
    v2 = a1 + a2;
    CFlushSize = KeGetCurrentPrcb()->CFlushSize;
    v4 = (char *)(a1 & ~(CFlushSize - 1));
    if ( (KeFeatureBits & 0x800000000LL) != 0 )
    {
      LOBYTE(v4) = KiFlushCacheLines(a1 & ~(CFlushSize - 1), (~(CFlushSize - 1) & (CFlushSize + v2 - 1)) - (_QWORD)v4);
    }
    else
    {
      for ( ; (unsigned __int64)v4 < v2; v4 += CFlushSize )
        _mm_clflush(v4);
    }
  }
  return (char)v4;
}
