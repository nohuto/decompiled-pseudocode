/*
 * XREFs of sub_18012F20F @ 0x18012F20F
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019400 @ 0x180019400 (sub_180019400.c)
 */

void __fastcall sub_18012F20F(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    sub_180019400((__int64 *)(a2 + 64));
  }
}
