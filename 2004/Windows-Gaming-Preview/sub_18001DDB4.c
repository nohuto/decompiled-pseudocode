/*
 * XREFs of sub_18001DDB4 @ 0x18001DDB4
 * Callers:
 *     sub_180046647 @ 0x180046647 (sub_180046647.c)
 * Callees:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 */

__int64 __fastcall sub_18001DDB4(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_1800266E0(result);
  }
  return result;
}
