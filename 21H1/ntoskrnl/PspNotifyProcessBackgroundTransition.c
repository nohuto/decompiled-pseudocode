/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1403147CC
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14065D0A8 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessBackgroundCountCallback @ 0x1406DD720 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140234B1C (KeAbProcessBaseIoPriorityChange.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 *v7; // r14
  __int64 *i; // rbx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1124), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1124), 0x14u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = (__int64 *)(a1 + 1504);
  for ( i = *(__int64 **)(a1 + 1504); i != v7; i = (__int64 *)*i )
  {
    if ( (*((char *)i - 464) | *((char *)i - 386)) != 0x3F )
    {
      v9 = (*((_DWORD *)i + 10) >> 9) & 7;
      if ( a2 )
      {
        v10 = (*((_DWORD *)i + 10) >> 9) & 7;
        v9 = 0;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 != v9 )
        KeAbProcessBaseIoPriorityChange((__int64)(i - 157), v10, v9);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, v13);
}
