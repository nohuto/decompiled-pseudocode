/*
 * XREFs of ClearEnumerationContext @ 0x1C000867C
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
