/*
 * XREFs of HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E4CD4
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1404E2300 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E37D0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HsaBuildInterruptRemappingEntry @ 0x1404E2A74 (HsaBuildInterruptRemappingEntry.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1404E3EBC (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaUpdateRemappingTableInDeviceTableEntry(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  _OWORD *v8; // rdi
  __int128 v9; // xmm1
  __int64 v10; // rdx
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]
  int i; // [rsp+A8h] [rbp+48h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
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
  v8 = (_OWORD *)(*(_QWORD *)(a1 + 24) + 32LL * *a2);
  v9 = v8[1];
  v21 = *v8;
  v22 = v9;
  HsaBuildInterruptRemappingEntry(a1, a3, (__int64)&v21);
  v11 = 0;
  for ( i = *a2; v11 < a2[1]; v8 += 2 * v12 )
  {
    *((_QWORD *)v8 + 2) = v22;
    _InterlockedOr(v19, 0);
    HsaInvalidateRemappingTableEntries(a1, v10, 1LL);
    v12 = a2[2];
    ++v11;
    i += v12;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
