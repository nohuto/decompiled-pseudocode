/*
 * XREFs of _RtlUnicodeStringToOemString@12 @ 0x4B2E09B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUnicodeStringToOemString@12 @ 0x4B2E09B0 (_RtlUnicodeStringToOemString@12.c)
 *     _RtlUnicodeToOemN@20 @ 0x4B2E0AF0 (_RtlUnicodeToOemN@20.c)
 *     _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60 (_RtlxUnicodeStringToOemSize@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v3; // eax
  NTSTATUS result; // eax
  int v5; // edi
  char *StringRoutine; // eax
  ULONG BytesInOemString; // [esp+14h] [ebp-20h] BYREF
  NTSTATUS v8; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v3 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v3 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v3;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v3);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v3 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = 0;
  ms_exc.registration.TryLevel = 0;
  result = RtlUnicodeToOemN(
             DestinationString->Buffer,
             DestinationString->Length,
             &BytesInOemString,
             (PCWCH)SourceString->Buffer,
             SourceString->Length);
  v5 = result;
  v8 = result;
  if ( result >= 0 )
  {
    result = BytesInOemString;
    DestinationString->Buffer[BytesInOemString] = 0;
    v5 = 0;
    v8 = 0;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v5 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0;
      return v5;
    }
  }
  return result;
}
