/*
 * XREFs of sub_1801216D0 @ 0x1801216D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BFB0 @ 0x18000BFB0 (sub_18000BFB0.c)
 */

void __fastcall sub_1801216D0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_18000BFB0(*(__int64 **)(a2 + 56));
  }
}
