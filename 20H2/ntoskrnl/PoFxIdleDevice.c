/*
 * XREFs of PoFxIdleDevice @ 0x14036D564
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x14038BAE4 (PopFxIdleDevicesFromSx.c)
 *     PopFxClearDeviceConstraints @ 0x1405682F4 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056AE74 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x14057338C (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140574478 (PopPepResetDeviceAccountingLevel.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140575014 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopPlIdleDeviceIterator @ 0x14057CA60 (PopPlIdleDeviceIterator.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140737894 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140741100 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140741474 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A5118 (PiProcessResourceRequirementsChanged.c)
 *     PipProcessRestartPhase2 @ 0x1408B7E50 (PipProcessRestartPhase2.c)
 *     PnpCancelStopDeviceNode @ 0x1408BAE04 (PnpCancelStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E8010 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PoFxIdleComponent @ 0x140246BF0 (PoFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  ULONG_PTR v10; // rsi
  unsigned int i; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v1 = 0LL;
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
          PoFxIdleComponent(v10, i);
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
