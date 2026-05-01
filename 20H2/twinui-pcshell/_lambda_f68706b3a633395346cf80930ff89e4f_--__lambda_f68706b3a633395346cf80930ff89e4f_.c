/*
 * XREFs of _lambda_f68706b3a633395346cf80930ff89e4f_::__lambda_f68706b3a633395346cf80930ff89e4f_ @ 0x180382758
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___::_scalar_deleting_destructor_ @ 0x180382B30 (CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___--_scalar_deleting_dest.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x18038332C (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_f68706b3a633395346cf80930ff89e4f_::__lambda_f68706b3a633395346cf80930ff89e4f_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 1);
}
