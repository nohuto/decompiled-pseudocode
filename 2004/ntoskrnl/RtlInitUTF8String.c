/*
 * XREFs of RtlInitUTF8String @ 0x140580120
 * Callers:
 *     PiGetDefaultMessageString @ 0x140758254 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
