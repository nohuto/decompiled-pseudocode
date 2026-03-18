/*
 * XREFs of HalpInitSystemPhase0 @ 0x140A772F8
 * Callers:
 *     HalInitSystem @ 0x14099E730 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099E7A8 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1)
{
  return (int)HalpInitSystemHelper(7u, 16, a1) >= 0;
}
