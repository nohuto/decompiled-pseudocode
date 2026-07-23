/*
 * XREFs of IoDecrementKeepAliveCount @ 0x140506E30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405072D8 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // edi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v8; // eax
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf
  int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0LL;
  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v12, (__int64)&v13);
  if ( v2 >= 0 && !v12 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C45BD0);
    v4 = v13;
    *(_QWORD *)(v13 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_140C45C00 )
        KeAlertThread(qword_140C45C00, 0);
    }
    else
    {
      v5 = (__int64 *)qword_140C45BC8;
      if ( *(PVOID **)qword_140C45BC8 != &qword_140C45BC0 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_140C45BC0;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_140C45BC8 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_140C45BF8 )
      {
        byte_140C45BF8 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock(&qword_140C45BD0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
