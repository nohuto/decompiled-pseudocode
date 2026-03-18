/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800DB680
 * Callers:
 *     ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800DB480 (-IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800DB52C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x1802913AC (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802915C4 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPO.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802A61B4 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
