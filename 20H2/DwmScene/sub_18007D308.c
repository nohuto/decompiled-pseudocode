/*
 * XREFs of sub_18007D308 @ 0x18007D308
 * Callers:
 *     sub_18007CB4C @ 0x18007CB4C (sub_18007CB4C.c)
 * Callees:
 *     sub_18007D368 @ 0x18007D368 (sub_18007D368.c)
 */

__int64 __fastcall sub_18007D308(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx

  if ( a3 > 32 )
  {
    v7 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      a1 = sub_18007D368(a1, a1 + 512, a4);
      --v7;
    }
    while ( v7 );
  }
  return sub_18007D368(a1, a2, a4);
}
