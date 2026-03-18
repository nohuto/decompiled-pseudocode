/*
 * XREFs of BgpGxRectangleSize @ 0x140398828
 * Callers:
 *     AnFwConfigureProgressResources @ 0x1409EE608 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x1409EE6F8 (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
