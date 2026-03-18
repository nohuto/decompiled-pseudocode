/*
 * XREFs of HalInitializeProcessor @ 0x1403A7FA0
 * Callers:
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099E7A8 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
