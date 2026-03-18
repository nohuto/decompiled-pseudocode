/*
 * XREFs of HalInitializeProcessor @ 0x1403BFB00
 * Callers:
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A56C48 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
