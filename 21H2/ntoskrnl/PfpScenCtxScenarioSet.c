/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140A540E0
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14081BB14 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140399288 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoost @ 0x1405C614C (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140808A98 (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140A52C2C (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // eax
  KPRIORITY v10; // ebp
  int v11; // eax
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, (PETHREAD *)Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 48);
    v10 = 1;
    if ( v9
      && (PfpScenCtxPrefetchStateSet(BugCheckParameter2, v9, 0, 1),
          PfpScenCtxWaiterTimedOut(BugCheckParameter2),
          v11 = *(_DWORD *)(BugCheckParameter2 + 48),
          *(_QWORD *)(BugCheckParameter2 + 40) = 0LL,
          *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3,
          v11)
      || a3 )
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = a3;
      if ( a3 )
      {
        ++*(_DWORD *)(BugCheckParameter2 + 52);
        if ( a3 == 3 )
          *(_QWORD *)(BugCheckParameter2 + 56) = a4;
        if ( Object[0] )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (ULONG_PTR *)Object);
          v10 = 0;
        }
        else
        {
          v10 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v10, 0);
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = 0;
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
