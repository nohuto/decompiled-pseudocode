/*
 * XREFs of PoFxIdleDevice @ 0x1402D25CC
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x140397278 (PopFxIdleDevicesFromSx.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PopFxClearDeviceConstraints @ 0x1405CB6D8 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1405CDDF8 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1405D5704 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1405D655C (PopPepResetDeviceAccountingLevel.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1405D6DC4 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopPlIdleDeviceIterator @ 0x1405DE3F0 (PopPlIdleDeviceIterator.c)
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14076651C (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140766834 (PnpDeleteLockedDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x140959B60 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14095B398 (PipProcessRestartPhase2.c)
 *     PopFxUpdateVetoMaskWork @ 0x14098E120 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1403557F0 (PoFxIdleComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rbp
  KIRQL v3; // al
  int v4; // r8d
  unsigned __int64 v5; // rdi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rsi
  unsigned int i; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = (volatile LONG *)(v1 + 88);
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
      v4 = *(_DWORD *)(v1 + 120);
      v5 = v3;
      _m_prefetchw((const void *)(v1 + 296));
      v6 = *(_DWORD *)(v1 + 296);
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v6, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 824LL) & 1) == 0 )
      {
        *(_DWORD *)(v1 + 120) = v4 - 1;
        _m_prefetchw((const void *)(v1 + 296));
        v8 = *(_DWORD *)(v1 + 296);
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v8, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 4) != 0 )
        {
          v10 = *(_QWORD *)(v1 + 80);
          for ( i = 0; i < *(_DWORD *)(v10 + 828); ++i )
            PoFxIdleComponent(v10, i, 2LL);
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
    }
  }
}
