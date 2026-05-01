/*
 * XREFs of sub_18000D824 @ 0x18000D824
 * Callers:
 *     unknown_libname_10 @ 0x18004622B (unknown_libname_10.c)
 *     sub_18004623D @ 0x18004623D (sub_18004623D.c)
 * Callees:
 *     sub_18000D6B0 @ 0x18000D6B0 (sub_18000D6B0.c)
 */

volatile signed __int64 *__fastcall sub_18000D824(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_18000D6B0(result);
  }
  return result;
}
