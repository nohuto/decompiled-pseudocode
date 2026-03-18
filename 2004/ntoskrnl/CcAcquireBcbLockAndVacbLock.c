/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1402BE6F8
 * Callers:
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404E5F28 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E60F4 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
