/*
 * XREFs of ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0035870 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     NtUserCreateWindowEx @ 0x1C00B92A0 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     NtUserThunkedMenuInfo @ 0x1C01170B0 (NtUserThunkedMenuInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FA570 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C02039A0 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(__int64 a1)
{
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(a1);
}
