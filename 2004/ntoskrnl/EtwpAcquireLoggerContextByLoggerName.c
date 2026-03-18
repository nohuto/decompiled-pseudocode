/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x140645544
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x1406453F0 (EtwpAcquireLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14077743C (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !a2 )
    return 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 0LL);
    v8 = v7;
    if ( v7 )
      break;
LABEL_7:
    if ( ++v6 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 152), a2, 1u) )
  {
    v9 = 0LL;
LABEL_6:
    EtwpReleaseLoggerContext(v8, v9);
    goto LABEL_7;
  }
  if ( a3 == 1 )
    KeWaitForSingleObject((PVOID)(v8 + 648), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v8 + 336) )
  {
    LOBYTE(v9) = a3;
    goto LABEL_6;
  }
  return v8;
}
