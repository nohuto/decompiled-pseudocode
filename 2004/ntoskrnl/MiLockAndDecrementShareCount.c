/*
 * XREFs of MiLockAndDecrementShareCount @ 0x1402F5064
 * Callers:
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiCreateSharedZeroPages @ 0x1402B7DE0 (MiCreateSharedZeroPages.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiReleaseInPageRefs @ 0x1403589BC (MiReleaseInPageRefs.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MiDecommitLargePoolVa @ 0x14036E6A0 (MiDecommitLargePoolVa.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmFreeIndependentPages @ 0x1407515D0 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14078778C (MiMarkBootGuardPage.c)
 *     MiCaptureSparsePages @ 0x1408D4F64 (MiCaptureSparsePages.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(__int64 a1, char a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v4 = (unsigned __int8)MiLockPageInline(a1);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  v5 = MiDecrementShareCount(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
