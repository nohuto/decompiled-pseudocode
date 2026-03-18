/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x14053C420
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053B2B0 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageCharge @ 0x14022C020 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiPreventControlAreaDeletion @ 0x1403209B8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x140320E6C (MiDecrementSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C8A4 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x14054A070 (MiUnlinkPageFromBadList.c)
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
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r14
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // r10
  int v17; // eax
  KIRQL v18; // al
  unsigned __int64 v19; // r15
  __int64 *v20; // rax
  volatile LONG *v21; // rcx
  __int64 *v22; // r14
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int16 v27; // r14
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // edx
  unsigned __int8 OldIrql; // cl
  unsigned __int8 v37; // al
  int v38; // edx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v41; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v41 = 0LL;
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
      LockHandle.LockQueue.Lock = qword_140C51BA0;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C51BA0);
      v2 = qword_140C4C8D0;
      byte_140C4C932 = 0;
      if ( qword_140C4C8D0 == 0xFFFFFFFFFLL )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( !KiIrqlFlags )
          goto LABEL_65;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_65;
        v37 = KeGetCurrentIrql();
        if ( v37 > 0xFu || CurrentIrql > 0xFu || v37 < 2u )
          goto LABEL_65;
        CurrentPrcb = KeGetCurrentPrcb();
        OldIrql = CurrentIrql;
        v34 = CurrentPrcb->SchedulerAssist;
        v35 = v34[5];
        goto LABEL_63;
      }
      v3 = 48 * qword_140C4C8D0 - 0x58000000000LL;
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
    v9 = qword_140C4C8C0;
    MiUnlinkPageFromBadList(48 * v2 - 0x58000000000LL, 128LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiAddLockedPageCharge(48 * v2 - 0x58000000000LL, 1LL, v10);
    v41 = 0LL;
    BugCheckParameter2 = 0LL;
    v14 = MiPreventControlAreaDeletion(48 * v2 - 0x58000000000LL, 1, &BugCheckParameter2, &v41);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v11 = -1LL << (CurrentIrql + 1);
          v13 = v16->SchedulerAssist;
          v17 = ~(unsigned __int16)v11;
          v8 = (v17 & v13[5]) == 0;
          v12 = (unsigned int)v17 & v13[5];
          v13[5] = v12;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v14 )
    {
      if ( v41 )
        MiReleaseControlAreaWaiters(v41);
      MiPurgeFileOnlyPfn(48 * v2 - 0x58000000000LL);
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v14 + 72));
      *(_DWORD *)(v14 + 56) &= ~4u;
      v19 = v18;
      v20 = (__int64 *)MiDecrementModifiedWriteCount(v14, 1);
      v21 = (volatile LONG *)(v14 + 72);
      v41 = v20;
      v22 = v20;
      ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v11 = -1LL << ((unsigned __int8)v19 + 1);
            v13 = v24->SchedulerAssist;
            v25 = ~(unsigned __int16)v11;
            v8 = (v25 & v13[5]) == 0;
            v12 = (unsigned int)v25 & v13[5];
            v13[5] = v12;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
            v22 = v41;
          }
        }
      }
      __writecr8(v19);
      if ( v22 )
        MiReleaseControlAreaWaiters(v22);
    }
    v26 = (unsigned __int8)MiLockPageInline(48 * v2 - 0x58000000000LL, v11, v12, v13);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v2 - 0x58000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v2 - 0x58000000000LL, 0, 1);
      MiPfnReferenceCountIsZero(48 * v2 - 0x58000000000LL, v2);
    }
    v27 = *(_WORD *)(v3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v8 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
      }
    }
    __writecr8(v26);
  }
  while ( !v27 || v9 != 1 );
  KeAcquireInStackQueuedSpinLock(qword_140C51BA0, &LockHandle);
  if ( qword_140C4C8C0 )
    byte_140C4C932 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  CurrentIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v34 = CurrentPrcb->SchedulerAssist;
        v35 = v34[5];
        OldIrql = LockHandle.OldIrql;
LABEL_63:
        v38 = ~(unsigned __int16)(-1LL << (OldIrql + 1)) & v35;
        v34[5] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
LABEL_65:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
