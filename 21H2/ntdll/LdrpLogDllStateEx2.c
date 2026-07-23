/*
 * XREFs of LdrpLogDllStateEx2 @ 0x1800116AC
 * Callers:
 *     LdrpGetDllPath @ 0x18001147C (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800CF240 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  __int64 v7; // rcx
  char *v8; // rcx
  BOOLEAN v9; // bl
  BOOLEAN v10; // al
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      if ( !a2 )
        a2 = &word_180122394;
      v9 = RtlCreateUnicodeString(&DestinationString, a2);
      v10 = RtlCreateUnicodeString(&UnicodeString, a3);
      if ( v9 )
      {
        if ( v10 )
        {
          LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&DestinationString);
          RtlFreeAnsiString(&UnicodeString);
        }
        RtlFreeAnsiString(&DestinationString);
      }
    }
  }
}
