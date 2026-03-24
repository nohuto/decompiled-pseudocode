/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x1409F1834
 * Callers:
 *     BgpTxtRegionSize @ 0x14039BCE8 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x14039BD48 (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
