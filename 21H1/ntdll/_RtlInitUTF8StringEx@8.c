/*
 * XREFs of _RtlInitUTF8StringEx@8 @ 0x4B34E1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitUTF8StringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
