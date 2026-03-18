/*
 * XREFs of ?MarkFullDirty@CWICBitmapRealization@@UEAAXXZ @ 0x180261780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWICBitmapRealization::MarkFullDirty(CWICBitmapRealization *this)
{
  CD2DBitmapCache::MarkFullInvalid((CWICBitmapRealization *)((char *)this - 80));
}
