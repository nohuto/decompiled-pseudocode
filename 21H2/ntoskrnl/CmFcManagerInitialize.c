/*
 * XREFs of CmFcManagerInitialize @ 0x140A39D64
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A39340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1406229A0 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x140795910 (CmSiRWLockInitialize.c)
 *     CmFcpWorkItemInitialize @ 0x1407D2950 (CmFcpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x1407D461C (RtlInitializeSwapReference.c)
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
  CmSiRWLockInitialize(&stru_140C48150);
  v0 = qword_140C48168;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (_QWORD *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C481B0, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C481B0);
  memset(&unk_140C481C8, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C48270);
  CmSiRWLockInitialize(&stru_140C48288);
  stru_140C482A8.TargetInfoAsUlong = 275;
  stru_140C482A8.DpcData = 0LL;
  stru_140C482A8.ProcessorHistory = 0LL;
  stru_140C482A8.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C482A8.DeferredContext = CmFcSystemManager;
  CmFcpWorkItemInitialize(
    (KSPIN_LOCK *)&stru_140C482E8,
    v3,
    (KSPIN_LOCK)CmFcpManagerDrainUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmFcpWorkItemInitialize(
    qword_140C48330,
    v4,
    (KSPIN_LOCK)CmFcpManagerRetryUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmSiRWLockInitialize(&stru_140C48370);
  result = &qword_140C48378;
  qword_140C48380 = (__int64)&qword_140C48378;
  qword_140C48378 = (__int64)&qword_140C48378;
  return result;
}
