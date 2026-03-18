/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140322D04
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x1407163CC (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408715C8 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
