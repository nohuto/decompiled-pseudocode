/*
 * XREFs of RtlInitUTF8String @ 0x140583A80
 * Callers:
 *     PiGetDefaultMessageString @ 0x140766E94 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
