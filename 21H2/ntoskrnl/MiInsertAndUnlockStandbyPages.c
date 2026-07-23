/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x140330C10
 * Callers:
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140337130 (MiDecrementAndInsertStandbyPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1403341C0 (MiInsertProtectedStandbyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  ULONG_PTR v13; // r9
  char v14; // cl
  unsigned __int64 v15; // r8
  char v16; // al
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
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
      v13 = *(_QWORD *)(*v7 + 24LL) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v13 || (v14 = *(_BYTE *)(v12 + 34), (v14 & 7) == 6) || (v14 & 0x10) != 0 )
        KeBugCheckEx(0x4Eu, 6uLL, (*v7 + 0x58000000000LL) / 48, v13, *(unsigned int *)(v12 + 32));
      v15 = *(_QWORD *)(v12 + 40);
      if ( (v15 & 0x2000000000000LL) != 0 || (v16 = *(_BYTE *)(v12 + 35), (v16 & 0x40) != 0) )
      {
        if ( v10 != 0xFFFFFF )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v10 = 0xFFFFFF;
        }
        v18 = 4LL;
      }
      else
      {
        if ( (v16 & 8) != 0 )
          v17 = 5;
        else
          v17 = v16 & 7;
        if ( !v9 )
          v9 = *(_QWORD *)(qword_140C4E688 + 8 * ((v15 >> 39) & 0x3FF));
        if ( v17 != v10 || v9 != *(_QWORD *)(qword_140C4E688 + 8 * ((v15 >> 39) & 0x3FF)) )
        {
          if ( v10 != 0xFFFFFF )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v15 = *(_QWORD *)(v12 + 40);
          }
          v10 = v17;
          v22 = (v15 >> 39) & 0x3FF;
          v9 = *(_QWORD *)(qword_140C4E688 + 8LL * (unsigned int)v22);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 8 * (v17 + 4 * (v17 + 77LL)));
          KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock, v22, v13);
        }
        v18 = 132LL;
      }
      MiInsertPageInList(v12, v18);
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
    v23 = a2;
    v24 = a3;
    do
    {
      MiInsertProtectedStandbyPage(a1, *v23++);
      --v24;
    }
    while ( v24 );
LABEL_19:
    v6 = a4;
  }
LABEL_20:
  v19 = a3 - 1;
  if ( v6 == 17 )
    v19 = a3;
  if ( v19 )
  {
    v20 = v7;
    v21 = v19;
    v4 = v19;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*v20++ + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      --v21;
    }
    while ( v21 );
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
          v28 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v29 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
}
