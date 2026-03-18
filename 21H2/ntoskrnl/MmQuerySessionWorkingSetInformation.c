/*
 * XREFs of MmQuerySessionWorkingSetInformation @ 0x140597590
 * Callers:
 *     EtwpLogSessionWorkingSetInfo @ 0x1409E3490 (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQuerySessionWorkingSetInformation(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  int v5; // edi
  unsigned __int64 *v6; // rbp
  __int64 *v7; // r8
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 40LL * (unsigned int)*a2);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = (__int64 *)qword_140C53480;
  if ( (__int64 *)qword_140C53480 != &qword_140C53480 )
  {
    v8 = (unsigned __int64 *)(a1 + 24);
    do
    {
      if ( v8 - 3 == v6 )
      {
        v4 = -1073741820;
      }
      else
      {
        *((_DWORD *)v8 - 6) = *((_DWORD *)v7 - 28);
        v8[1] = v7[26];
        v9 = v7[25];
        *(v8 - 2) = v9;
        v10 = v7[7];
        *v8 = v10;
        v11 = *(v7 - 10);
        *(v8 - 1) = v11;
        if ( v10 >= v11 )
          v10 = v11;
        *v8 = v10;
        if ( v8[1] < v9 )
          v9 = v8[1];
        if ( v9 >= v11 )
          v9 = v11;
        v8[1] = v9;
        v8 += 5;
      }
      v7 = (__int64 *)*v7;
      ++v5;
    }
    while ( v7 != &qword_140C53480 );
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
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = v4;
  *a2 = v5;
  return result;
}
