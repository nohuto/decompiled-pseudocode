/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140250E00
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     MiReleaseInPageRefs @ 0x140328D28 (MiReleaseInPageRefs.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MiDecommitLargePoolVa @ 0x1403705F0 (MiDecommitLargePoolVa.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14065EABC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 *     MiCaptureSparsePages @ 0x1408DADA4 (MiCaptureSparsePages.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(__int64 a1, char a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v5 = (unsigned __int8)MiLockPageInline(a1);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  v8 = MiDecrementShareCount(a1, v4, v6, v7);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v8;
}
