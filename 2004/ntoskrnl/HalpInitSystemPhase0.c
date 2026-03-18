/*
 * XREFs of HalpInitSystemPhase0 @ 0x140A710D8
 * Callers:
 *     HalInitSystem @ 0x1409986F0 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140998768 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1)
{
  return (int)HalpInitSystemHelper(7u, 16, a1) >= 0;
}
