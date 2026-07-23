/*
 * XREFs of CmFcManagerInitialize @ 0x140A35D98
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A35340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1406EDC50 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x14077E460 (CmSiRWLockInitialize.c)
 *     CmFcpWorkItemInitialize @ 0x1407BCB30 (CmFcpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x1407BE5F8 (RtlInitializeSwapReference.c)
 */

__int64 *CmFcManagerInitialize()
{
  _QWORD *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 *result; // rax

  memset(CmFcSystemManager, 0, 0x368uLL);
  CmSiRWLockInitialize(&RunOnce);
  CmSiRWLockInitialize(&stru_140C480D0);
  v0 = qword_140C480E8;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (_QWORD *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C48130, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C48130);
  memset(&unk_140C48148, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C481F0);
  CmSiRWLockInitialize(&stru_140C48208);
  stru_140C48228.TargetInfoAsUlong = 275;
  stru_140C48228.DpcData = 0LL;
  stru_140C48228.ProcessorHistory = 0LL;
  stru_140C48228.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C48228.DeferredContext = CmFcSystemManager;
  CmFcpWorkItemInitialize(
    (KSPIN_LOCK *)&stru_140C48268,
    v3,
    (KSPIN_LOCK)CmFcpManagerDrainUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmFcpWorkItemInitialize(
    qword_140C482B0,
    v4,
    (KSPIN_LOCK)CmFcpManagerRetryUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmSiRWLockInitialize(&stru_140C482F0);
  result = &qword_140C482F8;
  qword_140C48300 = (__int64)&qword_140C482F8;
  qword_140C482F8 = (__int64)&qword_140C482F8;
  return result;
}
