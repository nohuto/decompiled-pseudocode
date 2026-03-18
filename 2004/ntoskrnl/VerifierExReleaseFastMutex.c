/*
 * XREFs of VerifierExReleaseFastMutex @ 0x1409E18F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1409D90BC (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409DB328 (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x1409E1E20 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(const void *a1)
{
  __int64 v2; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 3, (__int64)KeGetCurrentThread(), retaddr);
  ((void (__fastcall *)(const void *))pXdvExReleaseFastMutex)(a1);
  ViKeIrqlLogCommon(v2, 1u);
}
