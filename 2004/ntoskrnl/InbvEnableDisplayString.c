/*
 * XREFs of InbvEnableDisplayString @ 0x1403CCD80
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C5095C;
  byte_140C5095C = a1;
  return result;
}
