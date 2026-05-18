/*
 * XREFs of sub_1801152BC @ 0x1801152BC
 * Callers:
 *     sub_180115870 @ 0x180115870 (sub_180115870.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_1801152BC(__int64 *a1, __int64 a2)
{
  _DWORD *result; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_2a38203a46977c523423b22b26512a89_>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = (__int64)result;
  }
  catch ( ... )
  {
    sub_1800D2ABC((__int64)&v6, a2);
    throw;
  }
  return result;
}
