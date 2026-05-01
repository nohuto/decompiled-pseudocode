/*
 * XREFs of ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1803A4E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::OnDisplayChange(
        CMultitaskingViewControllerBase *this,
        struct IMultitaskingViewFrame *a2)
{
  CMultitaskingViewControllerBase::_DismissView((CMultitaskingViewControllerBase *)((char *)this - 8));
}
