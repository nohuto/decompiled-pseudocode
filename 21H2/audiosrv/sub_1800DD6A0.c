/*
 * XREFs of sub_1800DD6A0 @ 0x1800DD6A0
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1800DD6A0(LARGE_INTEGER *a1)
{
  BOOL result; // eax

  result = QueryPerformanceCounter(a1);
  if ( result )
    a1[1] = *a1;
  return result;
}
