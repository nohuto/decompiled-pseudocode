/*
 * XREFs of sub_1800D5EA4 @ 0x1800D5EA4
 * Callers:
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D5EA4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 184) && a2 <= *(_QWORD *)(a1 + 192) )
    return sub_1800D5DD4(a1, a2, a3);
  else
    return 4LL;
}
