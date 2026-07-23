/*
 * XREFs of CcUninitializeVolumeCacheMap @ 0x140301C80
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CcUninitializeVolumeCacheMap(_DWORD *P)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned __int64 OldIrql; // rdi
  _DWORD **v6; // rdx
  PVOID *v7; // rcx
  struct _DMA_ADAPTER *v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v3 = P[1];
  if ( !v3 )
    KeBugCheckEx(0x34u, 0x599uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = v3 - 1;
  P[1] = v4;
  if ( !v4 )
  {
    v2 = 1;
    v6 = (_DWORD **)*((_QWORD *)P + 2);
    v7 = (PVOID *)*((_QWORD *)P + 3);
    if ( v6[1] != P + 4 || *v7 != P + 4 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    v8 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 20);
    if ( v8 )
    {
      HalPutDmaAdapter(v8);
      *((_QWORD *)P + 20) = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6D566343u);
}
