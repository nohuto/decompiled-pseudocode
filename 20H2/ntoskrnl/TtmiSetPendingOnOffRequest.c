/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x140900378
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x140900138 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x14090042C (TtmiTerminalMonitorControl.c)
 *     TtmiSetDisplayPowerRequest @ 0x140901A88 (TtmiSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14090392C (TtmpDispatchSetDisplayState.c)
 * Callees:
 *     TtmpExitProximity @ 0x140900764 (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x140900940 (TtmpShouldEscapeProximity.c)
 *     TtmiScheduleSessionWorker @ 0x140901990 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x1409058BC (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x1409074C8 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1409075E0 (TtmiLogTerminalOnRequest.c)
 */

__int64 __fastcall TtmiSetPendingOnOffRequest(__int64 a1, unsigned int *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rcx

  v8 = a1;
  if ( (a2[9] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)TtmpShouldEscapeProximity(a2) )
    {
      LOBYTE(a1) = a3;
      return TtmiLogProximityBlockedRequest(a1, a4, a5);
    }
    LOBYTE(v9) = a4;
    TtmpExitProximity(v8, a2, v9);
  }
  v10 = a2[7];
  if ( a3 )
    TtmiLogTerminalOnRequest(v10, a4, a5);
  else
    TtmiLogTerminalOffRequest(v10, a4, a5);
  a2[14] = a4;
  a2[9] |= 4u;
  a2[13] = 2 - (a3 != 0);
  return TtmiScheduleSessionWorker(v8, 2LL);
}
