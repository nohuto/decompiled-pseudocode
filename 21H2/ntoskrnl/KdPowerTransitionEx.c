/*
 * XREFs of KdPowerTransitionEx @ 0x140511200
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmExitCoordinatedIdle @ 0x1402C8900 (PpmExitCoordinatedIdle.c)
 *     KdDisableDebuggerWithLock @ 0x1403CFBA8 (KdDisableDebuggerWithLock.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     KdEnableDebuggerWithLock @ 0x140510FBC (KdEnableDebuggerWithLock.c)
 *     KdPowerTransition @ 0x1405111E0 (KdPowerTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140579480 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PpmCancelExitLatencyTrace @ 0x140565920 (PpmCancelExitLatencyTrace.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  unsigned int v7; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rcx
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  v3 = 0;
  if ( !KdPitchDebugger )
  {
    v4 = a1 & 0x40000000 ^ a1;
    if ( (_BYTE)KdDebuggerEnabled || (a1 & 0x40000000) != 0 )
    {
      CurrentIrql = -1;
      v6 = v4 & 0x80000000;
      v7 = v4 & 0x80000000 ^ v4;
      if ( KdTransportMaxPacketSize != 1152 )
        v6 = 0;
      if ( a2 )
      {
        if ( ObGetCurrentIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
        }
        KxAcquireSpinLock(&KdDebuggerLock);
      }
      if ( v7 == 1 )
      {
        PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
        v10 = ObGetCurrentIrql();
        if ( v10 >= 2u )
        {
          LOBYTE(v9) = 1;
          ((void (__fastcall *)(__int64, _QWORD))off_140C00738[0])(v9, 0LL);
        }
        v3 = KdPower(v6 | 1, &KdpContext);
        if ( v10 >= 2u )
          ((void (__fastcall *)(_QWORD, _QWORD))off_140C00738[0])(0LL, 0LL);
      }
      else if ( v7 - 2 > 2 )
      {
        v3 = -1073741811;
      }
      else
      {
        v3 = KdPower(v6 | 4, &KdpContext);
      }
      if ( a2 )
      {
        KxReleaseSpinLock(&KdDebuggerLock);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v11 = KeGetCurrentIrql();
              if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v13 = CurrentPrcb->SchedulerAssist;
                v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v15 = (v14 & v13[5]) == 0;
                v13[5] &= v14;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
