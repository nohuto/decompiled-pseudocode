/*
 * XREFs of _LdrpLockTlsDelayedReclaimTable@0 @ 0x4B33474F
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 */

void __stdcall LdrpLockTlsDelayedReclaimTable()
{
  _RTL_SRWLOCK *v0; // esi
  int v1; // edi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_4B3A6724;
  v1 = 16;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
}
