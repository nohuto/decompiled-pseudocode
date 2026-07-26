/*
 * XREFs of ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00A4AA4
 * Callers:
 *     ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4B30 (-ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4BA0 (-ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00A4D70 (-ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4DE0 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4E60 (-ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00A4EE0 (-ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

struct NDIS_VERIFY_RW_LOCK_EX *__fastcall ndisGetRWLockVerifierContext(struct _NDIS_RW_LOCK_EX *a1)
{
  if ( *(_DWORD *)a1 == 827086674 )
    return 0LL;
  if ( *(_DWORD *)a1 != 1447843666 )
    ndisBugCheckEx(0x31uLL, 1uLL, 0LL, 0LL);
  return a1;
}
