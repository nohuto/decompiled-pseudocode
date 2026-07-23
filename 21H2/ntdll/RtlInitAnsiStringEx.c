/*
 * XREFs of RtlInitAnsiStringEx @ 0x180016530
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180016570 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CD47C (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 *     RtlInitUTF8StringEx @ 0x1800EB7B0 (RtlInitUTF8StringEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0xFFFE )
  {
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
    return 0;
  }
  return -1073741562;
}
