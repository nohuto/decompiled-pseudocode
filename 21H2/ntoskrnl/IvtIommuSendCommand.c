/*
 * XREFs of IvtIommuSendCommand @ 0x1404E0A70
 * Callers:
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x1404E08A0 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x1404E08E0 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateExtendedContextEntry @ 0x1404E093C (IvtInvalidateExtendedContextEntry.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404E09FC (IvtInvalidateRemappingTableEntries.c)
 *     IvtIommuWaitCommand @ 0x1404E0C70 (IvtIommuWaitCommand.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IvtIommuSendCommand(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 result; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 == 1 )
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
    LockHandle.LockQueue.Lock = a1 + 21;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 21);
  }
  v7 = a1[1];
  v8 = *(_QWORD *)(v7 + 136);
  v9 = a1[9];
  v24 = v9;
  v10 = ((unsigned int)(v8 >> 4) & 0x7FFF) + 1;
  v11 = 0;
  v12 = 0;
  v13 = a1[11] >> 4;
  if ( (_DWORD)v10 != (_DWORD)v13 )
    v12 = ((v8 >> 4) & 0x7FFF) + 1;
  v14 = v12;
  if ( v12 == ((*(_QWORD *)(v7 + 128) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v11 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
        _mm_pause();
      else
        qword_140C4A1C0(v11, v10, v13);
    }
    while ( v14 == ((*(_QWORD *)(v7 + 128) >> 4) & 0x7FFFLL) );
    v9 = v24;
  }
  v15 = 2 * ((v8 >> 4) & 0x7FFF);
  *(_QWORD *)(v9 + 8 * v15) = *a2;
  result = a2[1];
  *(_QWORD *)(v9 + 8 * v15 + 8) = result;
  *(_QWORD *)(v7 + 136) = ((unsigned int)v8 ^ (16 * (_DWORD)v14)) & 0x7FFF0 ^ v8;
  _InterlockedOr(v22, 0);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
