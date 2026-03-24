/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x140519B60
 * Callers:
 *     HalpGetCacheCoherency @ 0x140764CFC (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
