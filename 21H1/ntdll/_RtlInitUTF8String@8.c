/*
 * XREFs of _RtlInitUTF8String@8 @ 0x4B34E1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUTF8String(PSTRING DestinationString, PCSZ SourceString)
{
  RtlInitString(DestinationString, SourceString);
}
