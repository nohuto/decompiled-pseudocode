/*
 * XREFs of sub_180010BEC @ 0x180010BEC
 * Callers:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_180012974 @ 0x180012974 (sub_180012974.c)
 *     sub_18001851C @ 0x18001851C (sub_18001851C.c)
 *     sub_1800332F0 @ 0x1800332F0 (sub_1800332F0.c)
 *     sub_18003712C @ 0x18003712C (sub_18003712C.c)
 *     sub_180066784 @ 0x180066784 (sub_180066784.c)
 *     sub_1800723C0 @ 0x1800723C0 (sub_1800723C0.c)
 *     sub_180075410 @ 0x180075410 (sub_180075410.c)
 *     sub_180076DF8 @ 0x180076DF8 (sub_180076DF8.c)
 *     sub_1800BCC28 @ 0x1800BCC28 (sub_1800BCC28.c)
 *     sub_1800E9E6C @ 0x1800E9E6C (sub_1800E9E6C.c)
 *     sub_1800F66D4 @ 0x1800F66D4 (sub_1800F66D4.c)
 *     sub_180102C40 @ 0x180102C40 (sub_180102C40.c)
 *     sub_1801030C8 @ 0x1801030C8 (sub_1801030C8.c)
 *     sub_180106818 @ 0x180106818 (sub_180106818.c)
 *     sub_18010ADDC @ 0x18010ADDC (sub_18010ADDC.c)
 *     sub_18010B5D4 @ 0x18010B5D4 (sub_18010B5D4.c)
 *     sub_18011C40C @ 0x18011C40C (sub_18011C40C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180010BEC(__int64 a1, unsigned __int64 a2)
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
