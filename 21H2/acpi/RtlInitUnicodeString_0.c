/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C002F17D
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C009E908 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
