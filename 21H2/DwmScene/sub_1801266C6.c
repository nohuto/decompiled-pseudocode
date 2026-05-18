/*
 * XREFs of sub_1801266C6 @ 0x1801266C6
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C070 @ 0x18000C070 (sub_18000C070.c)
 */

void __fastcall sub_1801266C6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_18000C070(*(__int64 **)(a2 + 64));
  }
}
