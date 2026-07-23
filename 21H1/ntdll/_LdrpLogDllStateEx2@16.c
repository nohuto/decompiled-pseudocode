/*
 * XREFs of _LdrpLogDllStateEx2@16 @ 0x4B32FDF3
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

void __fastcall LdrpLogDllStateEx2(int a1, const WCHAR *a2, const WCHAR *SourceString, int a4)
{
  int v5; // eax
  char *v6; // eax
  BOOLEAN v7; // bl
  BOOLEAN v8; // al
  _UNICODE_STRING UnicodeString; // [esp+10h] [ebp-10h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v5 = 2147353476;
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v6 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v6 & 0x20) != 0 )
    {
      if ( !a2 )
        a2 = (const WCHAR *)&dword_4B285DEC;
      v7 = RtlCreateUnicodeString(&DestinationString, a2);
      v8 = RtlCreateUnicodeString(&UnicodeString, SourceString);
      if ( v7 )
      {
        if ( v8 )
        {
          LdrpLogEtwEvent(0, 0, &UnicodeString, &DestinationString);
          RtlFreeAnsiString(&UnicodeString);
        }
        RtlFreeAnsiString(&DestinationString);
      }
    }
  }
}
