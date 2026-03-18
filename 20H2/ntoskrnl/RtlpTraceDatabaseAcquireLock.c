/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14058D230
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14058CE50 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14058D070 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14058D140 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x14058D1B0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x14058D1F0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v2);
  else
    ExAcquireFastMutex((PFAST_MUTEX)v2);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
