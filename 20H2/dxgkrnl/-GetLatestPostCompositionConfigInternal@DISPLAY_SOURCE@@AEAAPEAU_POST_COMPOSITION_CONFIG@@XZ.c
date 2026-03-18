/*
 * XREFs of ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C00DE418
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00EDCD8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C020FBFC (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0211A14 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C02131AC (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0213BF4 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C00DE450 (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 */

struct _POST_COMPOSITION_CONFIG *__fastcall DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(
        DISPLAY_SOURCE *this)
{
  int *v1; // rdi

  v1 = (int *)((char *)this + 2800);
  if ( IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2800)) )
    return 0LL;
  else
    return (DISPLAY_SOURCE *)((char *)this + 36 * *v1 + 2808);
}
