/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x14026EA90
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14026DBE0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14026E720 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x14026EA40 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfRecordUtility @ 0x1402E7020 (PpmPerfRecordUtility.c)
 *     PpmPerfSelectProcessorState @ 0x1402E8470 (PpmPerfSelectProcessorState.c)
 *     EtwProviderEnabled @ 0x140357A20 (EtwProviderEnabled.c)
 *     EtwpFailLogging @ 0x140369B54 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x14059FD20 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A299C (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
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
