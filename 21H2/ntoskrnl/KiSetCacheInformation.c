/*
 * XREFs of KiSetCacheInformation @ 0x14099F66C
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     KiSetCacheInformationIntel @ 0x14099F75C (KiSetCacheInformationIntel.c)
 *     KiSetCacheInformationAmd @ 0x1409B086C (KiSetCacheInformationAmd.c)
 */

__int64 KiSetCacheInformation()
{
  KPCR *Pcr; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 CpuVendor; // al
  __int64 result; // rax
  unsigned int v4; // esi
  _CACHE_DESCRIPTOR *Cache; // r8
  unsigned int i; // r10d
  unsigned __int8 Associativity; // r9

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 1 )
  {
    result = KiSetCacheInformationAmd();
  }
  else
  {
    if ( (unsigned __int8)(CpuVendor - 2) > 1u )
      KeBugCheck(0x5Du);
    result = KiSetCacheInformationIntel();
  }
  v4 = 0;
  Cache = CurrentPrcb->Cache;
  Pcr->SecondLevelCacheSize = 0;
  for ( i = 0; i < CurrentPrcb->CacheCount; ++i )
  {
    if ( Cache->Level >= 2u && (Cache->Type & 0xFFFFFFFD) == 0 )
    {
      Associativity = Cache->Associativity;
      if ( Associativity == 0xFF )
        Associativity = 16;
      if ( Associativity && Cache->Size / Associativity > v4 )
      {
        v4 = Cache->Size / Associativity;
        Pcr->SecondLevelCacheSize = Cache->Size;
        Pcr->SecondLevelCacheAssociativity = Associativity;
      }
      if ( Cache->LineSize > (unsigned int)KeLargestCacheLine )
        KeLargestCacheLine = Cache->LineSize;
      result = Cache->Size;
      if ( (unsigned int)result > KiLargestCacheSize )
        KiLargestCacheSize = Cache->Size;
    }
    ++Cache;
  }
  return result;
}
