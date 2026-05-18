/*
 * XREFs of sub_1800D05D4 @ 0x1800D05D4
 * Callers:
 *     sub_180066088 @ 0x180066088 (sub_180066088.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D05D4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 184) && a2 <= *(_QWORD *)(a1 + 192) )
    return sub_1800D0504(a1, a2, a3);
  else
    return 4LL;
}
