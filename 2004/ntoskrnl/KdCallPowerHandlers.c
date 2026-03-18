/*
 * XREFs of KdCallPowerHandlers @ 0x14050B724
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     PpmExitCoordinatedIdle @ 0x140218DA0 (PpmExitCoordinatedIdle.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140573E00 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdi
  int v6; // esi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v5 = KdpPowerListHead;
  v6 = 0;
  while ( (__int64 *)v5 != &KdpPowerListHead )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v5 + 16))(a1, *(_QWORD *)(v5 + 24));
    if ( v6 < 0 )
      break;
    v5 = *(_QWORD *)v5;
  }
  KxReleaseSpinLock(&KdpPowerSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return (unsigned int)v6;
}
