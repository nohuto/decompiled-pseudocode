/*
 * XREFs of PpmPerfQueueAction @ 0x14039679C
 * Callers:
 *     PpmParkReportParkedCores @ 0x140339D60 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14033CC80 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14033CCD0 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x140396020 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 33104));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 33104), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 33040, 0LL, 0LL, 0LL, 0);
  return result;
}
