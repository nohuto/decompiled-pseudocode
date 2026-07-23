/*
 * XREFs of InbvEnableDisplayString @ 0x1403D04F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C50BBC;
  byte_140C50BBC = a1;
  return result;
}
