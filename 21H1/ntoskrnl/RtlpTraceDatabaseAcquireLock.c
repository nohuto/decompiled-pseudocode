/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x140589110
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140588D30 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x140588F50 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140589020 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x140589090 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1405890D0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
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
