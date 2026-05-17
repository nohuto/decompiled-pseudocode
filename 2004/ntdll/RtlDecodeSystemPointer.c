/*
 * XREFs of RtlDecodeSystemPointer @ 0x1800835C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecodeSystemPointer(__int64 a1)
{
  return __ROR8__(a1, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
}
