/*
 * XREFs of HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E2F64
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1404E0660 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E1AA0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     HsaBuildInterruptRemappingEntry @ 0x1404E0D78 (HsaBuildInterruptRemappingEntry.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1404E21F8 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaUpdateRemappingTableInDeviceTableEntry(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int128 *v8; // r10
  __int128 v9; // xmm1
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 result; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-30h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = a2;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 152);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 152));
  v8 = (__int128 *)(*(_QWORD *)(a1 + 24) + 32LL * v4);
  v9 = v8[1];
  v20 = *v8;
  v21 = v9;
  HsaBuildInterruptRemappingEntry(a1, a3, (__int64)&v20);
  *(_QWORD *)(v10 + 16) = v21;
  _InterlockedOr(v18, 0);
  HsaInvalidateRemappingTableEntries(a1, v11, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
