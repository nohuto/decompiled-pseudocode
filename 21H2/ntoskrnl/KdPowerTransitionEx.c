/*
 * XREFs of KdPowerTransitionEx @ 0x1403DA590
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     KdDisableDebuggerWithLock @ 0x140565378 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1405655BC (KdEnableDebuggerWithLock.c)
 *     KdPowerTransition @ 0x1405657E0 (KdPowerTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D9310 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     PpmCancelExitLatencyTrace @ 0x1403DA6C0 (PpmCancelExitLatencyTrace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v9; // rcx
  unsigned __int8 v10; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

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
          ((void (__fastcall *)(__int64, _QWORD))off_140C01D88[0])(v9, 0LL);
        }
        v3 = KdPower(v6 | 1, &KdpContext);
        if ( v10 >= 2u )
          ((void (__fastcall *)(_QWORD, _QWORD))off_140C01D88[0])(0LL, 0LL);
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
              v12 = KeGetCurrentIrql();
              if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v14 = CurrentPrcb->SchedulerAssist;
                v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v16 = (v15 & v14[5]) == 0;
                v14[5] &= v15;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
