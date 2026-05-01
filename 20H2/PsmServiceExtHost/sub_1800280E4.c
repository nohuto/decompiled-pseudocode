/*
 * XREFs of sub_1800280E4 @ 0x1800280E4
 * Callers:
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 * Callees:
 *     sub_18002813C @ 0x18002813C (sub_18002813C.c)
 */

__int64 sub_1800280E4(_WORD *a1, unsigned __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v3; // rdx
  int v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)sub_18002813C(a1, v3, a3, a3, (__int64 *)va);
  }
  return (unsigned int)v4;
}
