/*
 * XREFs of HalpInitSystemPhase1 @ 0x14099E76C
 * Callers:
 *     HalInitSystem @ 0x14099E730 (HalInitSystem.c)
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099E7A8 (HalpInitSystemHelper.c)
 */

bool HalpInitSystemPhase1()
{
  __int64 v0; // rcx

  if ( KeGetPcr()->Prcb.Number )
    v0 = 19LL;
  else
    v0 = 17LL;
  return (int)HalpInitSystemHelper(v0) >= 0;
}
