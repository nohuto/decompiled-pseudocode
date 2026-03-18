/*
 * XREFs of HalInitializeProcessor @ 0x1403A5BA0
 * Callers:
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140998768 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
