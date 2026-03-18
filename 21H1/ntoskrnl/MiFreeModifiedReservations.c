/*
 * XREFs of MiFreeModifiedReservations @ 0x14053DC04
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x14053E114 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeModifiedReservations(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int16 v4; // r8
  __int64 result; // rax
  int v6; // r13d
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // rdi
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v16; // r10
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_WORD *)(a1 + 204);
  result = 0LL;
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v4 & 0x40) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 248);
    v8 = 0LL;
    v9 = (_DWORD)a2 == 0 ? 0x10000 : 0;
    v10 = v4 & 0xF;
    v11 = 5LL * (unsigned int)v10;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v7 + 8 * v11 + 2832);
      result = 0xFFFFFFFFFLL;
      if ( v21 == 0xFFFFFFFFFLL )
        break;
      v12 = 48 * v21 - 0x58000000000LL;
      v13 = MiLockPageInline(v12, a2, v10, SchedulerAssist);
      LockHandle.LockQueue.Next = 0LL;
      v14 = v13;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 7520);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 7520));
      if ( v21 == *(_QWORD *)(v7 + 8 * v11 + 2832) )
      {
        MiUnlinkPageFromList(48 * v21 - 0x58000000000LL, 1);
        v19 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = v19 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v12, 0x88u);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo(v7, v19, 1);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              a2 = -1LL << ((unsigned __int8)v14 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)a2;
              v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              v10 = (unsigned int)result & SchedulerAssist[5];
              SchedulerAssist[5] = v10;
              if ( v18 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v14);
        ++v8;
        if ( !v6 && v8 >= v9 )
          return result;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
            {
              v16 = KeGetCurrentPrcb();
              a2 = -1LL << ((unsigned __int8)v14 + 1);
              SchedulerAssist = v16->SchedulerAssist;
              v17 = ~(unsigned __int16)a2;
              v18 = (v17 & SchedulerAssist[5]) == 0;
              v10 = (unsigned int)v17 & SchedulerAssist[5];
              SchedulerAssist[5] = v10;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick((__int64)v16);
            }
          }
        }
        __writecr8(v14);
      }
    }
  }
  return result;
}
