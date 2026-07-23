/*
 * XREFs of PopFxClearDeviceConstraints @ 0x140564914
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PopFxAddRefDevice @ 0x1402CA530 (PopFxAddRefDevice.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14056083C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x14056EC84 (PopPepClearDripsDeviceVetoMask.c)
 */

__int64 __fastcall PopFxClearDeviceConstraints(__int64 a1)
{
  ULONG_PTR v2; // rcx
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r15
  signed __int32 v6; // r12d
  unsigned __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int i; // ebp
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax

  if ( (unsigned int)PpmGetDeepSleepPlatformStateIndex() == -1 )
    return (unsigned int)-1073741823;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && (*(_DWORD *)(v4 + 24) & 0x8000000) == 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    PopFxAddRefDevice(v2);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x10) != 0 && *(_QWORD *)(a1 + 56) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
      PopFxActivateDevice(v5, 0, 0);
      v3 = PopPepClearDripsDeviceVetoMask(*(_QWORD *)(a1 + 56));
      if ( v3 >= 0 )
      {
        v6 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
        *(_DWORD *)(a1 + 616) = v6;
        memset((void *)(a1 + 632), 0, 0xC0uLL);
        *(_BYTE *)(a1 + 608) = 0;
        *(_QWORD *)(a1 + 624) = 0LL;
        *(_DWORD *)(a1 + 612) = 5;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFEF);
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 600));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v12 = (v11 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v11;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
        for ( i = 0; i < *(_DWORD *)(a1 + 828); ++i )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * i) + 200LL;
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
          *(_DWORD *)(v14 + 16) = v6;
          memset((void *)(v14 + 32), 0, 0xC0uLL);
          *(_DWORD *)(v14 + 12) = -1;
          *(_BYTE *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 24) = 0LL;
          _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFEFF);
          KxReleaseSpinLock((PKSPIN_LOCK)v14);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
              {
                v17 = KeGetCurrentPrcb();
                v18 = v17->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                v12 = (v19 & v18[5]) == 0;
                v18[5] &= v19;
                if ( v12 )
                  KiRemoveSystemWorkPriorityKick((__int64)v17);
              }
            }
          }
          __writecr8(v15);
        }
      }
      PoFxIdleDevice(v5);
    }
    else
    {
      v3 = -1073741823;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    if ( !v3 )
      ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v3;
}
