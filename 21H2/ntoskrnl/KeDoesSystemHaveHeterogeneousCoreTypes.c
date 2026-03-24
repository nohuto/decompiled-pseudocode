/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403F2A0C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x14099FD80 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

ULONG_PTR KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return (KeFeatureBits >> 53) & 1;
}
