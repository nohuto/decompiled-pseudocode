/*
 * XREFs of _wcsicmp @ 0x18008DE84
 * Callers:
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1803AAA0C (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  return _o__wcsicmp(String1, String2);
}
