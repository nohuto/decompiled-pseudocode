/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x140268B50
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x140529428 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuInitializeDmarPageTable @ 0x14052995C (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x140529AF8 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x140529F08 (HalpIommuMapLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x14052A328 (HalpIommuUnmapLogicalRange.c)
 *     IvtInitializeIdentityMappings @ 0x14052EC78 (IvtInitializeIdentityMappings.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     KiFlushCacheLines @ 0x140424FA0 (KiFlushCacheLines.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v3; // rdx
  __int64 CFlushSize; // r8
  char *v5; // rcx

  if ( a2 >= KiLargestCacheSize )
  {
    LOBYTE(CurrentPrcb) = KeInvalidateAllCaches();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = a1 + a2;
    CFlushSize = CurrentPrcb->CFlushSize;
    v5 = (char *)(a1 & ~(CFlushSize - 1));
    if ( _bittest64(&KeFeatureBits, 0x23u) )
    {
      LOBYTE(CurrentPrcb) = KiFlushCacheLines(v5, (~(CFlushSize - 1) & (CFlushSize + v3 - 1)) - (_QWORD)v5);
    }
    else
    {
      while ( (unsigned __int64)v5 < v3 )
      {
        _mm_clflush(v5);
        v5 += CFlushSize;
      }
    }
  }
  return (char)CurrentPrcb;
}
