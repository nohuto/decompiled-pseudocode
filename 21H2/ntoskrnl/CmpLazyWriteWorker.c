/*
 * XREFs of CmpLazyWriteWorker @ 0x1403CBDF0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CmpCompleteLazyWrite @ 0x1402554D8 (CmpCompleteLazyWrite.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpDiskFullWarning @ 0x14091D63C (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  unsigned __int64 v2; // rsi
  char v3; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0;
  while ( 1 )
  {
    CmpInitializeThreadInfo((__int64)&v9);
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KxReleaseSpinLock(&Timer[2].DueTime.QuadPart);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    v3 = ((__int64 (__fastcall *)(char *, __int64 *))Timer[2].TimerListEntry.Flink)(&v10, &v11);
    if ( CmpCannotWriteConfiguration && Timer == &CmpLazyWriterData )
    {
      if ( v10 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v11 & -(__int64)(v3 != 0)));
    *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v9;
  }
}
