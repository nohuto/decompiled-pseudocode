/*
 * XREFs of KePrepareNonClockOwnerForIdle @ 0x14056C984
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiFindNextTimerDueTime @ 0x14030A6F0 (KiFindNextTimerDueTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 */

__int64 KePrepareNonClockOwnerForIdle()
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v1; // rdx
  __int64 v2; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  __int64 NextTimerDueTime; // rax
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  $120BD1411D93D4F3A10ED52495176849 *v8; // rcx
  struct _KPRCB *v9; // rbx
  int v10; // r14d
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER v18; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v18.QuadPart = 0LL;
  v1 = -1LL;
  v2 = -1LL;
  v17 = -1LL;
  if ( !KiSerializeTimerExpiration )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v18);
    NextTimerDueTime = KiFindNextTimerDueTime((__int64)CurrentPrcb, InterruptTimePrecise, 0, &v17);
    v1 = v17;
    v2 = NextTimerDueTime;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = v17;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( v1 != -1LL )
    KiSetClockTimer((_DWORD)CurrentPrcb, v1, 0, 0, 0, 0);
  if ( v2 != -1 )
    KiSetClockTimer((_DWORD)CurrentPrcb, v2, 0, 1, 0, 0);
  v7 = 0LL;
  v8 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  do
  {
    if ( (v8->TypeFlags & 3) == 1 )
    {
      KiSetNextClockTickDueTime(0LL);
      goto LABEL_21;
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 < 7 );
  v9 = KeGetCurrentPrcb();
  v10 = KiClockTimerOwner;
  if ( (v9->PendingTickFlags & 1) != 0 )
  {
    ((void (__fastcall *)($120BD1411D93D4F3A10ED52495176849 *))off_140C01ED8[0])(v8);
    v9->PendingTickFlags &= ~1u;
    v9->ClockTimerState.ClockActive = 0;
  }
  if ( v9->Number == v10 )
    ++dword_140C2B148;
  if ( v9->ClockOwner )
    v9->ClockOwner = 0;
LABEL_21:
  CurrentPrcb->ClockKeepAlive = 1;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
