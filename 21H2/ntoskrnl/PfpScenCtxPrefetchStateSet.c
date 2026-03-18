/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x140A52C2C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 *     PfpScenCtxScenarioSet @ 0x140A540E0 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ecx
  unsigned int v10; // esi

  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a3 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v10 = -1073741431;
    }
    else
    {
      v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( (v9 & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 16), 1, 0);
        v9 = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3;
      }
      *(_DWORD *)(BugCheckParameter2 + 8) = v9 ^ ((unsigned __int8)a3 ^ (unsigned __int8)v9) & 3;
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741735;
  }
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v10;
}
