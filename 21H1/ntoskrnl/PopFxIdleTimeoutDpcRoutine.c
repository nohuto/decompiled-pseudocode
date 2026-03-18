/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x1403A2CA0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140236BC8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140236C6C (PopFxAddLogEntry.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A371C (PopFxDeliverDevicePowerRequired.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rbp
  unsigned __int64 v4; // rsi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf

  v2 = (KSPIN_LOCK *)(a2 + 360);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 360));
  _m_prefetchw((const void *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      PopFxBugCheck(0x613uLL, a2, 0LL, 0LL);
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a2 + 48), 0, 0);
    (*(void (__fastcall **)(_QWORD))(a2 + 144))(*(_QWORD *)(a2 + 192));
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 40), 0xFFFFFFFF) != 1 )
      PopFxAddLogEntry(*(_QWORD *)(a2 + 48), 0, 17, 0LL);
  }
  else
  {
    PopFxDeliverDevicePowerRequired(a2);
  }
  KxReleaseSpinLock(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
