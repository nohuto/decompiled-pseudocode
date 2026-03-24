/*
 * XREFs of CmFcManagerInitialize @ 0x140A38D64
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A38340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1406C3DC0 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x140795710 (CmSiRWLockInitialize.c)
 *     CmFcpWorkItemInitialize @ 0x1407D27E0 (CmFcpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x1407D44AC (RtlInitializeSwapReference.c)
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
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&RunOnce);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C480F0);
  v0 = qword_140C48108;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (_QWORD *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C48150, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C48150);
  memset(&unk_140C48168, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C48210);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C48228);
  stru_140C48248.TargetInfoAsUlong = 275;
  stru_140C48248.DpcData = 0LL;
  stru_140C48248.ProcessorHistory = 0LL;
  stru_140C48248.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C48248.DeferredContext = CmFcSystemManager;
  CmFcpWorkItemInitialize(
    (KSPIN_LOCK *)&stru_140C48288,
    v3,
    (KSPIN_LOCK)CmFcpManagerDrainUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmFcpWorkItemInitialize(
    qword_140C482D0,
    v4,
    (KSPIN_LOCK)CmFcpManagerRetryUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C48310);
  result = &qword_140C48318;
  qword_140C48320 = (__int64)&qword_140C48318;
  qword_140C48318 = (__int64)&qword_140C48318;
  return result;
}
