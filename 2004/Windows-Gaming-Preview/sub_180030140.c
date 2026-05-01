/*
 * XREFs of sub_180030140 @ 0x180030140
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 */

__int64 __fastcall sub_180030140(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // ebx

  *a2 = 0LL;
  v3 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 72) + 176LL) != *(_QWORD *)(a1 + 80) )
  {
    v3 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  if ( v3 >= 0 )
    return (unsigned int)sub_1800318F4(a1, a2, a3);
  return (unsigned int)v3;
}
