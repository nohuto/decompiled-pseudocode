/*
 * XREFs of _LdrpFindKnownDll@16 @ 0x4B2D0FCB
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _LdrpAllocateUnicodeString@8 @ 0x4B2D1D30 (_LdrpAllocateUnicodeString@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenSection@12 @ 0x4B2F2CF0 (_NtOpenSection@12.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpFindKnownDll(
        UNICODE_STRING *Source,
        _UNICODE_STRING *a2,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v5; // eax
  int UnicodeString; // esi
  const WCHAR *v7; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-1Ch] BYREF
  PUNICODE_STRING DestinationString; // [esp+24h] [ebp-4h]

  DestinationString = a2;
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 1541, "LdrpFindKnownDll", 3, "DLL name: %wZ\n", Source);
  if ( !LdrpKnownDllDirectoryHandle )
  {
LABEL_11:
    UnicodeString = -1073741515;
    goto LABEL_7;
  }
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  v5 = NtOpenSection(SectionHandle, 0xDu, &ObjectAttributes);
  UnicodeString = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  UnicodeString = LdrpAllocateUnicodeString(Destination, Source->Length + LdrpKnownDllPath.Length + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*SectionHandle);
  }
  else
  {
    RtlAppendUnicodeStringToString(Destination, &LdrpKnownDllPath);
    RtlAppendUnicodeToString(Destination, L"\\");
    v7 = (const WCHAR *)((char *)Destination->Buffer + Destination->Length);
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlInitUnicodeStringEx(DestinationString, v7);
    UnicodeString = 0;
  }
LABEL_7:
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 1613, "LdrpFindKnownDll", 4, "Status: 0x%08lx\n", UnicodeString);
  return UnicodeString;
}
