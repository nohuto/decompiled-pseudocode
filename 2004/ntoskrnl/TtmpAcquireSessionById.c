/*
 * XREFs of TtmpAcquireSessionById @ 0x1408FC218
 * Callers:
 *     TtmGetSessionDisplayRequiredCount @ 0x1408FB224 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FB50C (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FB5A0 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FB614 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FB6B0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408FB7FC (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FBA18 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FBAA4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1408FBB3C (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408FBBEC (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FC770 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408FD140 (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
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
