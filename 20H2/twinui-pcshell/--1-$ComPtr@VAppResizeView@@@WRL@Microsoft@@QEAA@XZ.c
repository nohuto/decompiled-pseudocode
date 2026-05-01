/*
 * XREFs of ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x180411B98
 * Callers:
 *     _AppResizeView::Hide_::_1_::dtor$0 @ 0x1804123C0 (_AppResizeView--Hide_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppResizeView>::~ComPtr<AppResizeView>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(a1);
}
