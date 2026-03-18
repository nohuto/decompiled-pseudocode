/*
 * XREFs of MiInitializeCacheSizes @ 0x140A3F3BC
 * Callers:
 *     MiInitializeColors @ 0x140A3F334 (MiInitializeColors.c)
 * Callees:
 *     MiInitializeLargePageColorSizes @ 0x1403A8C20 (MiInitializeLargePageColorSizes.c)
 */

__int64 MiInitializeCacheSizes()
{
  unsigned int SecondLevelCacheSize; // r8d
  unsigned int SecondLevelCacheAssociativity; // eax
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140C4DCD8 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( (_BYTE)SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  if ( SecondLevelCacheSize )
  {
    _BitScanReverse(&v2, SecondLevelCacheSize);
    SecondLevelCacheSize = 1 << v2;
  }
  if ( SecondLevelCacheSize - 8 > 0xF8 )
  {
    if ( qword_140C52690 < 0x80000 )
      SecondLevelCacheSize = qword_140C52690 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140C4DCFC = SecondLevelCacheSize;
  dword_140C4DCF8 = SecondLevelCacheSize - 1;
  v3 = SecondLevelCacheSize >> 4;
  if ( (SecondLevelCacheSize & 0xF) != 0 )
    ++v3;
  if ( _BitScanReverse((unsigned int *)&v5, v3) )
    v3 = 1 << v5;
  dword_140C4DD88 = v3;
  MiInitializeLargePageColorSizes();
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_140C4DCDC = Cache->Size;
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_140C4DCDC < 0x4000 )
    dword_140C4DCDC = 0x4000;
  dword_140C4DD0C = 256;
  return result;
}
