/*
 * XREFs of sub_18002FAF4 @ 0x18002FAF4
 * Callers:
 *     unknown_libname_51 @ 0x180046C4D (unknown_libname_51.c)
 * Callees:
 *     sub_18002F9B0 @ 0x18002F9B0 (sub_18002F9B0.c)
 */

volatile signed __int64 *__fastcall sub_18002FAF4(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_18002F9B0(result);
  }
  return result;
}
