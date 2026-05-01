/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x180465838
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C3150 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C3150.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_resume(
        _QWORD **a1)
{
  _QWORD *v1; // rax
  signed int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v1 + 64LL))(*v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
