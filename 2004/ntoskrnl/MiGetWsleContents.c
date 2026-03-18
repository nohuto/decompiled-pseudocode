/*
 * XREFs of MiGetWsleContents @ 0x140256CF0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiGetPfnProtection @ 0x140253B70 (MiGetPfnProtection.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiConvertAndFlushWsleVas @ 0x140342ED0 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiCrcStillIntact @ 0x1403658E4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiSetWsleProtection @ 0x140368F90 (MiSetWsleProtection.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiMakeDriverPageStayResident @ 0x140528984 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MiProcessVmAccessedInfo @ 0x140536460 (MiProcessVmAccessedInfo.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v6 = v3 | 0x20;
      v7 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      if ( (v7 & 0x20) == 0 )
        v6 = v3;
      v3 = v6;
      if ( (v7 & 0x42) != 0 )
        v3 = v6 | 0x42;
    }
  }
  result = v3 >> 60;
  LOBYTE(result) = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  return result;
}
