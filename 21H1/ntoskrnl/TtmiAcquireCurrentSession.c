/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408FA8FC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408F7550 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408F7850 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408F7910 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408FAAB0 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1408FC7E4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408FAF28 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1763LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
