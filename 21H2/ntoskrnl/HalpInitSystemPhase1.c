/*
 * XREFs of HalpInitSystemPhase1 @ 0x140A56C0C
 * Callers:
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A56C48 (HalpInitSystemHelper.c)
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
