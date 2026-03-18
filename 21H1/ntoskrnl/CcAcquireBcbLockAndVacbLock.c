/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x14022BA78
 * Callers:
 *     CcGetVacbMiss @ 0x14022B6B0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1402EEC04 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404E5978 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E5B44 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
