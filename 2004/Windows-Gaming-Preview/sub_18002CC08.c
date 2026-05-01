/*
 * XREFs of sub_18002CC08 @ 0x18002CC08
 * Callers:
 *     sub_180046B26 @ 0x180046B26 (sub_180046B26.c)
 * Callees:
 *     sub_18002CA60 @ 0x18002CA60 (sub_18002CA60.c)
 */

volatile signed __int64 *__fastcall sub_18002CC08(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_18002CA60(result);
  }
  return result;
}
