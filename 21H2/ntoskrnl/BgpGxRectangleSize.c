/*
 * XREFs of BgpGxRectangleSize @ 0x14039BE98
 * Callers:
 *     AnFwConfigureProgressResources @ 0x1409F2744 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x1409F2834 (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
