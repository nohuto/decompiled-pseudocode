/*
 * XREFs of sub_1801153AC @ 0x1801153AC
 * Callers:
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_1801153AC(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  result = operator new(0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_afac4f3b7f72ce1de95b4129519a2d97_>::`vftable';
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
