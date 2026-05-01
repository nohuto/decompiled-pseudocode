/*
 * XREFs of sub_180007B68 @ 0x180007B68
 * Callers:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007B68(unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 < *a1 )
    return 1LL;
  if ( a2 < a1[1] )
    return 2LL;
  return 4 - (unsigned int)(a2 < a1[2]);
}
