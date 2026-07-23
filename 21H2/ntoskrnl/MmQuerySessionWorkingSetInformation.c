/*
 * XREFs of MmQuerySessionWorkingSetInformation @ 0x14053CA74
 * Callers:
 *     EtwpLogSessionWorkingSetInfo @ 0x1409371D4 (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQuerySessionWorkingSetInformation(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  unsigned __int64 *v6; // rbp
  __int64 *v7; // r10
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 40LL * (unsigned int)*a2);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = (__int64 *)qword_140C4EF40;
  if ( (__int64 *)qword_140C4EF40 != &qword_140C4EF40 )
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
        *((_DWORD *)v8 - 6) = *((_DWORD *)v7 - 30);
        v9 = v7[32];
        v8[1] = v9;
        v10 = v7[31];
        *(v8 - 2) = v10;
        v11 = v7[7];
        *v8 = v11;
        v12 = *(v7 - 10);
        *(v8 - 1) = v12;
        v13 = v12;
        if ( v11 < v12 )
          v13 = v11;
        *v8 = v13;
        if ( v9 >= v10 )
          v9 = v10;
        if ( v9 < v12 )
          v12 = v9;
        v8[1] = v12;
        v8 += 5;
      }
      v7 = (__int64 *)*v7;
      ++v5;
    }
    while ( v7 != &qword_140C4EF40 );
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
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = v4;
  *a2 = v5;
  return result;
}
