/*
 * XREFs of ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A49B0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005910 (NdisAcquireRWLockRead.c)
 *     ?IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1C00A48EC (-IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z.c)
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00A4924 (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1C00A4E08 (-ndisVerifyValidRWLockFlags@@YAXE@Z.c)
 */

void __fastcall ndisVerifyNdisAcquireRWLockRead(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, unsigned __int8 a3)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rbp

  RWLockVerifierContext = ndisGetRWLockVerifierContext(Lock);
  ndisVerifyValidRWLockFlags(a3);
  NdisAcquireRWLockRead(Lock, LockState, a3);
  if ( RWLockVerifierContext )
  {
    _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 5);
    IncrementReadConcurrency(RWLockVerifierContext);
  }
}
