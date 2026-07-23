/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x140215F28
 * Callers:
 *     MiRemovePageAnyColor @ 0x140215B2C (MiRemovePageAnyColor.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14021614C (KxTryToAcquireQueuedSpinLock.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiReplenishPageSlist @ 0x140323450 (MiReplenishPageSlist.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, __int16 a5)
{
  ULONG_PTR v5; // r15
  unsigned int v6; // r10d
  int v9; // r12d
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v12; // rdi
  signed __int8 v13; // al
  unsigned __int8 v14; // al
  bool v15; // cf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // edx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int8 v28; // al
  bool v29; // cf
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v36; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+58h]
  unsigned int v38; // [rsp+A8h] [rbp+60h]

  v38 = (unsigned int)SchedulerAssist;
  v37 = a3;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = (unsigned int)SchedulerAssist;
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
        a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v12 = (volatile signed __int32 *)(v10 + 24);
      v13 = _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL);
      if ( (a5 & 0x4000) != 0 )
      {
        v36 = 0;
        if ( v13 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v36);
            while ( *(__int64 *)v12 < 0 );
          }
          while ( _interlockedbittestandset64(v12, 0x3FuLL) );
          v6 = v38;
        }
      }
      else if ( v13 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu )
            {
              v29 = v30 < 2u;
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
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu )
          {
            v15 = v14 < 2u;
            goto LABEL_50;
          }
        }
      }
LABEL_24:
      __writecr8(CurrentIrql);
      goto LABEL_25;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 32);
    if ( (a5 & 0x4000) == 0 )
    {
      if ( (unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle) )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        return 0LL;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && CurrentIrql <= 0xFu )
          {
            v29 = v28 < 2u;
LABEL_77:
            if ( !v29 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            goto LABEL_28;
          }
        }
      }
      goto LABEL_28;
    }
    KxAcquireQueuedSpinLock(&LockHandle, a2 + 32, a3, SchedulerAssist);
LABEL_11:
    if ( v5 == *(_QWORD *)(a2 + 16) )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu )
          {
            v15 = v16 < 2u;
LABEL_50:
            if ( !v15 )
            {
              v17 = KeGetCurrentPrcb();
              SchedulerAssist = v17->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v18 & SchedulerAssist[5]) == 0;
              a3 = (unsigned int)v18 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
        }
      }
      goto LABEL_24;
    }
LABEL_25:
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0xFFFFFFFFFLL )
      return 0LL;
    v6 = v38;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v9 && *(_QWORD *)(a2 + 16) != 0xFFFFFFFFFLL )
      MiReplenishPageSlist(a1, v38, v37);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v25);
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
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = v21->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}
