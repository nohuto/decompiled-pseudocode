/*
 * XREFs of HalpInitSystemPhase1 @ 0x14099C08C
 * Callers:
 *     HalInitSystem @ 0x14099C050 (HalInitSystem.c)
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099C0C8 (HalpInitSystemHelper.c)
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
