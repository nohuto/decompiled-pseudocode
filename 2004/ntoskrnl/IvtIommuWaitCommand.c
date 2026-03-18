/*
 * XREFs of IvtIommuWaitCommand @ 0x1404DBA90
 * Callers:
 *     IvtFlushTbInternal @ 0x1404DAB04 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x1404DB6C0 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x1404DB700 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateExtendedContextEntry @ 0x1404DB75C (IvtInvalidateExtendedContextEntry.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404DB81C (IvtInvalidateRemappingTableEntries.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IvtIommuSendCommand @ 0x1404DB890 (IvtIommuSendCommand.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned int v7; // esi
  __int64 result; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
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
  v14[0] = *(_QWORD *)(a1 + 152);
  v14[1] = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 136) = 1;
  IvtIommuSendCommand((_QWORD *)a1, v14, 1);
  v7 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 136);
    if ( !(_DWORD)result )
      break;
    if ( (++v7 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
      _mm_pause();
    else
      qword_140C4A200(v7);
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
