/*
 * XREFs of sub_18003B1D4 @ 0x18003B1D4
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 * Callees:
 *     sub_18002813C @ 0x18002813C (sub_18002813C.c)
 */

__int64 sub_18003B1D4(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)sub_18002813C(a1, a2, (__int64)a3, a3, va);
  }
  return (unsigned int)v3;
}
