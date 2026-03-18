/*
 * XREFs of IsValueSizeFixed @ 0x14092361C
 * Callers:
 *     GetOperandValue @ 0x140922C5C (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x14092364C (LocalGetConditionForString.c)
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
