/*
 * XREFs of PsSwapProcessWorkingSet @ 0x140903330
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PspRequestProcessExecutionState @ 0x14065D87C (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // edi
  signed __int64 *p_Lock; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

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
  v13 = PspChangeProcessExecutionState(Process, v10, v11, v12);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
  return v13;
}
