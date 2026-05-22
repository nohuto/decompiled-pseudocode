/*
 * XREFs of ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x1801176F0
 * Callers:
 *     ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x18004BFB0 (-Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x18004BFC0 (-Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
