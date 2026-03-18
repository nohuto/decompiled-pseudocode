/*
 * XREFs of KiSetCacheInformation @ 0x140A59724
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KiSetCacheInformationIntel @ 0x140A59810 (KiSetCacheInformationIntel.c)
 *     KiSetCacheInformationAmd @ 0x140A69A2C (KiSetCacheInformationAmd.c)
 */

__int64 KiSetCacheInformation()
{
  KPCR *Pcr; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 CpuVendor; // al
  __int64 result; // rax
  unsigned int v4; // esi
  _CACHE_DESCRIPTOR *Cache; // r8
  int v6; // r10d
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
  v6 = 0;
  if ( CurrentPrcb->CacheCount )
  {
    while ( Cache->Level < 2u || (Cache->Type & 0xFFFFFFFD) != 0 )
    {
LABEL_15:
      ++Cache;
      if ( ++v6 >= CurrentPrcb->CacheCount )
        return result;
    }
    Associativity = Cache->Associativity;
    if ( Associativity == 0xFF )
    {
      Associativity = 16;
    }
    else if ( !Associativity )
    {
LABEL_11:
      if ( Cache->LineSize > (unsigned int)KeLargestCacheLine )
        KeLargestCacheLine = Cache->LineSize;
      result = Cache->Size;
      if ( (unsigned int)result > KiLargestCacheSize )
        KiLargestCacheSize = Cache->Size;
      goto LABEL_15;
    }
    if ( Cache->Size / Associativity > v4 )
    {
      v4 = Cache->Size / Associativity;
      Pcr->SecondLevelCacheSize = Cache->Size;
      Pcr->SecondLevelCacheAssociativity = Associativity;
    }
    goto LABEL_11;
  }
  return result;
}
