/*
 * XREFs of ExReferenceCallBackBlock @ 0x14027BEC0
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KiEnumerateCallback @ 0x140380930 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140506590 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140514370 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x140514DB0 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x14056ECB8 (PoIssueCoalescingNotification.c)
 *     ExCallSessionCallBack @ 0x1405E44F8 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x140684A9C (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x140684B0C (PspCallProcessNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     PsCallImageNotifyRoutines @ 0x140684E90 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140685020 (PspCallThreadNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x140791090 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140791528 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x1408882D0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140888374 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1408E6870 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14090C510 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14090C600 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExAcquireRundownProtectionEx @ 0x1402A5900 (ExAcquireRundownProtectionEx.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  signed __int64 Count; // rdx
  signed __int64 v16; // rax
  unsigned __int64 v17; // rdx

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v6 )
        break;
      v2 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 == 1 && ExAcquireRundownProtectionEx(v5, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v5 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      _m_prefetchw(v5);
      Count = v5->Count;
      if ( (v5->Count & 1) != 0 )
      {
LABEL_31:
        v17 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v17 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v17 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, Count - 30, Count);
          v14 = Count == v16;
          Count = v16;
          if ( v14 )
            break;
          if ( (v16 & 1) != 0 )
            goto LABEL_31;
        }
      }
    }
  }
  else
  {
    v9 = ExAcquireSpinLockShared(&ExpCallBackFlush);
    v5 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v5 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel(&ExpCallBackFlush);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( !v5 )
      return 0LL;
  }
  return v5;
}
