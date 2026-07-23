/*
 * XREFs of IopRecordIoAttribution @ 0x1402079A4
 * Callers:
 *     IoDiskIoAttributionQuery @ 0x1402074DC (IoDiskIoAttributionQuery.c)
 *     IoRecordIoAttribution @ 0x1402077E0 (IoRecordIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopRecordIoAttribution(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v8; // r8d
  _QWORD *v9; // rdi
  KSPIN_LOCK v10; // rbp
  KSPIN_LOCK v11; // rdx
  KSPIN_LOCK v12; // r12
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  KSPIN_LOCK v15; // rcx
  KSPIN_LOCK v16; // rax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // edx
  bool v23; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0;
  if ( (unsigned __int8)v5 == 3 )
  {
    v9 = a1 + 10;
    goto LABEL_4;
  }
  if ( (unsigned __int8)v5 == 4 )
  {
    v9 = a1 + 15;
LABEL_4:
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    v12 = 0LL;
    if ( (a3 & 2) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
      v5 = *(_DWORD *)(a2 + 4);
      v11 = 0LL;
      v8 = 1;
    }
    if ( (v5 & 0x100) != 0 )
    {
      v16 = a1[9];
      if ( !v16 || v10 < a1[8] )
        a1[8] = v10;
      a1[9] = v16 + 1;
      ++*v9;
    }
    else
    {
      if ( (a3 & 1) == 0 )
      {
        --a1[9];
        --*v9;
        v5 = *(_DWORD *)(a2 + 4);
      }
      if ( (v5 & 0x200) == 0 )
      {
        v13 = a1[6];
        v14 = *(_QWORD *)(a2 + 16);
        if ( v13 <= v14 )
          v13 = *(_QWORD *)(a2 + 16);
        if ( v10 >= v13 )
        {
          a1[6] = v10;
          v14 = *(_QWORD *)(a2 + 16);
          v11 = v10 - v13;
        }
        v10 = v14;
      }
      v15 = a1[7];
      if ( v15 <= a1[8] )
        v15 = a1[8];
      if ( v10 >= v15 )
      {
        a1[7] = v10;
        v12 = v10 - v15;
      }
      v9[1] += v12;
      if ( (*(_DWORD *)(a2 + 4) & 0x200) == 0 )
      {
        v9[2] += v11;
        v9[3] += *(unsigned int *)(a2 + 8);
        v9[4] += (IopDiskIoAttributionBaseIoSize + *(_DWORD *)(a2 + 8) - 1)
               / (unsigned int)IopDiskIoAttributionBaseIoSize;
      }
    }
    if ( v8 )
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
            v23 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v3;
  }
  if ( (a3 & 1) == 0 )
    return (unsigned int)-1073741637;
  v9 = a1 + 10;
  if ( a1[10] )
    goto LABEL_4;
  v9 = a1 + 15;
  if ( a1[15] )
    goto LABEL_4;
  return v3;
}
