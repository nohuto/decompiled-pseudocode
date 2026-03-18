/*
 * XREFs of BgpGxRectangleSize @ 0x1403A7AF8
 * Callers:
 *     AnFwConfigureProgressResources @ 0x140AAB930 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x140AABA50 (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
