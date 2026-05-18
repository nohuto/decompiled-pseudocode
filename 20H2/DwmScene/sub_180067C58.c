/*
 * XREFs of sub_180067C58 @ 0x180067C58
 * Callers:
 *     sub_1800640C4 @ 0x1800640C4 (sub_1800640C4.c)
 *     sub_180064480 @ 0x180064480 (sub_180064480.c)
 *     sub_1800D0F48 @ 0x1800D0F48 (sub_1800D0F48.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180067C58(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 152 * a2;
  if ( a2 > 0x1AF286BCA1AF286LL )
    v2 = -1LL;
  if ( v2 < 0x1000 )
  {
    result = 0LL;
    if ( v2 )
      return operator new(v2);
  }
  else
  {
    v3 = v2 + 39;
    if ( v2 + 39 < v2 )
      v3 = -1LL;
    v4 = operator new(v3);
    v6 = v4;
    if ( !v4 )
    {
      o__invalid_parameter_noinfo_noreturn(0LL, v5);
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v6;
  }
  return result;
}
