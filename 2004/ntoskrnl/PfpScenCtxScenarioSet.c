/*
 * XREFs of PfpScenCtxScenarioSet @ 0x1409975D8
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14077ABB8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PfpServiceMainThreadBoost @ 0x14038A588 (PfpServiceMainThreadBoost.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038B2B4 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140766F18 (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1409958D0 (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object[0] )
    ObDereferenceObjectDeferDelete(Object[0]);
  if ( Object[1] )
    ExFreePoolWithTag(Object[1], 0);
}
