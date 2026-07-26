/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C0147300
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01431B0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00042F0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     NdisFreeRWLock @ 0x1C0038D00 (NdisFreeRWLock.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     NdisFreeNetBufferListPool @ 0x1C00ADB30 (NdisFreeNetBufferListPool.c)
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
      ExDeleteNPagedLookasideList(&stru_1C00E4200);
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
  if ( qword_1C00E4148 )
  {
    ExFreePoolWithTag(qword_1C00E4148, 0);
    qword_1C00E4148 = 0LL;
  }
  if ( qword_1C00E4140 )
  {
    ExFreePoolWithTag(qword_1C00E4140, 0);
    qword_1C00E4140 = 0LL;
  }
  if ( qword_1C00E4138 )
  {
    ExFreePoolWithTag(qword_1C00E4138, 0);
    qword_1C00E4138 = 0LL;
  }
  if ( qword_1C00E4130 )
  {
    ExFreePoolWithTag(qword_1C00E4130, 0);
    qword_1C00E4130 = 0LL;
  }
}
