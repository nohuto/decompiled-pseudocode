/*
 * XREFs of InbvEnableDisplayString @ 0x1403CBF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C50A94;
  byte_140C50A94 = a1;
  return result;
}
