/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C005F080 (NtUserThunkedMenuItemInfo.c)
 *     NtUserCreateWindowEx @ 0x1C00A6060 (NtUserCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00AECD0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserThunkedMenuInfo @ 0x1C0115B60 (NtUserThunkedMenuInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FB3E0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0204810 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = 0LL;
  return a1;
}
