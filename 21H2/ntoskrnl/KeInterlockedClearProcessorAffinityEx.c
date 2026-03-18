/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x140291710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiProcessNMI @ 0x14029B9A0 (KiProcessNMI.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KeWakeProcessor @ 0x1403B4940 (KeWakeProcessor.c)
 *     KiForceIdleParkUnparkProcessor @ 0x140579F48 (KiForceIdleParkUnparkProcessor.c)
 *     PpmTestAndLockProcessor @ 0x1405C8D78 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1405C8FE4 (PpmUnlockProcessors.c)
 *     PpmParkReportSoftParkChange @ 0x1405DD260 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x1405DD2E0 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, int a2)
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
  return ((1LL << (v3 & 0x3F)) & _InterlockedAnd64(
                                   (volatile signed __int64 *)(a1 + 8LL * v5 + 8),
                                   ~(1LL << (v3 & 0x3F)))) != 0;
}
