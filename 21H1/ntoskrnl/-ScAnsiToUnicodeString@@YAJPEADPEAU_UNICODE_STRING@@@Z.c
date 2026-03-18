/*
 * XREFs of ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C0C98
 * Callers:
 *     ?ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ @ 0x1405C3058 (-ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     ?ScTrimString@@YAXPEAD@Z @ 0x1405C0D48 (-ScTrimString@@YAXPEAD@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14068A820 (RtlxAnsiStringToUnicodeSize.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1408893C0 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
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
