/*
 * XREFs of HalAllProcessorsStarted @ 0x140AFB130
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A56C48 (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22, 0LL) >= 0;
}
