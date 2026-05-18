/*
 * XREFs of sub_1800D3710 @ 0x1800D3710
 * Callers:
 *     sub_18003E050 @ 0x18003E050 (sub_18003E050.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D3710(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
