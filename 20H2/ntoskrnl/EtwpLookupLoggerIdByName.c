/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1407132CC
 * Callers:
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  unsigned int *v8; // rax
  unsigned int *v9; // rdi

  v3 = 0;
  for ( i = -1073741162; v3 < *(_DWORD *)(a1 + 16); ++v3 )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, v3, 0);
    v9 = v8;
    if ( v8 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 38), a2, 1u) )
      {
        EtwpReleaseLoggerContext(v9, 0);
        i = 0;
        *a3 = v3;
        return i;
      }
      EtwpReleaseLoggerContext(v9, 0);
    }
  }
  return i;
}
