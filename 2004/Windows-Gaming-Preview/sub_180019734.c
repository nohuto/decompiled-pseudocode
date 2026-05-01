/*
 * XREFs of sub_180019734 @ 0x180019734
 * Callers:
 *     unknown_libname_14 @ 0x1800465D3 (unknown_libname_14.c)
 *     sub_1800465E5 @ 0x1800465E5 (sub_1800465E5.c)
 * Callees:
 *     sub_1800195C0 @ 0x1800195C0 (sub_1800195C0.c)
 */

volatile signed __int64 *__fastcall sub_180019734(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_1800195C0(result);
  }
  return result;
}
