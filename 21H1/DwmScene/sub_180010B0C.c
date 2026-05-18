/*
 * XREFs of sub_180010B0C @ 0x180010B0C
 * Callers:
 *     sub_18000F8D8 @ 0x18000F8D8 (sub_18000F8D8.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_180012894 @ 0x180012894 (sub_180012894.c)
 *     sub_180018074 @ 0x180018074 (sub_180018074.c)
 *     sub_18002DA20 @ 0x18002DA20 (sub_18002DA20.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_180060EB4 @ 0x180060EB4 (sub_180060EB4.c)
 *     sub_18006CAF0 @ 0x18006CAF0 (sub_18006CAF0.c)
 *     sub_18006FB40 @ 0x18006FB40 (sub_18006FB40.c)
 *     sub_180071528 @ 0x180071528 (sub_180071528.c)
 *     sub_1800B7358 @ 0x1800B7358 (sub_1800B7358.c)
 *     sub_1800E459C @ 0x1800E459C (sub_1800E459C.c)
 *     sub_1800F0E04 @ 0x1800F0E04 (sub_1800F0E04.c)
 *     sub_1800FD370 @ 0x1800FD370 (sub_1800FD370.c)
 *     sub_1800FD7F8 @ 0x1800FD7F8 (sub_1800FD7F8.c)
 *     sub_180100F48 @ 0x180100F48 (sub_180100F48.c)
 *     sub_18010550C @ 0x18010550C (sub_18010550C.c)
 *     sub_180105D04 @ 0x180105D04 (sub_180105D04.c)
 *     sub_180116B3C @ 0x180116B3C (sub_180116B3C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180010B0C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
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
