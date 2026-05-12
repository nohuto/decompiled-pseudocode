/*
 * XREFs of RaidCreateDma @ 0x1C0079F58
 * Callers:
 *     RaidCreateAdapter @ 0x1C00309D4 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidCreateDma(_OWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
}
