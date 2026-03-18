/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140331554
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BAA8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x14072671C (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x14087840C (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
