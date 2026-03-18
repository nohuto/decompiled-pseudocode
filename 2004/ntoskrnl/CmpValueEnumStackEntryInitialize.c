/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140360954
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369AC8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x14071875C (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x1408728BC (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
