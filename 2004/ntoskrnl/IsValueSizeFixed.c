/*
 * XREFs of IsValueSizeFixed @ 0x1409248CC
 * Callers:
 *     GetOperandValue @ 0x140923F0C (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1409248FC (LocalGetConditionForString.c)
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
