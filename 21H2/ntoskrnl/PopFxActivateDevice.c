/*
 * XREFs of PopFxActivateDevice @ 0x14036FE80
 * Callers:
 *     PoFxActivateDevice @ 0x14036FE64 (PoFxActivateDevice.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1403835C0 (PoFxActivateDeviceForSystemTransition.c)
 *     PopFxActivateDevicesForSx @ 0x14038C458 (PopFxActivateDevicesForSx.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BE190 (PoFxStartDevicePowerManagement.c)
 *     PopFxClearDeviceConstraints @ 0x14056A004 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056CAC4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1405760C8 (PopPepResetDeviceAccountingLevel.c)
 *     PopPlActivateDeviceIterator @ 0x14057E560 (PopPlActivateDeviceIterator.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x140281C48 (PopFxAddRefDevice.c)
 *     PoFxActivateComponent @ 0x140283CB0 (PoFxActivateComponent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 */

LONG __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  int v8; // r8d
  unsigned __int64 v9; // rsi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ULONG_PTR v12; // rbx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  LONG result; // eax
  unsigned int i; // edi
  __int64 j; // rbp
  ULONG_PTR v18; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v21; // zf
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v8 = *(_DWORD *)(v5 + 120);
  v9 = v7;
  _m_prefetchw((const void *)(v5 + 296));
  v10 = *(_DWORD *)(v5 + 296);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v10 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 824LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 88));
    result = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v21 = (result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v21 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    *(_DWORD *)(v5 + 120) = v8 + 1;
    v12 = 0LL;
    _m_prefetchw((const void *)(v5 + 296));
    v13 = *(_DWORD *)(v5 + 296);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v13, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 4) != 0 )
    {
      v12 = *(_QWORD *)(v5 + 80);
      PopFxAddRefDevice(v12);
      for ( i = 0; i < *(_DWORD *)(v12 + 828); ++i )
        PoFxActivateComponent(v12, i, 2);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    result = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v21 = (result & v23[5]) == 0;
          v23[5] &= result;
          if ( v21 )
            result = KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    __writecr8(v9);
    if ( v12 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 828); j = (unsigned int)(j + 1) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * j);
        if ( (*(_DWORD *)(v18 + 88) & 0x3FFFFFFF) == 0
          || (KeWaitForSingleObject((PVOID)(v18 + 104), Executive, 0, 0, 0LL), *(int *)(v18 + 88) >= 0) )
        {
          PopFxBugCheck(0x608uLL, v18, v18 + 88, 0LL);
        }
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 1u);
        if ( (PopPoFxSystemIrpWaitForReportDevicePoweredReg || (*(_DWORD *)(v12 + 824) & 0x80u) != 0) && a3 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x800u);
      }
      KeWaitForSingleObject((PVOID)(v12 + 568), Executive, 0, 0, 0LL);
      result = _InterlockedDecrement((volatile signed __int32 *)(v12 + 244));
      if ( !result )
        return KeSetEvent((PRKEVENT)(v12 + 248), 0, 0);
    }
  }
  return result;
}
