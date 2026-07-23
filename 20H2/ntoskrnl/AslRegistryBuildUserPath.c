/*
 * XREFs of AslRegistryBuildUserPath @ 0x1407BDB14
 * Callers:
 *     AslRegistryGetKey @ 0x1407BD97C (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140267DE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140340C70 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406FB700 (RtlFormatCurrentUserKeyPath.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407541E4 (AslAlloc.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  v5 = RtlFormatCurrentUserKeyPath(&Sourcea);
  if ( v5 < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    Destination->Length = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    v7 = Sourcea.Length + 2 * (v6 + 1);
    Destination->MaximumLength = v7;
    v8 = (wchar_t *)AslAlloc(v4, v7);
    Destination->Buffer = v8;
    if ( v8 )
    {
      RtlAppendUnicodeStringToString(Destination, &Sourcea);
      RtlAppendUnicodeToString(Destination, Source);
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      AslLogCallPrintf(1LL);
    }
  }
  RtlFreeAnsiString(&Sourcea);
  return (unsigned int)v5;
}
