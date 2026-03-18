/*
 * XREFs of InbvEnableDisplayString @ 0x1403CFA10
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C509E4;
  byte_140C509E4 = a1;
  return result;
}
