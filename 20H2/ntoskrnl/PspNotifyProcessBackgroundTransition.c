/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1402421E0
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14062E694 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessBackgroundCountCallback @ 0x1406E0010 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x14024B3C0 (KeAbProcessBaseIoPriorityChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

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
        KeAbProcessBaseIoPriorityChange(i - 157);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
