/*
 * XREFs of _GetDPIServerInfoForDpi@4 @ 0x91B76
 * Callers:
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 *     _InitProcessSystemDpi@4 @ 0x91A54 (_InitProcessSystemDpi@4.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _UpdateDpiMetricsCacheDPISERVERINFO@0 @ 0xDB010 (_UpdateDpiMetricsCacheDPISERVERINFO@0.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 *     ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F (-xxxMNGetBitmapSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     ?EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z @ 0x15501A (-EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z.c)
 */

int __thiscall GetDPIServerInfoForDpi(void *this)
{
  int DpiCacheSlot; // eax
  int v3; // esi
  struct tagDPISERVERINFO *v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h]

  if ( this == (void *)*(unsigned __int16 *)(_gpsi + 6242) )
    return GetSessionDpiServerInfo();
  if ( this == (void *)96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot((int)this);
  v3 = 92 * (DpiCacheSlot != -1 ? DpiCacheSlot : 0) + _gpsi;
  EnsureServerInfoForDpi(v4, v5);
  return v3 + 4564;
}
