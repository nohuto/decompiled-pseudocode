/*
 * XREFs of sub_180105820 @ 0x180105820
 * Callers:
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 * Callees:
 *     sub_180103F4C @ 0x180103F4C (sub_180103F4C.c)
 */

__int64 __fastcall sub_180105820(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( a2 != *(_QWORD *)(a1 + 136) )
  {
    v3[1] = a1;
    v3[0] = &std::_Func_impl_no_alloc<_lambda_eee17b7a650f2a92ed01b87707059f40_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v3[7] = v3;
    return sub_180103F4C(a1, a2, (__int64)v3);
  }
  return result;
}
