/*
 * XREFs of MiGetHugeRangeFromNode @ 0x140532C94
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiUnlinkHugeRange @ 0x140533D9C (MiUnlinkHugeRange.c)
 */

__int64 __fastcall MiGetHugeRangeFromNode(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  int v12; // ecx
  _QWORD *v13; // rax
  __int64 v14; // r15
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  KSPIN_LOCK *SpinLock; // [rsp+80h] [rbp+8h]

  v3 = a1[770];
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1[2] + 4544LL * a2;
  if ( v3 )
  {
    v7 = dword_140C4DFC0[0];
    v8 = (unsigned int)dword_140C4DFC0[0];
    v9 = (_QWORD *)(v3 + 16LL * a2 * dword_140C4DFC0[0]);
    if ( a3 )
    {
      v10 = 0LL;
    }
    else
    {
      v9 += (unsigned int)dword_140C4DFC0[0];
      v10 = 1LL;
    }
    v11 = 0LL;
    SpinLock = a1 + 516;
    KeAcquireInStackQueuedSpinLock(a1 + 516, &LockHandle);
    while ( 1 )
    {
      if ( *(_QWORD *)(v6 + 8 * v10 + 4192) )
      {
        v4 &= 0xFFFFFFFFFFFC0000uLL;
        v12 = 0;
        v11 = &v9[*(_DWORD *)(v6 + 4184) % v7];
        if ( v7 )
        {
          while ( 1 )
          {
            v4 ^= (v4 ^ *v11) & 0x3FFFF;
            if ( (v4 & 0x3FFFF) != 0 )
              break;
            v13 = v11 + 1;
            v11 = v9;
            if ( v13 != &v9[v8] )
              v11 = v13;
            if ( ++v12 >= v7 )
              goto LABEL_14;
          }
          MiUnlinkHugeRange(a1);
        }
      }
LABEL_14:
      v14 = v4 & 0x3FFFF;
      if ( (v4 & 0x3FFFF) != 0 )
        break;
      if ( a3 )
      {
        if ( v10 )
          goto LABEL_22;
        v9 += v8;
        v10 = 1LL;
      }
      else
      {
        if ( v10 != 1 )
          goto LABEL_22;
        v10 = 0LL;
        v9 -= v8;
      }
      v7 = v8;
    }
    *(_DWORD *)(v6 + 4184) = v11 - v9 + 1;
LABEL_22:
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
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v14 && a3 && (*(_DWORD *)(qword_140C4E6B0 + 8 * v14) & 0x3FFFF) == 1LL )
    {
      MiHugePageOperation(v4);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      *(_QWORD *)(qword_140C4E6B0 + 8 * v14) &= 0xFFFFFFFFFFFC0000uLL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v21 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)v23);
          }
        }
      }
      __writecr8(v21);
    }
  }
  return v4;
}
