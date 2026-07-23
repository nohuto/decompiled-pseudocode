/*
 * XREFs of RtlInitUTF8String @ 0x14057F9D0
 * Callers:
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
