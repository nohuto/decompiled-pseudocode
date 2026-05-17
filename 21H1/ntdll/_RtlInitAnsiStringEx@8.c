/*
 * XREFs of _RtlInitAnsiStringEx@8 @ 0x4B2DFED0
 * Callers:
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _RtlInitUTF8StringEx@8 @ 0x4B34E1D0 (_RtlInitUTF8StringEx@8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned int v2; // ecx

  *(_DWORD *)&DestinationString->Length = 0;
  DestinationString->Buffer = (char *)SourceString;
  if ( !SourceString )
    return 0;
  v2 = strlen(SourceString);
  if ( v2 <= 0xFFFE )
  {
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
    return 0;
  }
  return -1073741562;
}
