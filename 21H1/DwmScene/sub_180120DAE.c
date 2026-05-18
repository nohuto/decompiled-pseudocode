/*
 * XREFs of sub_180120DAE @ 0x180120DAE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BFB0 @ 0x18000BFB0 (sub_18000BFB0.c)
 */

void __fastcall sub_180120DAE(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_18000BFB0(*(__int64 **)(a2 + 64));
  }
}
