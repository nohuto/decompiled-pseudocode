/*
 * XREFs of KiTpParseInstruction @ 0x140A162AC
 * Callers:
 *     KiTpSetupCompletion @ 0x1408BFBB0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x140A158C0 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x140A162D8 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix();
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction(a1, 0LL);
  return result;
}
