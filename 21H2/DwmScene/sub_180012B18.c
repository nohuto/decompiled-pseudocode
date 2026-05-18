/*
 * XREFs of sub_180012B18 @ 0x180012B18
 * Callers:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_18002625C @ 0x18002625C (sub_18002625C.c)
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     sub_180026480 @ 0x180026480 (sub_180026480.c)
 *     sub_180081860 @ 0x180081860 (sub_180081860.c)
 *     sub_1800FB24C @ 0x1800FB24C (sub_1800FB24C.c)
 *     sub_18011BCE4 @ 0x18011BCE4 (sub_18011BCE4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180012B18(__int64 a1, unsigned __int64 a2)
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
