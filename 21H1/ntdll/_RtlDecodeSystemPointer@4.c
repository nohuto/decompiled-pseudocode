/*
 * XREFs of _RtlDecodeSystemPointer@4 @ 0x4B2ABBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlDecodeSystemPointer(PVOID Ptr)
{
  return (PVOID)(MEMORY[0x7FFE0330] ^ __ROR4__(Ptr, 32 - (MEMORY[0x7FFE0330] & 0x1F)));
}
