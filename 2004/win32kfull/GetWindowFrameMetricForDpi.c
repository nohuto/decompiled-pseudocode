/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x1C00603AC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00633F4 (GetWindowNCMetrics.c)
 * Callees:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00607B4 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, unsigned int a2)
{
  unsigned int AppCompatFlags2; // eax
  int v4; // ecx

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, a2, AppCompatFlags2);
}
