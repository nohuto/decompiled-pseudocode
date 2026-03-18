/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x140904378
 * Callers:
 *     NtGetNextThread @ 0x140703180 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140881DA4 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
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
