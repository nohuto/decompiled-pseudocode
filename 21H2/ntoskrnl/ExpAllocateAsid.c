/*
 * XREFs of ExpAllocateAsid @ 0x1405B870C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 ExpAllocateAsid()
{
  _KPROCESS *Process; // r12
  unsigned __int64 v1; // rdi
  unsigned __int8 v2; // al
  struct _KPRCB *v3; // r10
  _DWORD *v4; // r9
  int v5; // eax
  bool v6; // zf
  unsigned int v7; // edi
  char *PoolWithTag; // r14
  void *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  int v16; // eax
  unsigned int v17; // ebx
  _KPROCESS **v18; // rax
  int v19; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  unsigned __int64 v26; // rdi
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C16918, &LockHandle);
  while ( 1 )
  {
    v17 = dword_140C16904;
    if ( (_DWORD)dword_140C16904 != dword_140C16908 )
      break;
    if ( (_DWORD)dword_140C16904 == ExpSvmAgents )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v6 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v1 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v2 = KeGetCurrentIrql();
        if ( v2 <= 0xFu && LockHandle.OldIrql <= 0xFu && v2 >= 2u )
        {
          v3 = KeGetCurrentPrcb();
          v4 = v3->SchedulerAssist;
          v5 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v6 = (v5 & v4[5]) == 0;
          v4[5] &= v5;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick((__int64)v3);
        }
      }
    }
    __writecr8(v1);
    v7 = v17 + 8;
    if ( v17 + 8 >= v17 )
    {
      if ( v7 > ExpSvmAgents )
        v7 = ExpSvmAgents;
    }
    else
    {
      v7 = ExpSvmAgents;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v7, 0x73417845u);
    if ( !PoolWithTag )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_140C16918, &LockHandle);
    v9 = PoolWithTag;
    if ( v17 == (_DWORD)dword_140C16904 )
    {
      v9 = qword_140C16910;
      if ( qword_140C16910 )
        memmove(PoolWithTag, qword_140C16910, 16LL * v17);
      memset(&PoolWithTag[16 * v17], 0, 16LL * (v7 - v17));
      qword_140C16910 = PoolWithTag;
      LODWORD(dword_140C16904) = v7;
    }
    if ( v9 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v13 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v12 = v15->SchedulerAssist;
            v10 = -1LL << (LockHandle.OldIrql + 1);
            v16 = ~(unsigned __int16)v10;
            v6 = (v16 & v12[5]) == 0;
            v11 = (unsigned int)v16 & v12[5];
            v12[5] = v11;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
      }
      __writecr8(v13);
      ExFreeHeapPool((ULONG_PTR)v9, v10, v11, v12);
      KeAcquireInStackQueuedSpinLock(&qword_140C16918, &LockHandle);
    }
  }
  v18 = (_KPROCESS **)qword_140C16910;
  v19 = 0;
  if ( (_DWORD)dword_140C16904 )
  {
    while ( *v18 )
    {
      v18 += 2;
      if ( ++v19 >= (unsigned int)dword_140C16904 )
        goto LABEL_43;
    }
    v18[1] = (_KPROCESS *)1;
    *v18 = Process;
  }
LABEL_43:
  ++dword_140C16908;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v26 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v6 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
    }
  }
  __writecr8(v26);
  return (unsigned int)(v19 + 1);
}
