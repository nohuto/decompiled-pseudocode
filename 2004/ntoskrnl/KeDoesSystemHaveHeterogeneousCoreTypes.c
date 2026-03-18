/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403ED3AC
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x14099C45C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

ULONG_PTR KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return (KeFeatureBits >> 53) & 1;
}
