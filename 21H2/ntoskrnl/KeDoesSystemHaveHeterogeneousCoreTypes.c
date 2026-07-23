/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403F2A5C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x1409A0CB0 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

ULONG_PTR KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return (KeFeatureBits >> 53) & 1;
}
