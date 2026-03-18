/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x1409E7970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViExReleaseFastMutexCommon @ 0x1409E7E40 (ViExReleaseFastMutexCommon.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexNoReboot(ULONG_PTR a1)
{
  ViExReleaseFastMutexCommon(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseFastMutex)(a1);
}
