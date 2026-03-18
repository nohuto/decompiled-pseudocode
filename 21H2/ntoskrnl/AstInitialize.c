/*
 * XREFs of AstInitialize @ 0x140B30C68
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     AstInitializeBloomFilter @ 0x140864034 (AstInitializeBloomFilter.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 AstInitialize()
{
  __int64 Pool2; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  Pool2 = ExAllocatePool2(256LL, 0x1000uLL, 0x6E446341u);
  if ( !Pool2 )
    return 3221225495LL;
  AstInitializeBloomFilter(v2, v1, Pool2);
  return 0LL;
}
