/*
 * XREFs of TtmpSessionPowerControl @ 0x1408FCBAC
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1408FC2E0 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1408FC4E8 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     PoSessionPowerControl @ 0x1408F1FFC (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x14090094C (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x140900A40 (TtmiLogSessionPowerControlStop.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, char a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  struct _KTHREAD *CurrentThread; // rax

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  PoSessionPowerControl(a2, a3, v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
