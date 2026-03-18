/*
 * XREFs of BgpGxMarkClean @ 0x14032342C
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x1409EE92C (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1409F463C (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
