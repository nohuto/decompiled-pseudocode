/*
 * XREFs of TtmpExitProximity @ 0x1408F9854
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1408F9464 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1408F9518 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1408FAA78 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x1408FE528 (TtmiLogExitProximity.c)
 */

__int64 __fastcall TtmpExitProximity(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = a2[9];
  if ( (result & 8) != 0 )
  {
    v5 = a2[67];
    a2[9] = result & 0xFFFFFFB7 | 0x40;
    TtmiLogExitProximity(v5, a2[68]);
    a2[9] |= 4u;
    return TtmiScheduleSessionWorker(a1, 2LL);
  }
  return result;
}
