/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x1403412FC
 * Callers:
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiRemovePageAnyColor @ 0x140303FE8 (MiRemovePageAnyColor.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x140230AA0 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x140341520 (KxTryToAcquireQueuedSpinLock.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, __int16 a5)
{
  ULONG_PTR v5; // r15
  int v6; // r10d
  _QWORD *v7; // r13
  int v9; // r12d
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v12; // rdi
  signed __int8 v13; // al
  volatile __int64 *v14; // rdx
  unsigned __int8 v15; // al
  bool v16; // cf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // edx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  bool v30; // cf
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v37; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp+58h]
  int v39; // [rsp+A8h] [rbp+60h]

  v39 = (int)SchedulerAssist;
  v38 = a3;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = (int)SchedulerAssist;
  v7 = (_QWORD *)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 == 0xFFFFFFFFFLL )
    return 0LL;
  v9 = a5 & 1;
  while ( 1 )
  {
    v10 = 48 * v5 - 0x58000000000LL;
    if ( v9 )
    {
      v12 = (volatile signed __int32 *)(v10 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)a2 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v12 = (volatile signed __int32 *)(v10 + 24);
      v13 = _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL);
      if ( (a5 & 0x4000) != 0 )
      {
        v37 = 0;
        if ( v13 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v37, a2, a3, (__int64)SchedulerAssist);
            while ( *(__int64 *)v12 < 0 );
          }
          while ( _interlockedbittestandset64(v12, 0x3FuLL) );
          v6 = v39;
        }
      }
      else if ( v13 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && CurrentIrql <= 0xFu )
            {
              v30 = v31 < 2u;
              goto LABEL_77;
            }
          }
        }
LABEL_28:
        __writecr8(CurrentIrql);
        return 0LL;
      }
    }
    if ( (*(_BYTE *)(v10 + 34) & 7) != v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        goto LABEL_25;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && CurrentIrql <= 0xFu )
          {
            v16 = v15 < 2u;
            goto LABEL_50;
          }
        }
      }
LABEL_24:
      __writecr8(CurrentIrql);
      goto LABEL_25;
    }
    LockHandle.LockQueue.Next = 0LL;
    v14 = v7 + 4;
    LockHandle.LockQueue.Lock = v7 + 4;
    if ( (a5 & 0x4000) == 0 )
    {
      if ( (unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle, v14, a3, SchedulerAssist) )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        return 0LL;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && CurrentIrql <= 0xFu )
          {
            v30 = v29 < 2u;
LABEL_77:
            if ( !v30 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v33 = CurrentPrcb->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            goto LABEL_28;
          }
        }
      }
      goto LABEL_28;
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v14);
LABEL_11:
    if ( v5 == v7[2] )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu )
          {
            v16 = v17 < 2u;
LABEL_50:
            if ( !v16 )
            {
              v18 = KeGetCurrentPrcb();
              a2 = -1LL << (CurrentIrql + 1);
              SchedulerAssist = v18->SchedulerAssist;
              v19 = ~(unsigned __int16)a2;
              v20 = (v19 & SchedulerAssist[5]) == 0;
              a3 = (unsigned int)v19 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
        }
      }
      goto LABEL_24;
    }
LABEL_25:
    v5 = v7[2];
    if ( v5 == 0xFFFFFFFFFLL )
      return 0LL;
    v6 = v39;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, v7, a5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v9 && v7[2] != 0xFFFFFFFFFLL )
      MiReplenishPageSlist(a1, v39, v38);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 48 * v5 - 0x58000000000LL;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiReturnFreeZeroPage(48 * v5 - 0x58000000000LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}
