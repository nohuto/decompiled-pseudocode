/*
 * XREFs of _RtlEncodeSystemPointer@4 @ 0x4B2ED610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEncodeSystemPointer(PVOID Ptr)
{
  return (PVOID)__ROR4__((unsigned int)Ptr ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
}
