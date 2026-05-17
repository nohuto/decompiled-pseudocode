/*
 * XREFs of _RtlDecodeSystemPointer@4 @ 0x4B2ABBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlDecodeSystemPointer(int a1)
{
  return MEMORY[0x7FFE0330] ^ __ROR4__(a1, 32 - (MEMORY[0x7FFE0330] & 0x1F));
}
