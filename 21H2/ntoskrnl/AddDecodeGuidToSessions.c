/*
 * XREFs of AddDecodeGuidToSessions @ 0x1406EA568
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14079781C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1409F5444 (EtwpTrackDecodeGuidForSession.c)
 */

char __fastcall AddDecodeGuidToSessions(__int64 a1)
{
  unsigned __int8 v1; // si
  char v3; // di
  unsigned int v5; // edx
  __int64 v7; // rbx

  v1 = *(_BYTE *)(a1 + 100);
  v3 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v7 = EtwpAcquireLoggerContextByLoggerId(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL),
           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 134),
           0LL);
    v3 = EtwpTrackDecodeGuidForSession(v7, a1);
    EtwpReleaseLoggerContext(v7, 0LL);
  }
  while ( v3 );
  return v3;
}
