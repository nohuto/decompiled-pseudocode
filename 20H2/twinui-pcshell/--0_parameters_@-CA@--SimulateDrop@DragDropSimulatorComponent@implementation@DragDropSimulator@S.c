/*
 * XREFs of ??0_parameters_@?CA@??SimulateDrop@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@78@AEBUIInspectable@Foundation@78@W4DragDropSimulatorDropPoint@45678@_N@Z@QEAA@QEAU2345678@012Ususpend_never@experimental@std@@@Z @ 0x1804617FC
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$1 @ 0x1800C2F84 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C2F84.c)
 * Callees:
 *     <none>
 */

__int64 `winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop'::`32'::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        ...)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 20) = a5;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  return result;
}
