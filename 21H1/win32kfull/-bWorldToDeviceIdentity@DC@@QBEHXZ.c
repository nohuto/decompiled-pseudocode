/*
 * XREFs of ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8 (-bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z.c)
 *     ?bCalcOrientation@MAPPER@@QAEHXZ @ 0x8AE80 (-bCalcOrientation@MAPPER@@QAEHXZ.c)
 *     ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A (-lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z.c)
 *     _GreGetCharWidthInfo@8 @ 0xC3E8C (_GreGetCharWidthInfo@8.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z @ 0x2099B6 (-ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z.c)
 *     ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772 (-bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DC::bWorldToDeviceIdentity(DC *this)
{
  return (*(_DWORD *)(*((_DWORD *)this + 255) + 340) & 0x802) == 2050;
}
