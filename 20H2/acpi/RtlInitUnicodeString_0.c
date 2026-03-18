/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C0031A5D
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C00A01A0 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
