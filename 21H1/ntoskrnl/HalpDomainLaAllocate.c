/*
 * XREFs of HalpDomainLaAllocate @ 0x1404BF744
 * Callers:
 *     HalpAllocateDomainCommonBufferInternal @ 0x14039DCD4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A2F90 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C34D0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B17B0 (HalpDmaAllocateAndPremapLa.c)
 *     HalAllocateCommonBufferVector @ 0x1404C03A0 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C5F10 (HalpAllocateCommonBufferThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404C6438 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpLaAllocateBlt @ 0x1404D5954 (HalpLaAllocateBlt.c)
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
