/*
 * XREFs of __tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll @ 0x180090A59
 * Callers:
 *     __imp_load_DwmGetWindowAttribute @ 0x180090A4D (__imp_load_DwmGetWindowAttribute.c)
 *     __imp_load_DwmpEndTransitionRequest @ 0x180090AD8 (__imp_load_DwmpEndTransitionRequest.c)
 *     __imp_load_DwmpEndAnimationClock @ 0x180090AEA (__imp_load_DwmpEndAnimationClock.c)
 *     __imp_load_DwmpBeginTransitionRequest @ 0x180090AFC (__imp_load_DwmpBeginTransitionRequest.c)
 *     __imp_load_DwmpTransitionWindow @ 0x180090B0E (__imp_load_DwmpTransitionWindow.c)
 *     __imp_load_DwmpTransitionWindowWithRects @ 0x180090B20 (__imp_load_DwmpTransitionWindowWithRects.c)
 *     __imp_load_DwmpBeginTransitionRequestWithGUID @ 0x180090B32 (__imp_load_DwmpBeginTransitionRequestWithGUID.c)
 *     __imp_load_DwmUnregisterThumbnail @ 0x180090BD0 (__imp_load_DwmUnregisterThumbnail.c)
 *     __imp_load_DwmpCreateSharedThumbnailVisual @ 0x180090BE2 (__imp_load_DwmpCreateSharedThumbnailVisual.c)
 *     __imp_load_DwmSetWindowAttribute @ 0x180090C48 (__imp_load_DwmSetWindowAttribute.c)
 *     __imp_load_DwmpCreateAnimationClock @ 0x180090C5A (__imp_load_DwmpCreateAnimationClock.c)
 *     __imp_load_DwmpBeginAnimationClock @ 0x180090C6C (__imp_load_DwmpBeginAnimationClock.c)
 *     __imp_load_DwmpUpdateAccentBlurRect @ 0x180090C90 (__imp_load_DwmpUpdateAccentBlurRect.c)
 *     __imp_load_DwmpQueryWindowThumbnailSourceSize @ 0x180090CA2 (__imp_load_DwmpQueryWindowThumbnailSourceSize.c)
 *     __imp_load_DwmpTransitionBitmap @ 0x180090CB4 (__imp_load_DwmpTransitionBitmap.c)
 *     __imp_load_DwmShowContact @ 0x180090CC6 (__imp_load_DwmShowContact.c)
 *     __imp_load_DwmInvalidateIconicBitmaps @ 0x180090CD8 (__imp_load_DwmInvalidateIconicBitmaps.c)
 *     __imp_load_DwmSetIconicThumbnail @ 0x180090CEA (__imp_load_DwmSetIconicThumbnail.c)
 *     __imp_load_DwmSetIconicLivePreviewBitmap @ 0x180090CFC (__imp_load_DwmSetIconicLivePreviewBitmap.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088920 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dwmapi_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
