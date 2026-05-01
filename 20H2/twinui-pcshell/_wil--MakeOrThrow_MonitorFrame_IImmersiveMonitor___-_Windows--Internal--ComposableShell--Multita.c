/*
 * XREFs of _wil::MakeOrThrow_MonitorFrame_IImmersiveMonitor___&_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl___&_IXamlMultitaskingViewController___&_IXamlSwitcherWindowInteractionEvents____::_1_::dtor$0 @ 0x1802F7FFC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180137184 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeOrThrow_MonitorFrame_IImmersiveMonitor_____Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_____IXamlMultitaskingViewController_____IXamlSwitcherWindowInteractionEvents____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
