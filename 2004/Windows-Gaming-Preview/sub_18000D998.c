/*
 * XREFs of sub_18000D998 @ 0x18000D998
 * Callers:
 *     sub_180046315 @ 0x180046315 (sub_180046315.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 */

__int64 __fastcall sub_18000D998(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        result = sub_1800120A0(v5);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
