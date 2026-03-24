/*
 * XREFs of HalInitializeProcessor @ 0x1403ADB10
 * Callers:
 *     KiInitializeBootStructures @ 0x14099C160 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099C0C8 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
