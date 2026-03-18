/*
 * XREFs of HalInitializeProcessor @ 0x1403A9870
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140997708 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
