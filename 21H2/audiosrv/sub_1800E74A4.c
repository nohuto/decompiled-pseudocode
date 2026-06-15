/*
 * XREFs of sub_1800E74A4 @ 0x1800E74A4
 * Callers:
 *     sub_180079F80 @ 0x180079F80 (sub_180079F80.c)
 * Callees:
 *     sub_180029FD0 @ 0x180029FD0 (sub_180029FD0.c)
 */

__int64 __fastcall sub_1800E74A4(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180029FD0(result);
  }
  return result;
}
