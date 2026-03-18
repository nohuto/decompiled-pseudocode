/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140AABA50
 * Callers:
 *     BgpTxtRegionSize @ 0x1403A7A98 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x1403A7AF8 (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
