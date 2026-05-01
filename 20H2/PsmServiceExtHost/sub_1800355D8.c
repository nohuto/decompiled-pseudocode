/*
 * XREFs of sub_1800355D8 @ 0x1800355D8
 * Callers:
 *     sub_180004DD8 @ 0x180004DD8 (sub_180004DD8.c)
 *     sub_1800073FC @ 0x1800073FC (sub_1800073FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800355D8(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 - 24);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}
