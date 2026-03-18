/*
 * XREFs of HalpDomainLaDelete @ 0x1404C3424
 * Callers:
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0934 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A5AC0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1403A67B0 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C6720 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B53B0 (HalpDmaAllocateAndPremapLa.c)
 *     HalpDmaFreeLa @ 0x1404B5F38 (HalpDmaFreeLa.c)
 *     HalFreeCommonBufferV3 @ 0x1404C2C20 (HalFreeCommonBufferV3.c)
 *     HalpLeaveDmaDomain @ 0x1404C34DC (HalpLeaveDmaDomain.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C4650 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferThin @ 0x1404C93E0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404C9E48 (HalpConstructScatterGatherListThin.c)
 *     HalpPutScatterGatherListThin @ 0x1404CA0BC (HalpPutScatterGatherListThin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpLaDeleteBlt @ 0x1404D96B4 (HalpLaDeleteBlt.c)
 */

__int64 __fastcall HalpDomainLaDelete(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  unsigned __int64 v5; // rbp
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = (KSPIN_LOCK *)(a1 + 56);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 56));
  v6 = HalpLaDeleteBlt(*(_QWORD *)(a1 + 48), a2);
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v6;
}
