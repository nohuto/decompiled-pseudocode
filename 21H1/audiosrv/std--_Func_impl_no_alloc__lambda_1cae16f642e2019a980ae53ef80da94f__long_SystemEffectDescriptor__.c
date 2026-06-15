/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1cae16f642e2019a980ae53ef80da94f__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Move @ 0x18004DEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_1cae16f642e2019a980ae53ef80da94f__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180156CB8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
