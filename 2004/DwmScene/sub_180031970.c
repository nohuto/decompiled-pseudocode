/*
 * XREFs of sub_180031970 @ 0x180031970
 * Callers:
 *     sub_18002DCD0 @ 0x18002DCD0 (sub_18002DCD0.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 *     sub_180041C78 @ 0x180041C78 (sub_180041C78.c)
 *     sub_180099004 @ 0x180099004 (sub_180099004.c)
 *     sub_1800A6374 @ 0x1800A6374 (sub_1800A6374.c)
 *     sub_1800ADF84 @ 0x1800ADF84 (sub_1800ADF84.c)
 *     sub_180119C60 @ 0x180119C60 (sub_180119C60.c)
 *     sub_18011CD70 @ 0x18011CD70 (sub_18011CD70.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180031970(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 32 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
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
