/*
 * XREFs of IoDecrementKeepAliveCount @ 0x140501A60
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1402FBD90 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140501F08 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // edi
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rdx
  __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v10; // eax
  _DWORD *SchedulerAssist; // r8
  bool v12; // zf
  int v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v14, (__int64)&v15);
  if ( v2 >= 0 && !v14 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C45CB0);
    v6 = v15;
    *(_QWORD *)(v15 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v6 + 32);
    if ( *(_BYTE *)(v6 + 16) )
    {
      if ( qword_140C45CE0 )
        KeAlertThread(qword_140C45CE0, 0LL, v4, v5);
    }
    else
    {
      v7 = (__int64 *)qword_140C45CA8;
      if ( *(PVOID **)qword_140C45CA8 != &qword_140C45CA0 )
        __fastfail(3u);
      *(_QWORD *)v6 = &qword_140C45CA0;
      *(_QWORD *)(v6 + 8) = v7;
      *v7 = v6;
      qword_140C45CA8 = v6;
      *(_BYTE *)(v6 + 16) = 1;
      if ( !byte_140C45CD8 )
      {
        byte_140C45CD8 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock(&qword_140C45CB0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
