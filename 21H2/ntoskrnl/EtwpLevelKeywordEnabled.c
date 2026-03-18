/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1403031F0
 * Callers:
 *     PpmPerfRecordUtility @ 0x14021BD70 (PpmPerfRecordUtility.c)
 *     PpmPerfSelectProcessorState @ 0x14021FD60 (PpmPerfSelectProcessorState.c)
 *     EtwpFailLogging @ 0x14022A6DC (EtwpFailLogging.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403025F0 (KiIntSteerEtwEventEnabled.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140304CE0 (PpmPerfSnapDeliveredPerformance.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpFailLoggingOld @ 0x14041A870 (EtwpFailLoggingOld.c)
 *     EtwpDiskProvTraceDisk @ 0x14062EA90 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1406305E0 (EtwWriteString.c)
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
