/*
 * XREFs of sub_180031520 @ 0x180031520
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 */

__int64 __fastcall sub_180031520(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_180029FB8((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
