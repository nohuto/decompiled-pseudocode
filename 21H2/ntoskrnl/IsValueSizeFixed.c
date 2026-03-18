/*
 * XREFs of IsValueSizeFixed @ 0x1409D1CD4
 * Callers:
 *     GetOperandValue @ 0x1409D0A60 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D1D04 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 <= 4u;
  return result;
}
