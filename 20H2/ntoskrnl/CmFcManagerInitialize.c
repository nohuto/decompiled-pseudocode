/*
 * XREFs of CmFcManagerInitialize @ 0x140A3BD98
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A3B340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1406E4120 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x14078B1F0 (CmSiRWLockInitialize.c)
 *     CmFcpWorkItemInitialize @ 0x1407CE530 (CmFcpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x1407D007C (RtlInitializeSwapReference.c)
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
  CmSiRWLockInitialize(&stru_140C47FB0);
  v0 = qword_140C47FC8;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (_QWORD *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C48010, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C48010);
  memset(&unk_140C48028, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C480D0);
  CmSiRWLockInitialize(&stru_140C480E8);
  stru_140C48108.TargetInfoAsUlong = 275;
  stru_140C48108.DpcData = 0LL;
  stru_140C48108.ProcessorHistory = 0LL;
  stru_140C48108.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C48108.DeferredContext = CmFcSystemManager;
  CmFcpWorkItemInitialize(
    (KSPIN_LOCK *)&stru_140C48148,
    v3,
    (KSPIN_LOCK)CmFcpManagerDrainUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmFcpWorkItemInitialize(
    qword_140C48190,
    v4,
    (KSPIN_LOCK)CmFcpManagerRetryUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmSiRWLockInitialize(&stru_140C481D0);
  result = &qword_140C481D8;
  qword_140C481E0 = (__int64)&qword_140C481D8;
  qword_140C481D8 = (__int64)&qword_140C481D8;
  return result;
}
