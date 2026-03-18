/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405146F0
 * Callers:
 *     HalpGetCacheCoherency @ 0x140752E4C (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
