/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1402804B0
 * Callers:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14027F600 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140280140 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x140280460 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140280500 (PpmCheckSnapAllDeliveredPerformance.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     EtwProviderEnabled @ 0x1402EC010 (EtwProviderEnabled.c)
 *     PpmPerfRecordUtility @ 0x1402EDB30 (PpmPerfRecordUtility.c)
 *     PpmPerfSelectProcessorState @ 0x1402EF8E0 (PpmPerfSelectProcessorState.c)
 *     EtwpFailLogging @ 0x14036C4F4 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x1405A3EB0 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A6B2C (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
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
