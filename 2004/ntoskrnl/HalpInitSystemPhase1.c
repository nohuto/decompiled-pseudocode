/*
 * XREFs of HalpInitSystemPhase1 @ 0x14099872C
 * Callers:
 *     HalInitSystem @ 0x1409986F0 (HalInitSystem.c)
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140998768 (HalpInitSystemHelper.c)
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
