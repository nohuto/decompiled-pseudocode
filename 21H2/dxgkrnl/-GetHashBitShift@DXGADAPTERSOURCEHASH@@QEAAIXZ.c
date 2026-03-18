/*
 * XREFs of ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F208
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01B3CC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFA98 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitShift(DXGADAPTERSOURCEHASH *this)
{
  unsigned int v2; // edi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = 32 - *((_DWORD *)this + 17);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  return v2;
}
