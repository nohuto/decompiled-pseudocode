/*
 * XREFs of PoFxIdleDevice @ 0x14036B584
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x140389844 (PopFxIdleDevicesFromSx.c)
 *     PopFxClearDeviceConstraints @ 0x140564914 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140567444 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x14056F95C (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140570A48 (PopPepResetDeviceAccountingLevel.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1405715E4 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopPlIdleDeviceIterator @ 0x140579030 (PopPlIdleDeviceIterator.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140728E04 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x14072A788 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140731D5C (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1407320D0 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089F5E8 (PiProcessResourceRequirementsChanged.c)
 *     PipProcessRestartPhase2 @ 0x1408B2230 (PipProcessRestartPhase2.c)
 *     PnpCancelStopDeviceNode @ 0x1408B51E4 (PnpCancelStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E21D0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PoFxIdleComponent @ 0x1402C9F80 (PoFxIdleComponent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
