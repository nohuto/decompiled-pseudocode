/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x140519DA0
 * Callers:
 *     HalpGetCacheCoherency @ 0x140764EBC (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
