/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403F159C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x1409A255C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

ULONG_PTR KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return (KeFeatureBits >> 53) & 1;
}
