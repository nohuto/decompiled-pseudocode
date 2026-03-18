/*
 * XREFs of HalpHvInitSystem @ 0x1409A3E90
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvInitDiscard @ 0x140A71E3C (HalpHvInitDiscard.c)
 */

__int64 __fastcall HalpHvInitSystem(int a1)
{
  if ( a1 == 7 )
    HalpHvInitDiscard();
  return 0LL;
}
