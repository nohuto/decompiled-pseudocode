/*
 * XREFs of sub_1800FFF50 @ 0x1800FFF50
 * Callers:
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 * Callees:
 *     sub_1800FE67C @ 0x1800FE67C (sub_1800FE67C.c)
 */

__int64 __fastcall sub_1800FFF50(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( a2 != *(_QWORD *)(a1 + 136) )
  {
    v3[1] = a1;
    v3[0] = &std::_Func_impl_no_alloc<_lambda_eee17b7a650f2a92ed01b87707059f40_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v3[7] = v3;
    return sub_1800FE67C(a1, a2, (__int64)v3);
  }
  return result;
}
