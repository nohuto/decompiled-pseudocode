/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408FBBEC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408F8840 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408F8B40 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408F8C00 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408FBDA0 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1408FDAD4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140347CD0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
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
