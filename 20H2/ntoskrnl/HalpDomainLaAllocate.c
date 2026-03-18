/*
 * XREFs of HalpDomainLaAllocate @ 0x1404C3344
 * Callers:
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0934 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A5AC0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C6720 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B53B0 (HalpDmaAllocateAndPremapLa.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404C9E48 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpLaAllocateBlt @ 0x1404D93F4 (HalpLaAllocateBlt.c)
 */

__int64 __fastcall HalpDomainLaAllocate(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  KSPIN_LOCK *v6; // rbp
  unsigned __int64 v10; // r14
  unsigned int Blt; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v6 = (KSPIN_LOCK *)(a1 + 56);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 56));
  Blt = HalpLaAllocateBlt(*(_QWORD *)(a1 + 48), a2, a5, a4, a5, a6);
  KxReleaseSpinLock(v6);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return Blt;
}
