/*
 * XREFs of _RtlUnicodeStringToCountedOemString@12 @ 0x4B34DC20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUnicodeToOemN@20 @ 0x4B2E0AF0 (_RtlUnicodeToOemN@20.c)
 *     _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60 (_RtlxUnicodeStringToOemSize@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpDidUnicodeToOemWork@8 @ 0x4B344552 (_RtlpDidUnicodeToOemWork@8.c)
 *     _RtlUnicodeStringToCountedOemString@12 @ 0x4B34DC20 (_RtlUnicodeStringToCountedOemString@12.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  void *v3; // ecx
  ULONG v4; // eax
  char *StringRoutine; // eax
  int v7; // esi
  ULONG BytesInOemString; // [esp+10h] [ebp-24h] BYREF
  int v9; // [esp+14h] [ebp-20h]
  int v10; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = RtlxUnicodeStringToOemSize(v3, (PWCH *)SourceString) - 1;
  if ( !v4 )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0;
    return 0;
  }
  if ( v4 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v4;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v4;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v4);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)v4 > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v10 = 0;
  ms_exc.registration.TryLevel = 0;
  v9 = 1;
  v7 = RtlUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         (PCWCH)SourceString->Buffer,
         SourceString->Length);
  v10 = v7;
  if ( v7 >= 0 )
  {
    if ( !RtlpDidUnicodeToOemWork(&DestinationString->Length, (int)SourceString) )
    {
      v7 = -1073741470;
      v10 = -1073741470;
    }
    if ( v7 >= 0 )
    {
      v7 = 0;
      v10 = 0;
    }
  }
  ms_exc.registration.TryLevel = -2;
  v9 = 0;
  if ( v7 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0;
    }
  }
  return v7;
}
