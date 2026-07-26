/*
 * XREFs of ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00A431C
 * Callers:
 *     ?ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z @ 0x1C003D3A8 (-ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseReadLockSharedRefCnt(PKSPIN_LOCK SpinLock)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // eax

  KeAcquireSpinLockAtDpcLevel(SpinLock + 2);
  v2 = 0LL;
  v3 = *((_DWORD *)SpinLock + 6) - 1;
  *((_DWORD *)SpinLock + 6) = v3;
  if ( !v3 )
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  KeReleaseSpinLockFromDpcLevel(SpinLock + 2);
  v4 = qword_1C00E61A0 + 520LL * KeGetPcr()->Prcb.Number;
  v5 = *(_DWORD *)(v4 + 512);
  if ( v5 )
  {
    while ( SpinLock != *(PKSPIN_LOCK *)(v4 + 8 * v2) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v5 )
        return;
    }
    v6 = v5 - 1;
    *(_DWORD *)(v4 + 512) = v6;
    *(_QWORD *)(v4 + 8 * v2) = *(_QWORD *)(v4 + 8LL * v6);
  }
}
