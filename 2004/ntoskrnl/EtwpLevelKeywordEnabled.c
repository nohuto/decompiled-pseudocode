/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140215A40
 * Callers:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140214B90 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402156D0 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402159F0 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140215A90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwProviderEnabled @ 0x1402FBA40 (EtwProviderEnabled.c)
 *     PpmPerfRecordUtility @ 0x140321CA0 (PpmPerfRecordUtility.c)
 *     PpmPerfSelectProcessorState @ 0x1403230F0 (PpmPerfSelectProcessorState.c)
 *     EtwpFailLogging @ 0x14036A514 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x1405A0410 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A308C (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
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
