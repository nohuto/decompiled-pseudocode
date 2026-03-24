/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140220B80
 * Callers:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14021FCD0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140220810 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x140220B30 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220BD0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     EtwProviderEnabled @ 0x14025F840 (EtwProviderEnabled.c)
 *     PpmPerfRecordUtility @ 0x1402893F0 (PpmPerfRecordUtility.c)
 *     PpmPerfSelectProcessorState @ 0x14028E7D0 (PpmPerfSelectProcessorState.c)
 *     EtwpFailLogging @ 0x14036CB24 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x1405A58E0 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A855C (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x140627BC0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  bool result; // al

  result = *(_DWORD *)a1
        && ((v3 = *(_BYTE *)(a1 + 4), a2 <= v3) || !v3)
        && ((*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3
         || (a3 & *(_QWORD *)(a1 + 16)) != 0 && (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24));
  return result;
}
