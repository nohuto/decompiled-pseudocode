/*
 * XREFs of TtmpAcquireSessionById @ 0x1408FAF28
 * Callers:
 *     TtmGetSessionDisplayRequiredCount @ 0x1408F9F34 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FA21C (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FA2B0 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FA324 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FA3C0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408FA50C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FA728 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FA7B4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1408FA84C (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408FA8FC (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FB480 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408FBE50 (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  v4 = TtmpEnabled == 1;
  *a1 = 0LL;
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1702LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1691LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v2;
}
