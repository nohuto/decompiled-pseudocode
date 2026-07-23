/*
 * XREFs of HalInitializeProcessor @ 0x1403ADC60
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099D0C8 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
