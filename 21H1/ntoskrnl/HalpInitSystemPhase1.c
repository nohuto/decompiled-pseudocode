/*
 * XREFs of HalpInitSystemPhase1 @ 0x1409976CC
 * Callers:
 *     HalInitSystem @ 0x140997690 (HalInitSystem.c)
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140997708 (HalpInitSystemHelper.c)
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
