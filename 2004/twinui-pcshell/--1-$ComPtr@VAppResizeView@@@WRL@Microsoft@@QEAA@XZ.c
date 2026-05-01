/*
 * XREFs of ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x1804124B8
 * Callers:
 *     _AppResizeView::Hide_::_1_::dtor$0 @ 0x180412B00 (_AppResizeView--Hide_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppResizeView>::~ComPtr<AppResizeView>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(a1);
}
