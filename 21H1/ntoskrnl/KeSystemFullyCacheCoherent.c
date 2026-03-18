/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405140A0
 * Callers:
 *     HalpGetCacheCoherency @ 0x14074E7BC (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
