/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140901814
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FE450 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FE750 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408FE810 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1409019C8 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x140903728 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x140901E40 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1762LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
