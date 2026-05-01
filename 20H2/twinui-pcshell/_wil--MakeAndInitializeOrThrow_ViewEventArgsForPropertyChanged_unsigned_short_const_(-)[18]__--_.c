/*
 * XREFs of _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[18]__::_1_::dtor$0 @ 0x1800AD502
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x18023E838 (--1-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_____18___::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
