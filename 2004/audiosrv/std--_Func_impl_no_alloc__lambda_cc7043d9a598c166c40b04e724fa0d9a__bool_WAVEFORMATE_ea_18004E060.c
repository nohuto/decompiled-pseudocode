/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Move @ 0x18004E060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180155CE8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
