/*
 * XREFs of IvtIommuWaitCommand @ 0x1404E0C70
 * Callers:
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x1404E08A0 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x1404E08E0 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateExtendedContextEntry @ 0x1404E093C (IvtInvalidateExtendedContextEntry.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404E09FC (IvtInvalidateRemappingTableEntries.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IvtIommuSendCommand @ 0x1404E0A70 (IvtIommuSendCommand.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 168);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 168));
  }
  v16[0] = *(_QWORD *)(a1 + 152);
  v16[1] = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 136) = 1;
  IvtIommuSendCommand((_QWORD *)a1, v16, 1);
  v9 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 136);
    if ( !(_DWORD)result )
      break;
    if ( (++v9 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
      _mm_pause();
    else
      qword_140C4A1C0(v9, v7, v8);
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
