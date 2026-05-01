/*
 * XREFs of ?SimulateDrop@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@W4DragDropSimulatorDropPoint@34567@_N@Z @ 0x1800C3B50
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$2 @ 0x1800BFE20 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800BFE20.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$2 @ 0x1800C0A40 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C0A40.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$1 @ 0x1800C14A4 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C14A4.c)
 */

__int64 winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        ...)
{
  void *v7; // rax
  unsigned int v9; // [rsp+5B8h] [rbp+10h] BYREF
  int v10; // [rsp+5C8h] [rbp+20h] BYREF
  va_list va; // [rsp+5D0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v7 = operator new(0x548uLL);
  v9 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__InitCoro_1(
    &v9,
    (__int64)v7 + 96,
    a2,
    a3,
    &v10,
    va,
    a1);
  return a2;
}
