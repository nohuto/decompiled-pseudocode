/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x140298384
 * Callers:
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1402F9F78 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404E94B8 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E9684 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
