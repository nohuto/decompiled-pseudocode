/*
 * XREFs of _RtlCreateUnicodeString@8 @ 0x4B2D40C0
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73 (_RtlpInitUnicodeStringUsingBuffer@16.c)
 *     _LdrSetDllDirectory@4 @ 0x4B2ED420 (_LdrSetDllDirectory@4.c)
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 *     _LdrpLogDllStateEx2@16 @ 0x4B32FDF3 (_LdrpLogDllStateEx2@16.c)
 *     _LdrpMakeUnicodeStringFromPathElement@12 @ 0x4B330CBB (_LdrpMakeUnicodeStringFromPathElement@12.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  wchar_t *StringRoutine; // eax
  BOOLEAN result; // al
  size_t v6; // [esp-4h] [ebp-34h]
  __int16 v7; // [esp+14h] [ebp-1Ch]

  v2 = wcslen((const unsigned __int16 *)SourceString);
  v7 = 2 * v2;
  v3 = 2 * v2 + 2;
  if ( v3 > 0xFFFE )
    return 0;
  if ( 2 * v2 == -2 )
    return 0;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(2 * v2 + 2);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v3;
  LODWORD(v6) = v3;
  memcpy(StringRoutine, SourceString, v6);
  result = v7;
  DestinationString->Length = v7;
  return result;
}
