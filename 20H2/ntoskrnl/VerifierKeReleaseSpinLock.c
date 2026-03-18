/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x1409DE3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1409DF0DC (ViKeIrqlLogCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DF370 (ViKeReleaseSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409E1348 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(ULONG_PTR a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx

  v4 = ViKeReleaseSpinLockCommon(a1);
  VfDeadlockReleaseResource(a1);
  LOBYTE(v5) = a2;
  ((void (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseSpinLock)(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
