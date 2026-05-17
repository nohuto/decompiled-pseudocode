/*
 * XREFs of _TpPoolReferenceExistingGlobalPool@0 @ 0x4B2E9657
 * Callers:
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _TpSetDefaultPoolMaxThreads@4 @ 0x4B383C20 (_TpSetDefaultPoolMaxThreads@4.c)
 *     _TpSetDefaultPoolStackInformation@4 @ 0x4B383D40 (_TpSetDefaultPoolStackInformation@4.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _TpPoolReferenceExistingGlobalPool@0 @ 0x4B2E9657 (_TpPoolReferenceExistingGlobalPool@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall TpPoolReferenceExistingGlobalPool()
{
  int v0; // esi

  v0 = 0;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock);
    v0 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v0;
}
