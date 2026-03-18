/*
 * XREFs of IsValueSizeFixed @ 0x14092A6F4
 * Callers:
 *     GetOperandValue @ 0x140929D34 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x14092A724 (LocalGetConditionForString.c)
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
