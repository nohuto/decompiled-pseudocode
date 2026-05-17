/*
 * XREFs of _RtlGetLengthWithoutLastFullDosOrNtPathElement@12 @ 0x4B2E3F00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetLengthWithoutLastPathElement@16 @ 0x4B2E3F17 (_RtlpGetLengthWithoutLastPathElement@16.c)
 */

int __stdcall RtlGetLengthWithoutLastFullDosOrNtPathElement(int a1, int a2, int a3)
{
  return RtlpGetLengthWithoutLastPathElement(a2, a3);
}
