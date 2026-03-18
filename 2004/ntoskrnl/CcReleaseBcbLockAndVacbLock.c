/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1402BE678
 * Callers:
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404E5F28 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E60F4 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
