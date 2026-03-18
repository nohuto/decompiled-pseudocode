/*
 * XREFs of PpmPerfQueueAction @ 0x140395BCC
 * Callers:
 *     PpmParkReportParkedCores @ 0x1402FCA20 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140300380 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1403003D0 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x140395450 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
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
