/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x14053FDF0
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053EC80 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementModifiedWriteCount @ 0x14029F534 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiPreventControlAreaDeletion @ 0x14031F630 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14031F71C (MiDecrementSubsection.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeFileOnlyPfn @ 0x140540274 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x14054DA40 (MiUnlinkPageFromBadList.c)
 */

__int64 MiPurgeBadFileOnlyPages()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  ULONG_PTR v2; // r12
  __int64 v3; // rdi
  unsigned __int8 v4; // al
  struct _KPRCB *v5; // r10
  _DWORD *v6; // r9
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r14
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r10
  int v16; // eax
  KIRQL v17; // al
  unsigned __int64 v18; // r15
  __int64 *v19; // rax
  volatile LONG *v20; // rcx
  __int64 *v21; // r14
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  int v24; // eax
  unsigned __int64 v25; // rbx
  __int16 v26; // r14
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // edx
  unsigned __int8 OldIrql; // cl
  unsigned __int8 v36; // al
  int v37; // edx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v40; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v40 = 0LL;
  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      LockHandle.LockQueue.Lock = qword_140C51C20;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C51C20);
      v2 = qword_140C4C950;
      byte_140C4C9B2 = 0;
      if ( qword_140C4C950 == 0xFFFFFFFFFLL )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( !KiIrqlFlags )
          goto LABEL_65;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_65;
        v36 = KeGetCurrentIrql();
        if ( v36 > 0xFu || CurrentIrql > 0xFu || v36 < 2u )
          goto LABEL_65;
        CurrentPrcb = KeGetCurrentPrcb();
        OldIrql = CurrentIrql;
        v33 = CurrentPrcb->SchedulerAssist;
        v34 = v33[5];
        goto LABEL_63;
      }
      v3 = 48 * qword_140C4C950 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        break;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v4 = KeGetCurrentIrql();
          if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
          {
            v5 = KeGetCurrentPrcb();
            v6 = v5->SchedulerAssist;
            v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v8 = (v7 & v6[5]) == 0;
            v6[5] &= v7;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)v5);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v9 = qword_140C4C940;
    MiUnlinkPageFromBadList(48 * v2 - 0x58000000000LL, 128LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiAddLockedPageCharge(48 * v2 - 0x58000000000LL, 1);
    v40 = 0LL;
    BugCheckParameter2 = 0LL;
    v13 = MiPreventControlAreaDeletion(48 * v2 - 0x58000000000LL, 1, &BugCheckParameter2, &v40);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v10 = -1LL << (CurrentIrql + 1);
          v12 = v15->SchedulerAssist;
          v16 = ~(unsigned __int16)v10;
          v8 = (v16 & v12[5]) == 0;
          v11 = (unsigned int)v16 & v12[5];
          v12[5] = v11;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v13 )
    {
      if ( v40 )
        MiReleaseControlAreaWaiters(v40);
      MiPurgeFileOnlyPfn(48 * v2 - 0x58000000000LL);
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v13 + 72));
      *(_DWORD *)(v13 + 56) &= ~4u;
      v18 = v17;
      v19 = (__int64 *)MiDecrementModifiedWriteCount(v13, 1);
      v20 = (volatile LONG *)(v13 + 72);
      v40 = v19;
      v21 = v19;
      ExReleaseSpinLockExclusiveFromDpcLevel(v20);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v10 = -1LL << ((unsigned __int8)v18 + 1);
            v12 = v23->SchedulerAssist;
            v24 = ~(unsigned __int16)v10;
            v8 = (v24 & v12[5]) == 0;
            v11 = (unsigned int)v24 & v12[5];
            v12[5] = v11;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)v23);
            v21 = v40;
          }
        }
      }
      __writecr8(v18);
      if ( v21 )
        MiReleaseControlAreaWaiters(v21);
    }
    v25 = (unsigned __int8)MiLockPageInline(48 * v2 - 0x58000000000LL, v10, v11, v12);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v2 - 0x58000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v2 - 0x58000000000LL, 0, 1);
      MiPfnReferenceCountIsZero(48 * v2 - 0x58000000000LL, v2);
    }
    v26 = *(_WORD *)(v3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v8 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    __writecr8(v25);
  }
  while ( !v26 || v9 != 1 );
  KeAcquireInStackQueuedSpinLock(qword_140C51C20, &LockHandle);
  if ( qword_140C4C940 )
    byte_140C4C9B2 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  CurrentIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v33 = CurrentPrcb->SchedulerAssist;
        v34 = v33[5];
        OldIrql = LockHandle.OldIrql;
LABEL_63:
        v37 = ~(unsigned __int16)(-1LL << (OldIrql + 1)) & v34;
        v33[5] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
LABEL_65:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
