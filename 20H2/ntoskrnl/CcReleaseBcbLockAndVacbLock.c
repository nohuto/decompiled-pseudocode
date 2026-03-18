/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x140298304
 * Callers:
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1402F9F78 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404E94B8 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E9684 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
