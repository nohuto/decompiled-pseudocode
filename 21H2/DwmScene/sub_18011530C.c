/*
 * XREFs of sub_18011530C @ 0x18011530C
 * Callers:
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_18011530C(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  result = operator new(0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_9e2a54d4004deec9ebe94d081616ca13_>::`vftable';
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
