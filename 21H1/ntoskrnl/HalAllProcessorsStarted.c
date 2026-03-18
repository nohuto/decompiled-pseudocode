/*
 * XREFs of HalAllProcessorsStarted @ 0x140A70200
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140997708 (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22, 0LL) >= 0;
}
