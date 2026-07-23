/*
 * XREFs of KiTpParseInstruction @ 0x140A142AC
 * Callers:
 *     KiTpSetupCompletion @ 0x1408BD4D0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140A138C0 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140A142D8 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
