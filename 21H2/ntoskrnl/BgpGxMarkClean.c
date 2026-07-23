/*
 * XREFs of BgpGxMarkClean @ 0x14025220C
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x1409F292C (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1409F863C (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
