/*
 * XREFs of ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C6A98
 * Callers:
 *     ?ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ @ 0x1405C8E78 (-ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     ?ScTrimString@@YAXPEAD@Z @ 0x1405C6B48 (-ScTrimString@@YAXPEAD@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x140663960 (RtlxAnsiStringToUnicodeSize.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088D930 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall ScAnsiToUnicodeString(char *SourceString, struct _UNICODE_STRING *a2)
{
  ULONG v4; // eax
  NTSTATUS v5; // ebx
  wchar_t *v6; // rcx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v9; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v9.Length = 0LL;
  ScTrimString(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v9.MaximumLength = v4;
  v9.Buffer = (wchar_t *)SC_ENV::Allocate(v4);
  if ( v9.Buffer )
  {
    v5 = RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
    if ( v5 < 0 )
    {
      Buffer = v9.Buffer;
    }
    else
    {
      v6 = a2->Buffer;
      if ( v6 )
        SC_ENV::Free(v6);
      Buffer = 0LL;
      *a2 = v9;
    }
    if ( Buffer )
      SC_ENV::Free(Buffer);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
