/*
 * XREFs of ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803A6590
 * Callers:
 *     ?SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1803A8350 (-SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1803A8B90 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1803A9508 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1803B51BC (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 *     ?ScrollCurrentDesktopIntoView@CVirtualDesktopContainerElement@@UEAAXXZ @ 0x1803C1170 (-ScrollCurrentDesktopIntoView@CVirtualDesktopContainerElement@@UEAAXXZ.c)
 *     ?ScrollIntoView@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1803C1260 (-ScrollIntoView@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x1803C1570 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423,
           a2);
}
