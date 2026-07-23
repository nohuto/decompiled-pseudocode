/*
 * XREFs of KiIntSteerDisable @ 0x14037696C
 * Callers:
 *     KeDisconnectInterrupt @ 0x140376884 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14023F2BC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x140377B04 (KiIntSteerLogState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( !v4 )
    return 0LL;
  KiIntSteerLogState(*(_QWORD *)(*a1 + 168), PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
  v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  if ( a2 )
  {
    v6 = a2;
    do
    {
      v7 = *v2;
      _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
      *(_QWORD *)(v7 + 168) = 0LL;
      ++v2;
      --v6;
    }
    while ( v6 );
  }
  v8 = *v4;
  v9 = (__int64 *)v4[2];
  v10 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
    goto LABEL_14;
  *v10 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  ExFreePoolWithTag(v4, 0x6B725449u);
  if ( (__int64 *)v9[2] != v9 + 2 )
    goto LABEL_11;
  --KiIntTrackRootCount;
  v11 = *v9;
  v12 = (__int64 *)v9[1];
  if ( *(__int64 **)(*v9 + 8) != v9 || (__int64 *)*v12 != v9 )
LABEL_14:
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  KiIntSteerUpdateDeviceInterruptMask((__int64)(v9 + 20), 1, v11);
  ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_11:
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return 0LL;
}
