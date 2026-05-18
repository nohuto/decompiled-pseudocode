/*
 * XREFs of sub_18012F1E9 @ 0x18012F1E9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019400 @ 0x180019400 (sub_180019400.c)
 */

void __fastcall sub_18012F1E9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_180019400((__int64 *)(a2 + 88));
  }
}
