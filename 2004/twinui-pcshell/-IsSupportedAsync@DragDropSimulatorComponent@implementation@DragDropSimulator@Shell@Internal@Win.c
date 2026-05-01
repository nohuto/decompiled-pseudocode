/*
 * XREFs of ?IsSupportedAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x1800C1424
 * Callers:
 *     ?IsSupportedAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x180464240 (-IsSupportedAsync@-$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@I.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$1 @ 0x1800C0884 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C0884.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  unsigned int v10; // [rsp+1C8h] [rbp+10h] BYREF

  v8 = operator new(0x168uLL);
  v10 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync__InitCoro_1(
    &v10,
    (__int64)v8 + 96,
    a2,
    a3,
    a4,
    a1);
  return a2;
}
