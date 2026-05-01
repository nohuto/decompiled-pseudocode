/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewClearPersistedStateRequestedEventArgs____WindowManagerBridge___const_&_long_(__cdecl_WindowManagerBridge::_)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewClearPersistedStateRequestedEventArgs__)__::_1_::dtor$0 @ 0x1802D4F03
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180137300 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewClearPersistedStateRequestedEventArgs____WindowManagerBridge___const___long____cdecl_WindowManagerBridge::___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewClearPersistedStateRequestedEventArgs_____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
