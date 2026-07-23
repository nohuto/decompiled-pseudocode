/*
 * XREFs of _RtlStringFromGUIDEx@12 @ 0x4B2ED180
 * Callers:
 *     _RtlStringFromGUID@8 @ 0x4B2ED160 (_RtlStringFromGUID@8.c)
 *     _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064 (_RtlpCreateIFEOKeyFilterKey@16.c)
 *     _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97 (_RtlpConstructCrossVmObjectPath@12.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *StringRoutine; // eax
  unsigned int MaximumLength; // edx
  size_t v6; // [esp-34h] [ebp-38h]

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(78);
    GuidString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
      LOWORD(MaximumLength) = GuidString->MaximumLength;
LABEL_4:
      GuidString->Length = 76;
      HIDWORD(v6) = L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}";
      LODWORD(v6) = (unsigned __int16)MaximumLength >> 1;
      swprintf_s(
        GuidString->Buffer,
        v6,
        (const wchar_t *const)Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    MaximumLength = GuidString->MaximumLength;
    if ( MaximumLength >= 0x4E )
      goto LABEL_4;
    return -1073741789;
  }
}
