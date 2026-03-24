/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x140325EC0
 * Callers:
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14032C3E0 (MiDecrementAndInsertStandbyPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140329470 (MiInsertProtectedStandbyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, _QWORD *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v4; // r13d
  unsigned __int8 v6; // bl
  _QWORD *v7; // r14
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // esi
  __int64 v12; // rdi
  char v13; // cl
  unsigned __int64 v14; // r8
  char v15; // al
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v6 = a4;
  v7 = a2;
  v9 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 )
  {
    v10 = 0xFFFFFF;
    v11 = 0;
    if ( !a3 )
      goto LABEL_20;
    do
    {
      v12 = *v7;
      if ( (*(_QWORD *)(*v7 + 24LL) & 0x3FFFFFFFFFFFFFFFLL) != 0
        || (v13 = *(_BYTE *)(v12 + 34), (v13 & 7) == 6)
        || (v13 & 0x10) != 0 )
      {
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          (*v7 + 0x58000000000LL) / 48,
          *(_QWORD *)(*v7 + 24LL) & 0x3FFFFFFFFFFFFFFFLL,
          *(unsigned int *)(v12 + 32));
      }
      v14 = *(_QWORD *)(v12 + 40);
      if ( (v14 & 0x2000000000000LL) != 0 || (v15 = *(_BYTE *)(v12 + 35), (v15 & 0x40) != 0) )
      {
        if ( v10 != 0xFFFFFF )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v10 = 0xFFFFFF;
        }
        v17 = 4LL;
      }
      else
      {
        if ( (v15 & 8) != 0 )
          v16 = 5;
        else
          v16 = v15 & 7;
        if ( !v9 )
          v9 = *(_QWORD *)(qword_140C4E648 + 8 * ((v14 >> 39) & 0x3FF));
        if ( v16 != v10 || v9 != *(_QWORD *)(qword_140C4E648 + 8 * ((v14 >> 39) & 0x3FF)) )
        {
          if ( v10 != 0xFFFFFF )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v14 = *(_QWORD *)(v12 + 40);
          }
          v10 = v16;
          v21 = (v14 >> 39) & 0x3FF;
          v9 = *(_QWORD *)(qword_140C4E648 + 8LL * (unsigned int)v21);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 8 * (v16 + 4 * (v16 + 77LL)));
          KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock, v21);
        }
        v17 = 132LL;
      }
      MiInsertPageInList(v12, v17);
      ++v11;
      ++v7;
    }
    while ( v11 < a3 );
    if ( v10 != 0xFFFFFF )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = a2;
    goto LABEL_19;
  }
  if ( a3 )
  {
    v22 = a2;
    v23 = a3;
    do
    {
      MiInsertProtectedStandbyPage(a1, *v22++);
      --v23;
    }
    while ( v23 );
LABEL_19:
    v6 = a4;
  }
LABEL_20:
  v18 = a3 - 1;
  if ( v6 == 17 )
    v18 = a3;
  if ( v18 )
  {
    v19 = v7;
    v20 = v18;
    v4 = v18;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*v19++ + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      --v20;
    }
    while ( v20 );
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7[v4] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
}
