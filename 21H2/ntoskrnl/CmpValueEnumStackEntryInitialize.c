/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140251B94
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x14072A6EC (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140875E58 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
