/*
 * XREFs of sub_18001D188 @ 0x18001D188
 * Callers:
 *     sub_180018764 @ 0x180018764 (sub_180018764.c)
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 *     sub_18003BA7C @ 0x18003BA7C (sub_18003BA7C.c)
 *     sub_18008D650 @ 0x18008D650 (sub_18008D650.c)
 *     sub_18008D6CC @ 0x18008D6CC (sub_18008D6CC.c)
 *     sub_1800EBB28 @ 0x1800EBB28 (sub_1800EBB28.c)
 *     sub_1800FD728 @ 0x1800FD728 (sub_1800FD728.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18001D188(__int64 a1, unsigned __int64 a2)
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
