/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C00C4DD4
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0033394 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00C966C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  unsigned int AppCompatFlags2; // eax

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2);
}
