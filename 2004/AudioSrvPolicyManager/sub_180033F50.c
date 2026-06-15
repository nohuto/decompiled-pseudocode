/*
 * XREFs of sub_180033F50 @ 0x180033F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 */

__int64 __fastcall sub_180033F50(__int64 a1, unsigned int a2)
{
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 32) )
    sub_18000A174(-2147024809);
  return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2);
}
