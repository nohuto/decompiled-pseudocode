/*
 * XREFs of ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18018FB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::SetViewPendingFocus(
        CApplicationViewManager *this,
        struct IApplicationView *a2)
{
  return CApplicationViewManager::SetViewInFocusHelper((__int64)this - 136, (__int64)a2, 1);
}
