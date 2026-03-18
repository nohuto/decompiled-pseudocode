/*
 * XREFs of TtmpEnterProximity @ 0x1408F97F8
 * Callers:
 *     TtmiTerminalMonitorControl @ 0x1408F9518 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1408FAA78 (TtmiScheduleSessionWorker.c)
 *     TtmiLogEnterProximity @ 0x1408FE300 (TtmiLogEnterProximity.c)
 */

__int64 __fastcall TtmpEnterProximity(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *(unsigned int *)(a2 + 36);
  if ( (result & 8) == 0 )
  {
    v5 = (unsigned int)++*(_DWORD *)(a2 + 268);
    *(_QWORD *)(a2 + 256) = -1LL;
    *(_DWORD *)(a2 + 36) = result | 8;
    TtmiLogEnterProximity(v5);
    *(_DWORD *)(a2 + 36) |= 4u;
    return TtmiScheduleSessionWorker(a1, 2LL);
  }
  return result;
}
