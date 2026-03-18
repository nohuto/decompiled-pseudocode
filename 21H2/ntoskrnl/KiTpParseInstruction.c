/*
 * XREFs of KiTpParseInstruction @ 0x140AB332C
 * Callers:
 *     KiTpSetupCompletion @ 0x140963330 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140AB28B8 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140AB3358 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
