/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C0061810
 * Callers:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C000AEC0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetProcessDpiServerInfo @ 0x1C0060864 (GetProcessDpiServerInfo.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     InitProcessSystemDpi @ 0x1C0061490 (InitProcessSystemDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0063704 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetScaledLogFontForDpi @ 0x1C0064EBC (GetScaledLogFontForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA9F0 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01EA51C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1)
{
  int DpiCacheSlot; // eax
  int v3; // r11d
  int v4; // ecx
  struct tagDPISERVERINFO *v5; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v4 = 0;
  if ( DpiCacheSlot != -1 )
    v4 = DpiCacheSlot;
  v5 = (struct tagDPISERVERINFO *)(gpsi + 104 * (v4 + 49LL));
  EnsureServerInfoForDpi(v5, v3);
  return (__int64)v5;
}
