/*
 * XREFs of sub_180037240 @ 0x180037240
 * Callers:
 *     sub_1800335A0 @ 0x1800335A0 (sub_1800335A0.c)
 *     sub_180046708 @ 0x180046708 (sub_180046708.c)
 *     sub_180047548 @ 0x180047548 (sub_180047548.c)
 *     sub_18009E8D4 @ 0x18009E8D4 (sub_18009E8D4.c)
 *     sub_1800ABC44 @ 0x1800ABC44 (sub_1800ABC44.c)
 *     sub_1800B3854 @ 0x1800B3854 (sub_1800B3854.c)
 *     sub_18011F530 @ 0x18011F530 (sub_18011F530.c)
 *     sub_180122640 @ 0x180122640 (sub_180122640.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180037240(__int64 a1, unsigned __int64 a2)
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
