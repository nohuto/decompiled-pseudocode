/*
 * XREFs of _RtlGetLengthWithoutLastFullDosOrNtPathElement@12 @ 0x4B2E3F00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetLengthWithoutLastPathElement@16 @ 0x4B2E3F17 (_RtlpGetLengthWithoutLastPathElement@16.c)
 */

NTSTATUS __cdecl RtlGetLengthWithoutLastFullDosOrNtPathElement(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  return RtlpGetLengthWithoutLastPathElement(PathString, Length);
}
