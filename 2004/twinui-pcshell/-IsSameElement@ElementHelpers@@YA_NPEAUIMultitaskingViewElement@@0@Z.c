/*
 * XREFs of ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18039A6D8
 * Callers:
 *     ?OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z @ 0x18039AD50 (-OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803A2594 (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A2C70 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1803A3D50 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1803A4060 (-SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A4AB8 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1803A7930 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1803AB580 (-RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x1803AD664 (-MapElementRectToAncestor@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U2.c)
 *     ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1803AE7A0 (-KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1803C08D0 (-ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableIt.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall ElementHelpers::IsSameElement(
        struct IUnknown *this,
        struct IUnknown *a2,
        struct IMultitaskingViewElement *a3)
{
  if ( this && a2 )
    return (unsigned int)SHIsSameObject(this, a2) != 0;
  else
    return this == a2;
}
