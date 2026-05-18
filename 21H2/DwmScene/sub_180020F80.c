/*
 * XREFs of sub_180020F80 @ 0x180020F80
 * Callers:
 *     sub_180018D48 @ 0x180018D48 (sub_180018D48.c)
 *     sub_180020AC0 @ 0x180020AC0 (sub_180020AC0.c)
 *     sub_18004134C @ 0x18004134C (sub_18004134C.c)
 *     sub_180092F20 @ 0x180092F20 (sub_180092F20.c)
 *     sub_180092F9C @ 0x180092F9C (sub_180092F9C.c)
 *     sub_1800F13F8 @ 0x1800F13F8 (sub_1800F13F8.c)
 *     sub_180102FF8 @ 0x180102FF8 (sub_180102FF8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180020F80(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 4 * a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
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
