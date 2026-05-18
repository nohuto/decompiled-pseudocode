/*
 * XREFs of sub_180012A38 @ 0x180012A38
 * Callers:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_18002098C @ 0x18002098C (sub_18002098C.c)
 *     sub_180020A74 @ 0x180020A74 (sub_180020A74.c)
 *     sub_180020BB0 @ 0x180020BB0 (sub_180020BB0.c)
 *     sub_18007BF90 @ 0x18007BF90 (sub_18007BF90.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_180116414 @ 0x180116414 (sub_180116414.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180012A38(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 2 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
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
