/*
 * XREFs of sub_1800E1B40 @ 0x1800E1B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E15FC @ 0x1800E15FC (sub_1800E15FC.c)
 *     sub_1800E1B64 @ 0x1800E1B64 (sub_1800E1B64.c)
 */

__int64 __fastcall sub_1800E1B40(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 28) == 3 )
    sub_1800E15FC(a1);
  else
    sub_1800E1B64();
  return 0LL;
}
