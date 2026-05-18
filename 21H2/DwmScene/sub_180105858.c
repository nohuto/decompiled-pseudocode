/*
 * XREFs of sub_180105858 @ 0x180105858
 * Callers:
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 * Callees:
 *     sub_180103F4C @ 0x180103F4C (sub_180103F4C.c)
 */

__int64 __fastcall sub_180105858(__int64 a1, unsigned __int64 a2)
{
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  v3[0] = &std::_Func_impl_no_alloc<_lambda_dc8449eb0463ad9399da921d77f26178_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
  v3[7] = v3;
  return sub_180103F4C(a1, a2, (__int64)v3);
}
