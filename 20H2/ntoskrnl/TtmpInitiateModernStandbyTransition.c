/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x140902300
 * Callers:
 *     TtmpActivateSessionWorker @ 0x140901F08 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x140902110 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1408F2378 (PoTtmInitiatePowerStateTransition.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409056F8 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409057EC (TtmiLogInitiateModernStandbyTransitionStop.c)
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
