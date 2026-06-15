/*
 * XREFs of sub_1800D5060 @ 0x1800D5060
 * Callers:
 *     sub_1800322E0 @ 0x1800322E0 (sub_1800322E0.c)
 * Callees:
 *     sub_1800D6C14 @ 0x1800D6C14 (sub_1800D6C14.c)
 */

__int64 *__fastcall sub_1800D5060(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( *a1 == *a2 )
  {
    if ( a1 != a2 )
      *a2 = 0LL;
  }
  else
  {
    sub_1800D6C14(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
