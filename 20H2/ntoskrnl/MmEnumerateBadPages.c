/*
 * XREFs of MmEnumerateBadPages @ 0x140562C8C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  _QWORD *Pool; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // r15
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 i; // rax
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v2 = qword_140C51C00;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( qword_140C51C00 )
  {
    while ( 1 )
    {
      v3 = v2 + 16;
      Pool = MiAllocatePool(64, 8 * v3, 0x61426D4Du);
      v5 = Pool;
      if ( !Pool )
        return 3221225626LL;
      v6 = Pool;
      KeAcquireInStackQueuedSpinLock(qword_140C51C20, &LockHandle);
      if ( qword_140C51C00 < v3 )
      {
        if ( qword_140C51C00 )
          break;
      }
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
            v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      ExFreePoolWithTag(v5, 0);
      v2 = qword_140C51C00;
      if ( !qword_140C51C00 )
        return 0LL;
    }
    *v5 = qword_140C51C00;
    for ( i = qword_140C51C10; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
      *++v6 = i;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
    }
    __writecr8(v15);
    *a1 = v5;
  }
  return 0LL;
}
