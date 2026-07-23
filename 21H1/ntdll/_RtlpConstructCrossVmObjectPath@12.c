/*
 * XREFs of _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97
 * Callers:
 *     _RtlConstructCrossVmMutexPath@12 @ 0x4B35AB80 (_RtlConstructCrossVmMutexPath@12.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 */

NTSTATUS __fastcall RtlpConstructCrossVmObjectPath(_UNICODE_STRING *a1, GUID *a2, PGUID Guid)
{
  wchar_t *StringRoutine; // edi
  NTSTATUS appended; // esi
  _UNICODE_STRING Source; // [esp+Ch] [ebp-20h] BYREF
  _UNICODE_STRING GuidString; // [esp+14h] [ebp-18h] BYREF
  _UNICODE_STRING Destination; // [esp+1Ch] [ebp-10h] BYREF
  _UNICODE_STRING *v9; // [esp+24h] [ebp-8h]
  PGUID v10; // [esp+28h] [ebp-4h]

  v9 = a1;
  Destination.Length = 0;
  v10 = a2;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0;
  Destination.Buffer = 0;
  Destination.MaximumLength = 112;
  if ( Guid )
    Destination.MaximumLength = 190;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Guid != 0 ? 190 : 112);
  Destination.Buffer = StringRoutine;
  if ( StringRoutine )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_4B281C40);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0)
      || Guid
      && ((appended = RtlStringFromGUIDEx(Guid, &GuidString, 1u), appended < 0)
       || (appended = RtlAppendUnicodeStringToString(&Destination, &GuidString), appended < 0)
       || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(v10, &Source, 1u), appended < 0)
      || (appended = RtlAppendUnicodeStringToString(&Destination, &Source), appended < 0) )
    {
      StringRoutine = Destination.Buffer;
    }
    else
    {
      StringRoutine = 0;
      *v9 = Destination;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&Source);
  if ( StringRoutine )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)StringRoutine);
  return appended;
}
