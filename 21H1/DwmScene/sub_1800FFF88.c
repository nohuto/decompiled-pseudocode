/*
 * XREFs of sub_1800FFF88 @ 0x1800FFF88
 * Callers:
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 * Callees:
 *     sub_1800FE67C @ 0x1800FE67C (sub_1800FE67C.c)
 */

__int64 __fastcall sub_1800FFF88(__int64 a1, unsigned __int64 a2)
{
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  v3[0] = &std::_Func_impl_no_alloc<_lambda_dc8449eb0463ad9399da921d77f26178_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
  v3[7] = v3;
  return sub_1800FE67C(a1, a2, (__int64)v3);
}
