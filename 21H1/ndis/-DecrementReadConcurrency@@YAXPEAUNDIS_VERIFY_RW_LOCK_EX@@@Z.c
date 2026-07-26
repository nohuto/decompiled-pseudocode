/*
 * XREFs of ?DecrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1C00A4408
 * Callers:
 *     ?ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00A4730 (-ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 *     ?ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00A48A0 (-ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DecrementReadConcurrency(struct NDIS_VERIFY_RW_LOCK_EX *a1)
{
  if ( *(_QWORD *)((KeGetPcr()->Prcb.Number << 12) + *((_QWORD *)a1 + 4)) == 1LL )
    _InterlockedDecrement((volatile signed __int32 *)a1 + 26);
}
