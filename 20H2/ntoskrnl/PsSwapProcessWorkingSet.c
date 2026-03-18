/*
 * XREFs of PsSwapProcessWorkingSet @ 0x14090A230
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x14062EE68 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // edi
  signed __int64 *p_Lock; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  p_Lock = (signed __int64 *)&Process[1].Header.Lock;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
  v7 = Process[1].Affinity.Bitmap[16];
  if ( v7 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v5 = *(_DWORD *)(v7 + 864) != 0 ? 2 : 0;
    if ( *(_DWORD *)(v7 + 856) )
      v5 = 1;
  }
  v8 = v5 & 0xFFFFFFFD;
  v9 = v5 | 2;
  if ( !a2 )
    v9 = v8;
  PspRequestProcessExecutionState((__int64)Process, v9, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  v10 = PspChangeProcessExecutionState(Process);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
