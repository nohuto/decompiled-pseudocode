/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x1408FC6D8
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1408FC2E0 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1408FC4E8 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1408EC768 (PoTtmInitiatePowerStateTransition.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1408FFAA4 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1408FFB98 (TtmiLogInitiateModernStandbyTransitionStop.c)
 */

__int64 __fastcall TtmpInitiateModernStandbyTransition(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  TtmiLogInitiateModernStandbyTransitionStart(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  v6 = PoTtmInitiatePowerStateTransition(a2, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  TtmiLogInitiateModernStandbyTransitionStop(v8);
  return v8;
}
