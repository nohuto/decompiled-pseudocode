/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 * Callees:
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0032E2C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C006BBD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C006BC48 (GetMonitorRect.c)
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = GetMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi) )
  {
    GetMonitorRect(v8, a1);
    GreOffsetRgn(a2);
  }
  else
  {
    GreSetRectRgn(a2, 0);
  }
}
