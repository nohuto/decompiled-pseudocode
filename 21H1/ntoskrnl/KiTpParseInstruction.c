/*
 * XREFs of KiTpParseInstruction @ 0x140A102AC
 * Callers:
 *     KiTpSetupCompletion @ 0x1408B8B30 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140A0F8C0 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140A102D8 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
