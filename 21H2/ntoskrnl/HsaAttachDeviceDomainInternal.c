/*
 * XREFs of HsaAttachDeviceDomainInternal @ 0x1404E2738
 * Callers:
 *     HsaAttachDeviceDomain @ 0x1404E2720 (HsaAttachDeviceDomain.c)
 *     HsaDetachDeviceDomain @ 0x1404E2C60 (HsaDetachDeviceDomain.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     HsaFlushTbInternal @ 0x1404E303C (HsaFlushTbInternal.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HsaAttachDeviceDomainInternal(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v9; // r9d
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  _QWORD v16[2]; // [rsp+58h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v18[20]; // [rsp+88h] [rbp-9h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v16[1] = v16;
  v16[0] = v16;
  memset(v18, 0, sizeof(v18));
  if ( !a3 )
  {
    v6 = *(_DWORD *)(a1 + 172);
    if ( v6 == 2 )
    {
      v18[1] = 1;
    }
    else if ( v6 != 1 )
    {
      return 3221225473LL;
    }
    a3 = v18;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 152);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 152));
  LOBYTE(v9) = 1;
  HsaUpdateDeviceTableEntry(a1, *(_QWORD *)(a2 + 32), 0, v9, (__int64)a3, 1, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  HsaFlushTbInternal(a1, 0, a3[6], 0, 1, 0, (__int64)v16, 0, 0LL);
  return 0LL;
}
