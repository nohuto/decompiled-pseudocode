/*
 * XREFs of ?Reset@GridLayout@@QEAAXXZ @ 0x1803A77CC
 * Callers:
 *     ?ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1803A6BB0 (-ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z.c)
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1803A7680 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?ResetRowHeight@CSwitchItemGrid@@UEAAXXZ @ 0x1803A7800 (-ResetRowHeight@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1803A7BA0 (-SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z.c)
 *     ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803A7DD0 (-SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimati.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1803B75D4 (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GridLayout::Reset(GridLayout *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::RemoveAll((__int64)this + 48);
}
