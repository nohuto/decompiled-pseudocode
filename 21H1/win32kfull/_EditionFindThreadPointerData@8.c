/*
 * XREFs of _EditionFindThreadPointerData@8 @ 0x15B9C8
 * Callers:
 *     <none>
 * Callees:
 *     ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87 (-FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z.c)
 */

struct tagTHREADPOINTERDATA *__stdcall EditionFindThreadPointerData(struct tagTHREADPOINTERDATA **a1, __int16 a2)
{
  return FindThreadPointerData(a1, a2);
}
