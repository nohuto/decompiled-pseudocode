/*
 * XREFs of LdrpLogDllStateEx2 @ 0x1800116AC
 * Callers:
 *     LdrpGetDllPath @ 0x18001147C (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800CF280 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, void *a2, __int64 a3, unsigned __int16 a4)
{
  void *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rcx
  char v10; // bl
  char v11; // al
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v13; // [rsp+40h] [rbp-18h] BYREF

  v13 = 0LL;
  UnicodeString = 0LL;
  v6 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v9 = (unsigned int)RtlGetCurrentServiceSessionId(v8, v7)
       ? (char *)NtCurrentPeb()->SharedData + 555
       : (char *)2147353477;
    if ( (*v9 & 0x20) != 0 )
    {
      if ( !v6 )
        v6 = &unk_180122394;
      v10 = RtlCreateUnicodeString(&v13, v6);
      v11 = RtlCreateUnicodeString(&UnicodeString, a3);
      if ( v10 )
      {
        if ( v11 )
        {
          LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v13);
          RtlFreeAnsiString(&UnicodeString);
        }
        RtlFreeAnsiString(&v13);
      }
    }
  }
}
