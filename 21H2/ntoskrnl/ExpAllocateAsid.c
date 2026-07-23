/*
 * XREFs of ExpAllocateAsid @ 0x1405B893C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  _KPROCESS **v16; // rax
  int v17; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C16958, &LockHandle);
  while ( 1 )
  {
    v15 = dword_140C16944;
    if ( (_DWORD)dword_140C16944 != dword_140C16948 )
      break;
    if ( (_DWORD)dword_140C16944 == ExpSvmAgents )
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
            v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v6 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
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
    v7 = v15 + 8;
    if ( v15 + 8 >= v15 )
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
    KeAcquireInStackQueuedSpinLock(&qword_140C16958, &LockHandle);
    v9 = PoolWithTag;
    if ( v15 == (_DWORD)dword_140C16944 )
    {
      v9 = qword_140C16950;
      if ( qword_140C16950 )
        memmove(PoolWithTag, qword_140C16950, 16LL * v15);
      memset(&PoolWithTag[16 * v15], 0, 16LL * (v7 - v15));
      qword_140C16950 = PoolWithTag;
      LODWORD(dword_140C16944) = v7;
    }
    if ( v9 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v10 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
          {
            v12 = KeGetCurrentPrcb();
            v13 = v12->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v6 = (v14 & v13[5]) == 0;
            v13[5] &= v14;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick((__int64)v12);
          }
        }
      }
      __writecr8(v10);
      ExFreeHeapPool((ULONG_PTR)v9);
      KeAcquireInStackQueuedSpinLock(&qword_140C16958, &LockHandle);
    }
  }
  v16 = (_KPROCESS **)qword_140C16950;
  v17 = 0;
  if ( (_DWORD)dword_140C16944 )
  {
    while ( *v16 )
    {
      v16 += 2;
      if ( ++v17 >= (unsigned int)dword_140C16944 )
        goto LABEL_43;
    }
    v16[1] = (_KPROCESS *)1;
    *v16 = Process;
  }
LABEL_43:
  ++dword_140C16948;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v6 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)v26);
      }
    }
  }
  __writecr8(v24);
  return (unsigned int)(v17 + 1);
}
