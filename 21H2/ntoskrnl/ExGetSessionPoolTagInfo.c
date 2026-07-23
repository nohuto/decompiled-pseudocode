/*
 * XREFs of ExGetSessionPoolTagInfo @ 0x14021564C
 * Callers:
 *     ExGetAttachedSessionPoolTagInfo @ 0x1405E4328 (ExGetAttachedSessionPoolTagInfo.c)
 *     EtwpPoolRunDown @ 0x14093E4D0 (EtwpPoolRunDown.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmAcquireSessionPoolRundown @ 0x1405E43DC (MmAcquireSessionPoolRundown.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExGetSessionPoolTagInfo(_DWORD *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 OldIrql; // di
  PVOID PoolWithTag; // rdi
  unsigned __int8 v9; // r14
  unsigned int v10; // edx
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-78h]
  unsigned int v25; // [rsp+24h] [rbp-74h]
  int v26; // [rsp+28h] [rbp-70h]
  int v27; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  unsigned __int64 v30; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  _DWORD *v32; // [rsp+60h] [rbp-38h]
  const void *v33; // [rsp+68h] [rbp-30h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = 0;
  v27 = 0;
  v26 = 0;
  v24 = 0;
  v32 = a1;
  if ( !(unsigned int)MmAcquireSessionPoolRundown(1LL) )
    return 3221225738LL;
  v28 = ExpSessionPoolTrackTable;
  v30 = ExpSessionPoolTrackTable + 56 * ExpSessionPoolTrackTableSize;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v29 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 984);
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
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v29 )
  {
    PoolWithTag = 0LL;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56 * v29, 0x6F666E49u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
    v33 = *(const void **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 976);
    memmove(PoolWithTag, v33, 56 * v29);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v9);
LABEL_7:
    while ( 1 )
    {
      v10 = v25;
      if ( v28 >= v30 )
        break;
      if ( *(_DWORD *)v28 )
      {
        ++v27;
        v25 += 40;
        if ( v10 >= 0xFFFFFFD8 )
        {
          v24 = -1073741675;
          break;
        }
        if ( v10 + 40 > a2 )
        {
          v24 = -1073741820;
        }
        else
        {
          ++v26;
          v11 = v32;
          *v32 = *(_DWORD *)v28;
          v11[1] = *(_DWORD *)(v28 + 40);
          v11[2] = *(_DWORD *)(v28 + 48);
          *((_QWORD *)v11 + 2) = *(_QWORD *)(v28 + 32);
          v11[6] = *(_DWORD *)(v28 + 16);
          v11[7] = *(_DWORD *)(v28 + 24);
          *((_QWORD *)v11 + 4) = *(_QWORD *)(v28 + 8);
          v12 = v11[2];
          if ( v11[1] < v12 )
            v11[1] = v12;
          v13 = v11[7];
          if ( v11[6] < v13 )
            v11[6] = v13;
          v32 = v11 + 10;
        }
      }
      v28 += 56LL;
      if ( v28 == v30 )
      {
        if ( v29 )
        {
          v28 = (unsigned __int64)PoolWithTag;
          v30 = (unsigned __int64)PoolWithTag + 56 * v29;
          v29 = 0LL;
        }
      }
    }
    MmAcquireSessionPoolRundown(0LL);
    if ( PoolWithTag )
      ExFreeHeapPool((ULONG_PTR)PoolWithTag);
    *a3 = v26;
    *a4 = v27;
    return v24;
  }
  else
  {
    MmAcquireSessionPoolRundown(0LL);
    return 3221225626LL;
  }
}
