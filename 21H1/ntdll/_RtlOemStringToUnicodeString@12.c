/*
 * XREFs of _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0
 * Callers:
 *     _RtlDnsHostNameToComputerName@12 @ 0x4B34DAA0 (_RtlDnsHostNameToComputerName@12.c)
 * Callees:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     _RtlOemToUnicodeN@20 @ 0x4B2AACD0 (_RtlOemToUnicodeN@20.c)
 *     _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60 (_RtlxOemStringToUnicodeSize@4.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        POEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  NTSTATUS result; // eax
  int v6; // edi
  wchar_t *StringRoutine; // eax
  ULONG BytesInUnicodeString; // [esp+14h] [ebp-20h] BYREF
  NTSTATUS v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = RtlxOemStringToUnicodeSize(SourceString);
  if ( v3 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v3 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v3;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v3);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v4 = (unsigned __int16)(v3 - 2) + 2;
    if ( v4 > DestinationString->MaximumLength || v4 < 2 )
      return -2147483643;
  }
  v9 = 0;
  ms_exc.registration.TryLevel = 0;
  result = RtlOemToUnicodeN(
             (PWSTR)DestinationString->Buffer,
             DestinationString->Length,
             &BytesInUnicodeString,
             SourceString->Buffer,
             SourceString->Length);
  v6 = result;
  v9 = result;
  if ( result >= 0 )
  {
    result = (NTSTATUS)DestinationString->Buffer;
    *(_WORD *)(result + 2 * (BytesInUnicodeString >> 1)) = 0;
    v6 = 0;
    v9 = 0;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v6 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0;
      return v6;
    }
  }
  return result;
}
