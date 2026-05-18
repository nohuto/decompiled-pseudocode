/*
 * XREFs of sub_1800B3B30 @ 0x1800B3B30
 * Callers:
 *     sub_1800ABA08 @ 0x1800ABA08 (sub_1800ABA08.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 *     sub_1800D1B78 @ 0x1800D1B78 (sub_1800D1B78.c)
 *     sub_1800D2674 @ 0x1800D2674 (sub_1800D2674.c)
 *     sub_1800D77DC @ 0x1800D77DC (sub_1800D77DC.c)
 *     sub_1800D8D58 @ 0x1800D8D58 (sub_1800D8D58.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800B3B30(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 48 * a2;
  if ( a2 > 0x555555555555555LL )
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
