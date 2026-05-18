/*
 * XREFs of sub_1800FC638 @ 0x1800FC638
 * Callers:
 *     sub_1800FC200 @ 0x1800FC200 (sub_1800FC200.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_1800FC638(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = result;
  }
  catch ( ... )
  {
    if ( a2 )
      sub_1800FCDF4(a2, 1LL);
    throw;
  }
  return result;
}
