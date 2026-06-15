/*
 * XREFs of sub_1800713A8 @ 0x1800713A8
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     sub_1800712E0 @ 0x1800712E0 (sub_1800712E0.c)
 */

__int64 **__fastcall sub_1800713A8(__int64 **a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *i; // rdi
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( sub_1800712E0(a4, i) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
