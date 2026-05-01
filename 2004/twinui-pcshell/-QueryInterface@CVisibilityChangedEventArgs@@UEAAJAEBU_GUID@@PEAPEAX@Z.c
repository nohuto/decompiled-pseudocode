/*
 * XREFs of ?QueryInterface@CVisibilityChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088420
 * Callers:
 *     ?QueryInterface@CVisibilityChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1EF0 (-QueryInterface@CVisibilityChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVisibilityChangedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1F00 (-QueryInterface@CVisibilityChangedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVisibilityChangedEventArgs::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
