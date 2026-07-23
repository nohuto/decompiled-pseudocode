/*
 * XREFs of MiNoPagesLastChance @ 0x140550A08
 * Callers:
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PsGetJobLastThrottledIoTime @ 0x140582070 (PsGetJobLastThrottledIoTime.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r8
  const void *v3; // r15
  int v4; // r14d
  int v5; // eax
  unsigned __int64 v6; // rbp
  __int64 v7; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // r13d
  ULONG v15; // esi
  const void *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v20; // r11
  unsigned __int64 *v21; // r15
  __int64 v22; // r13
  __int64 *v23; // rbx
  __int64 v24; // r12
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  struct _WORK_QUEUE_ITEM *v36; // rbx
  char v37; // cl
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v40; // r9
  int v41; // eax
  _DWORD *v42; // r9
  unsigned __int64 *v43; // [rsp+40h] [rbp-88h]
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-80h]
  int BugCheckParameter3_4; // [rsp+4Ch] [rbp-7Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-70h] BYREF
  __int64 v47; // [rsp+70h] [rbp-58h]
  unsigned __int64 v48; // [rsp+78h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-48h]
  __int64 v50; // [rsp+88h] [rbp-40h]
  int v52; // [rsp+E8h] [rbp+20h]

  v2 = (_QWORD *)*(unsigned int *)(a1 + 676);
  v3 = *(const void **)(a1 + 7600);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = (int)v2;
  v5 = *(_DWORD *)(a1 + 680);
  v6 = a2;
  v7 = (unsigned int)v5 >> 31;
  BugCheckParameter2 = (ULONG_PTR)v3;
  v9 = 0LL;
  if ( v5 >= 0 )
    v5 = 0;
  v10 = 0LL;
  LockHandle.LockQueue = 0LL;
  if ( (int)v2 >= 0 )
    v4 = v5;
  v11 = *(_DWORD *)(a1 + 6936);
  v12 = (unsigned int)v7 | 2;
  BugCheckParameter3_4 = v4;
  if ( (int)v2 >= 0 )
    v12 = (unsigned int)v7;
  if ( !v11 )
    goto LABEL_13;
  v7 = a1 + 6944;
  v13 = v11;
  do
  {
    v2 = *(_QWORD **)v7;
    if ( (*(_WORD *)(*(_QWORD *)v7 + 204LL) & 0x50) == 0 )
    {
      v9 += v2[1] - *v2;
      v10 += v2[3];
    }
    v7 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v10 < 0x400 )
LABEL_13:
    v12 = (unsigned int)v12 | 4;
  v14 = v12 | 8;
  if ( v9 >= 0x400 )
    v14 = v12;
  BugCheckParameter3 = v14;
  if ( dword_140C4E704 )
  {
    v15 = 243;
  }
  else
  {
    v16 = *(const void **)(a1 + 7552);
    v17 = *(_QWORD *)(a1 + 7488) >> 2;
    if ( (unsigned __int64)v16 < v17 )
    {
      v15 = *(_QWORD *)(a1 + 7600) < v17 ? 235 : 77;
    }
    else
    {
      v15 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 7552);
      v3 = v16;
    }
  }
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
  if ( !*(_QWORD *)(v18 + 1296)
    || (PsGetJobLastThrottledIoTime(*(_QWORD *)(v18 + 1296), v12, v2, v7),
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(),
        (unsigned __int64)(UnbiasedInterruptTime - v20) >= -MiNoPagesTimeout.QuadPart) )
  {
    if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
    {
      v52 = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v15,
        *(const void **)(a1 + 7488),
        v3,
        v14,
        v4);
      if ( (MiFlags & 8) != 0 )
        __debugbreak();
      v52 = 1;
    }
    if ( !(unsigned int)MiSufficientAvailablePages(a1, v6)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4884), 1, 0) )
    {
      v21 = (unsigned __int64 *)(a1 + 3488);
      v22 = 0LL;
      v23 = (__int64 *)(a1 + 3472);
      v48 = 0LL;
      v24 = 16LL;
      v43 = (unsigned __int64 *)(a1 + 3488);
      v47 = 16LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = v21;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v21);
        v27 = *v23;
        if ( *v23 != 0xFFFFFFFFFLL )
        {
          while ( 1 )
          {
            v50 = 48 * v27;
            v28 = 48 * v27 - 0x58000000000LL;
            v27 = *(_QWORD *)v28 & 0xFFFFFFFFFLL;
            v29 = *(_QWORD *)(v28 + 16);
            if ( qword_140C4DF80 && (v29 & 0x10) == 0 )
              v29 &= ~qword_140C4DF80;
            v30 = *(_QWORD *)(v29 >> 16);
            if ( (*(_DWORD *)(v30 + 56) & 0x28) == 0
              && (!v22 || v22 == v30)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
              if ( (*(_DWORD *)(v30 + 56) & 8) == 0 )
              {
                if ( !v22 )
                {
                  v48 = ObFastReferenceObjectLocked((_QWORD *)(v30 + 64));
                  v22 = v30;
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
                MiUnlinkPageFromList(v28, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v37 = *(_BYTE *)(v28 + 34);
                *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
                *(_BYTE *)(v28 + 34) = v37 & 0xEF;
                MiPfnReferenceCountIsZero(v28, v50 / 48);
                _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v38 = KeGetCurrentIrql();
                    if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v40 = CurrentPrcb->SchedulerAssist;
                      v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v35 = (v41 & v40[5]) == 0;
                      v40[5] &= v41;
                      if ( v35 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8(CurrentIrql);
                ++dword_140C4CC54;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                {
                  v42 = KeGetCurrentPrcb()->SchedulerAssist;
                  v42[5] |= (-1 << (CurrentIrql + 1)) & 4;
                }
                v21 = v43;
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = v43;
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v43);
                v27 = *v23;
                goto LABEL_47;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v21 = v43;
LABEL_47:
            if ( v27 == 0xFFFFFFFFFLL )
            {
              v24 = v47;
              break;
            }
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v35 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
        }
        __writecr8(CurrentIrql);
        v21 += 5;
        v23 += 5;
        --v24;
        v43 = v21;
        v47 = v24;
      }
      while ( v24 );
      v36 = (struct _WORK_QUEUE_ITEM *)(a1 + 4840);
      if ( v22 )
      {
        *(_QWORD *)(a1 + 4872) = v48;
        *(_DWORD *)(a1 + 4880) = -1073741566;
        v36->List.Flink = 0LL;
        *(_QWORD *)(a1 + 4856) = MiLdwPopupWorker;
        *(_QWORD *)(a1 + 4864) = a1 + 4840;
        ExQueueWorkItem(v36, DelayedWorkQueue);
        ++dword_140C4CC50;
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 4884), 0);
        if ( !v52 )
          KeBugCheckEx(v15, *(_QWORD *)(a1 + 7488), BugCheckParameter2, BugCheckParameter3, BugCheckParameter3_4);
      }
    }
  }
}
