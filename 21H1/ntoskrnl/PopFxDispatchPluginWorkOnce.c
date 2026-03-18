/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x1402D7B3C
 * Callers:
 *     PopFxProcessWorkPool @ 0x1402D79B4 (PopFxProcessWorkPool.c)
 * Callees:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402D7C94 (PopFxDisableWorkOrderWatchdog.c)
 *     PopPepWork @ 0x1402D7D28 (PopPepWork.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1402D82A8 (PopFxEnableWorkOrderWatchdog.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  unsigned __int8 (__fastcall *v6)(__int64, __int128 *); // rax
  unsigned __int8 (__fastcall *v7)(__int64, __int128 *); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  __int128 v12; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v13[8]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2a[22]; // [rsp+78h] [rbp-90h] BYREF
  int v15[16]; // [rsp+128h] [rbp+20h] BYREF

  memset(BugCheckParameter2a, 0, sizeof(BugCheckParameter2a));
  v13[6] = BugCheckParameter2a;
  LODWORD(BugCheckParameter2a[10]) = 275;
  BugCheckParameter2a[2] = 8LL;
  BugCheckParameter2a[18] = (ULONG_PTR)v13;
  BugCheckParameter2a[4] = (ULONG_PTR)&BugCheckParameter2a[3];
  BugCheckParameter2a[3] = (ULONG_PTR)&BugCheckParameter2a[3];
  BugCheckParameter2a[13] = (ULONG_PTR)PopFxWorkOrderWatchdog;
  BugCheckParameter2a[14] = (ULONG_PTR)BugCheckParameter2a;
  memset(v13, 0, 40);
  v13[5] = BugCheckParameter2;
  BugCheckParameter2a[5] = 0LL;
  HIDWORD(BugCheckParameter2a[9]) = 0;
  LOWORD(BugCheckParameter2a[9]) = 0;
  BugCheckParameter2a[17] = 0LL;
  BugCheckParameter2a[12] = 0LL;
  PopFxEnableWorkOrderWatchdog(v13, (unsigned int)PopFxWatchdogWorkOrderTimeout);
  v12 = 0LL;
  memset(v15, 0, sizeof(v15));
  BYTE8(v12) = 0;
  *(_QWORD *)&v12 = v15;
  if ( !BugCheckParameter2 )
  {
    v2 = (unsigned __int8)PopPepWork(v15) == 0;
    goto LABEL_3;
  }
  v6 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter2 + 96);
  if ( v6 && v6(13LL, &v12) )
  {
    v2 = BYTE8(v12) == 0;
LABEL_3:
    if ( v2 )
      return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2a);
    goto LABEL_4;
  }
  v7 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter2 + 112);
  if ( !v7 || !v7(10LL, &v12) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter2, 0LL);
  if ( BYTE8(v12) )
  {
    if ( (unsigned int)(v15[0] - 7) > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter2, 0LL, 0LL);
LABEL_4:
    v3 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    BugCheckParameter2a[19] = (ULONG_PTR)v15;
    KxReleaseSpinLock(&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v2 = (v11 & SchedulerAssist[5]) == 0;
          v4 = (unsigned int)v11 & SchedulerAssist[5];
          SchedulerAssist[5] = v4;
          if ( v2 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    PopFxProcessWork(BugCheckParameter2, v15, v4);
  }
  return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2a);
}
