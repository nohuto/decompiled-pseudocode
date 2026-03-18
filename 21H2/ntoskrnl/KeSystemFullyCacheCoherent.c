/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x14056F770
 * Callers:
 *     HalpGetCacheCoherency @ 0x140846200 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
