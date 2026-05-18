/*
 * XREFs of sub_18010FA8C @ 0x18010FA8C
 * Callers:
 *     sub_180110BC8 @ 0x180110BC8 (sub_180110BC8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_18010FA8C(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  result = operator new(0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_09190a7960fb7328d869125f9992b982_>::`vftable';
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
