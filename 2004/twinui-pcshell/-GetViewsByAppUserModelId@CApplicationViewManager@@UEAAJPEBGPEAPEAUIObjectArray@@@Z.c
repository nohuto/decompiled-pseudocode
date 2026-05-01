/*
 * XREFs of ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18018F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x18018EAD0 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewsByAppUserModelId(
        RTL_SRWLOCK *this,
        GUID *a2,
        struct IObjectArray **a3)
{
  return CApplicationViewManager::GetApplicationViewsById(this - 17, a2, -1LL, 0, a3);
}
