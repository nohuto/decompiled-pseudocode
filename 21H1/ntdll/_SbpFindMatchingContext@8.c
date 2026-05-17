/*
 * XREFs of _SbpFindMatchingContext@8 @ 0x4B2B8620
 * Callers:
 *     _SbpUpdateCache@16 @ 0x4B2B8498 (_SbpUpdateCache@16.c)
 *     _SbpUpdateCacheWithCurrentImpl@8 @ 0x4B3860EA (_SbpUpdateCacheWithCurrentImpl@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __fastcall SbpFindMatchingContext(void *Buf2, int a2)
{
  char *v3; // edi
  unsigned int v4; // esi

  v3 = (char *)(a2 + 32);
  v4 = 0;
  while ( memcmp(v3, Buf2, 0x10u) )
  {
    ++v4;
    v3 += 16;
    if ( v4 >= 4 )
      return 0;
  }
  return 1;
}
