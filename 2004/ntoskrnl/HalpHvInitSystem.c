/*
 * XREFs of HalpHvInitSystem @ 0x14099DD90
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvInitDiscard @ 0x140A6B530 (HalpHvInitDiscard.c)
 */

__int64 __fastcall HalpHvInitSystem(int a1)
{
  if ( a1 == 7 )
    HalpHvInitDiscard();
  return 0LL;
}
