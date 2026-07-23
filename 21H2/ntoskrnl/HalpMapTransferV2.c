/*
 * XREFs of HalpMapTransferV2 @ 0x1404CCBD4
 * Callers:
 *     IoMapTransferInternal @ 0x140388E3C (IoMapTransferInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDmaZeroMapBuffers @ 0x1404C8B14 (HalpDmaZeroMapBuffers.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404CDCEC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404CDE44 (HalpDmaMapScatterTransferV2.c)
 */

__int64 __fastcall HalpMapTransferV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, char a6)
{
  __int64 result; // rax
  bool v11; // r15
  char v12; // si
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // r8
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v24; // [rsp+A0h] [rbp+40h]

  result = 0LL;
  v22 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *a5 )
  {
    v11 = !a1 || *(_BYTE *)(a1 + 433);
    v24 = *(_QWORD **)(a3 + 56);
    if ( a1 && *(_BYTE *)(a1 + 434) )
    {
      v12 = a6;
      HalpDmaMapScatterTransferV2(a1, a2, a3, a4, (__int64)a5, a6, (__int64)&v22);
    }
    else
    {
      v12 = a6;
      HalpDmaMapContiguousTransferV2(a1, a2, a3, a4, (__int64)a5, a6, (__int64)&v22);
    }
    v14 = *a5;
    if ( !v11 )
    {
      if ( !v12 && *(_BYTE *)(a1 + 436) )
        HalpDmaZeroMapBuffers(v13, v24, a4 & 0xFFF, v14);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 152) + 120LL), &LockHandle);
      LOBYTE(v15) = v12;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, unsigned int))(DmaDispatch + 40))(
        *(_QWORD *)(a1 + 424),
        a2,
        v15,
        a4,
        v22,
        v14);
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
            v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v22;
  }
  return result;
}
