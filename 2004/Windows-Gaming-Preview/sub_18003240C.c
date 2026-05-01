/*
 * XREFs of sub_18003240C @ 0x18003240C
 * Callers:
 *     unknown_libname_27 @ 0x180046C5F (unknown_libname_27.c)
 *     sub_180046C83 @ 0x180046C83 (sub_180046C83.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 */

volatile signed __int64 *__fastcall sub_18003240C(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_18000D490(result);
  }
  return result;
}
