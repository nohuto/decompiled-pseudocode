/*
 * XREFs of CmFcManagerInitialize @ 0x140A35D98
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A35340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1407115E0 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x14077DC50 (CmSiRWLockInitialize.c)
 *     CmFcpWorkItemInitialize @ 0x1407BFCA0 (CmFcpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x1407C187C (RtlInitializeSwapReference.c)
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
  CmSiRWLockInitialize(&stru_140C47F50);
  v0 = qword_140C47F68;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (_QWORD *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C47FB0, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C47FB0);
  memset(&unk_140C47FC8, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C48070);
  CmSiRWLockInitialize(&stru_140C48088);
  stru_140C480A8.TargetInfoAsUlong = 275;
  stru_140C480A8.DpcData = 0LL;
  stru_140C480A8.ProcessorHistory = 0LL;
  stru_140C480A8.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C480A8.DeferredContext = CmFcSystemManager;
  CmFcpWorkItemInitialize(
    (KSPIN_LOCK *)&stru_140C480E8,
    v3,
    (KSPIN_LOCK)CmFcpManagerDrainUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmFcpWorkItemInitialize(
    qword_140C48130,
    v4,
    (KSPIN_LOCK)CmFcpManagerRetryUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmSiRWLockInitialize(&stru_140C48170);
  result = &qword_140C48178;
  qword_140C48180 = (__int64)&qword_140C48178;
  qword_140C48178 = (__int64)&qword_140C48178;
  return result;
}
