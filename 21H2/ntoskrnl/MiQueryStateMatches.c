/*
 * XREFs of MiQueryStateMatches @ 0x14027C63C
 * Callers:
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiQueryStateMatches(__int64 a1, int a2, int a3, int a4, __int16 a5)
{
  int v5; // eax

  if ( a2 != *(_DWORD *)(a1 + 32) )
    return 0LL;
  v5 = 0;
  if ( a3 )
    v5 = a4 | MmProtectToValue[a3];
  return v5 == *(_DWORD *)(a1 + 36) && a5 == *(_WORD *)(a1 + 20);
}
