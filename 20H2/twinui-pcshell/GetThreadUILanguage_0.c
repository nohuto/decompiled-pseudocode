/*
 * XREFs of GetThreadUILanguage_0 @ 0x18008E5A6
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180029E18 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x180395DA0 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 *     _lambda_a818a4d1196700db3f726f95e02b7ab7_::operator() @ 0x1803A0244 (_lambda_a818a4d1196700db3f726f95e02b7ab7_--operator().c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1803A14E4 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x1803A6FF8 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1803A7FF0 (-_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@M.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1803A8C48 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1803AE8D0 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 *     ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1803AEAC0 (-v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@.c)
 *     ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x1803B4290 (-Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1803B6070 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1803B7660 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x1803BA470 (-v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x1803C0CB0 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18042F6C8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LANGID __stdcall GetThreadUILanguage_0()
{
  return GetThreadUILanguage();
}
