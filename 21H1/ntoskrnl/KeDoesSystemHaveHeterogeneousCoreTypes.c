/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403EC274
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x14099ACBC (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

ULONG_PTR KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return (KeFeatureBits >> 53) & 1;
}
