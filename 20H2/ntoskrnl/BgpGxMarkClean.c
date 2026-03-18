/*
 * XREFs of BgpGxMarkClean @ 0x140331CFC
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x1409F492C (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1409FA63C (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
