/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1406F01A4
 * Callers:
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  __int64 v8; // rax
  __int64 v9; // rdi

  v3 = 0;
  for ( i = -1073741162; v3 < *(_DWORD *)(a1 + 16); ++v3 )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, v3, 0LL);
    v9 = v8;
    if ( v8 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 136), a2, 1u) )
      {
        EtwpReleaseLoggerContext(v9, 0LL);
        i = 0;
        *a3 = v3;
        return i;
      }
      EtwpReleaseLoggerContext(v9, 0LL);
    }
  }
  return i;
}
