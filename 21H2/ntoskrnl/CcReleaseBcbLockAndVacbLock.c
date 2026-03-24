/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x140310D24
 * Callers:
 *     CcExtendVacbArray @ 0x14029B324 (CcExtendVacbArray.c)
 *     CcGetVacbMiss @ 0x1403109C0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404EB048 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404EB214 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
