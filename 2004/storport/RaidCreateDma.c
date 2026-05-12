/*
 * XREFs of RaidCreateDma @ 0x1C0078A50
 * Callers:
 *     RaidCreateAdapter @ 0x1C002FB68 (RaidCreateAdapter.c)
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
