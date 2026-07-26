/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C01472D0
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01431B0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00042F0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     NdisFreeRWLock @ 0x1C0038AC0 (NdisFreeRWLock.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     NdisFreeNetBufferListPool @ 0x1C00AD670 (NdisFreeNetBufferListPool.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  NDIS_HANDLE v1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v1 = PoolHandle;
    if ( PoolHandle )
    {
      PoolHandle = 0LL;
      v0 = v1;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_1C00E40C0);
      memset(&Lookaside, 0, 0x100uLL);
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( ndisPerCpuPoisonPills )
  {
    ExFreePoolWithTag(ndisPerCpuPoisonPills, 0);
    ndisPerCpuPoisonPills = 0LL;
  }
  if ( qword_1C00E4008 )
  {
    ExFreePoolWithTag(qword_1C00E4008, 0);
    qword_1C00E4008 = 0LL;
  }
  if ( qword_1C00E4000 )
  {
    ExFreePoolWithTag(qword_1C00E4000, 0);
    qword_1C00E4000 = 0LL;
  }
  if ( qword_1C00E3FF8 )
  {
    ExFreePoolWithTag(qword_1C00E3FF8, 0);
    qword_1C00E3FF8 = 0LL;
  }
  if ( qword_1C00E3FF0 )
  {
    ExFreePoolWithTag(qword_1C00E3FF0, 0);
    qword_1C00E3FF0 = 0LL;
  }
}
