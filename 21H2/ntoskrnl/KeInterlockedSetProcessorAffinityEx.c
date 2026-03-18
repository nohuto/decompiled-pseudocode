/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x14022A040 (KiComputeGroupSchedulingRank.c)
 *     KiProcessNMI @ 0x14029B9A0 (KiProcessNMI.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     KiForceIdleParkUnparkProcessor @ 0x140579F48 (KiForceIdleParkUnparkProcessor.c)
 *     PpmTestAndLockProcessor @ 0x1405C8D78 (PpmTestAndLockProcessor.c)
 *     PpmParkReportParkedCore @ 0x1405DD1A8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1405DD260 (PpmParkReportSoftParkChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = v3 >> 6;
  if ( v4 <= v3 >> 6 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8LL * v5 + 8));
  return ((1LL << (v3 & 0x3F)) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8LL * v5 + 8), 1LL << (v3 & 0x3F))) != 0;
}
