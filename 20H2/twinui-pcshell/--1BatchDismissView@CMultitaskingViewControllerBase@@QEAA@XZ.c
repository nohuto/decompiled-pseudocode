/*
 * XREFs of ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803A48E8
 * Callers:
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1803A4B30 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 *     ?_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z @ 0x1803A53EC (-_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z.c)
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1803A55AC (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 * Callees:
 *     ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1803A5464 (-_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(
        CMultitaskingViewControllerBase **this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*this + 26, 0xFFFFFFFF) == 1 )
    CMultitaskingViewControllerBase::_CommitDismissView(*this);
}
