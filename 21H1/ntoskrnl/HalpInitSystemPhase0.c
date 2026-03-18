/*
 * XREFs of HalpInitSystemPhase0 @ 0x140A702C8
 * Callers:
 *     HalInitSystem @ 0x140997690 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140997708 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1)
{
  return (int)HalpInitSystemHelper(7u, 16, a1) >= 0;
}
