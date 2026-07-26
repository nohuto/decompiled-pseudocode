/*
 * XREFs of NdisAcquireReadWriteLock @ 0x1C003CC90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x1C003CCA8 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock, fWrite, LockState, 0);
}
