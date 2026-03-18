/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x140909F98
 * Callers:
 *     NtGetNextThread @ 0x1406D61C0 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408878F4 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (unsigned __int64 *)(a1 + 1280);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v3);
  return KeLeaveCriticalRegionThread(a2);
}
