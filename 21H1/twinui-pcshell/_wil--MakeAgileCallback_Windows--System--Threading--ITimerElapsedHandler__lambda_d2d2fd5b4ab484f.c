/*
 * XREFs of _wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_d2d2fd5b4ab484f2e48192b6c5e8ded6____::_1_::dtor$0 @ 0x1800A93D9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1498 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_d2d2fd5b4ab484f2e48192b6c5e8ded6____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
