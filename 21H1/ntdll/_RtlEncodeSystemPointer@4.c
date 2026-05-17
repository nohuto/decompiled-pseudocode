/*
 * XREFs of _RtlEncodeSystemPointer@4 @ 0x4B2ED610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlEncodeSystemPointer(int a1)
{
  return __ROR4__(a1 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
}
