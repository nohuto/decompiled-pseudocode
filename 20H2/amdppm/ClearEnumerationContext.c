/*
 * XREFs of ClearEnumerationContext @ 0x1C0002C4C
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
