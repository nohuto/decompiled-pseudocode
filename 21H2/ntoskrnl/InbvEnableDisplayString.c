/*
 * XREFs of InbvEnableDisplayString @ 0x1403DF6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C54D0C;
  byte_140C54D0C = a1;
  return result;
}
