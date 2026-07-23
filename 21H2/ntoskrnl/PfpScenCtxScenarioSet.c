/*
 * XREFs of PfpScenCtxScenarioSet @ 0x14099BB98
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14078D158 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x1409919B4 (PfPowerActionNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PfpServiceMainThreadBoost @ 0x14038D098 (PfpServiceMainThreadBoost.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038DDC0 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14077A0B8 (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140999C20 (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // eax
  KPRIORITY v10; // ebp
  int v11; // eax
  BOOL v12; // eax
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 48);
    v10 = 1;
    v12 = v9
       && (PfpScenCtxPrefetchStateSet(BugCheckParameter2, v9, 0, 1),
           PfpScenCtxWaiterTimedOut(BugCheckParameter2),
           v11 = *(_DWORD *)(BugCheckParameter2 + 48),
           *(_QWORD *)(BugCheckParameter2 + 40) = 0LL,
           *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3,
           v11)
       || a3;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v12 )
    {
      if ( a3 )
      {
        if ( Object[0] )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (__int64 *)Object);
          v10 = 0;
        }
        else
        {
          v10 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v10, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object[0] )
    ObDereferenceObjectDeferDelete(Object[0]);
  if ( Object[1] )
    ExFreePoolWithTag(Object[1], 0);
}
