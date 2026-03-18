/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x140518020
 * Callers:
 *     HalpGetCacheCoherency @ 0x140761A2C (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
