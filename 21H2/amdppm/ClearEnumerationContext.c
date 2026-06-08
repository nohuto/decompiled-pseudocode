/*
 * XREFs of ClearEnumerationContext @ 0x1C0002CEC
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
