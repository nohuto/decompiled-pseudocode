/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x14031BA74
 * Callers:
 *     CcExtendVacbArray @ 0x140212CB4 (CcExtendVacbArray.c)
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404EB288 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404EB454 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
