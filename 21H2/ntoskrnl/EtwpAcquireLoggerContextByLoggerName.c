/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x1406F1C28
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407899DC (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  char v9; // dl

  if ( !a2 )
    return 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 0);
    v8 = v7;
    if ( v7 )
      break;
LABEL_7:
    if ( ++v6 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 38), a2, 1u) )
  {
    v9 = 0;
LABEL_6:
    EtwpReleaseLoggerContext(v8, v9);
    goto LABEL_7;
  }
  if ( a3 == 1 )
    KeWaitForSingleObject(v8 + 162, Executive, 0, 0, 0LL);
  if ( !v8[84] )
  {
    v9 = a3;
    goto LABEL_6;
  }
  return v8;
}
