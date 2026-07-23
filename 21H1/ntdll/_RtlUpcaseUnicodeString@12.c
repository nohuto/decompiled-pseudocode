/*
 * XREFs of _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0
 * Callers:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 *     _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0 (_RtlCreateVirtualAccountSid@16.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 Length; // ax
  int v4; // ecx
  NTSTATUS result; // eax
  unsigned int i; // edi
  wchar_t *StringRoutine; // eax
  NTSTATUS v8; // [esp+14h] [ebp-20h]

  Length = SourceString->Length;
  v4 = SourceString->Length;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(v4) = SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  result = (unsigned __int16)v4 >> 1;
  v8 = result;
  for ( i = 0; i < result; ++i )
  {
    DestinationString->Buffer[i] = NLS_UPCASE(SourceString->Buffer[i]);
    result = v8;
  }
  return result;
}
