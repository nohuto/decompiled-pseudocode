/*
 * XREFs of MiGetWsleContents @ 0x1402AFD20
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiTerminateWsle @ 0x14028D950 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiGetPfnProtection @ 0x1402ACBA0 (MiGetPfnProtection.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiConvertAndFlushWsleVas @ 0x140305480 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiSetWsleProtection @ 0x1403685D0 (MiSetWsleProtection.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiMakeDriverPageStayResident @ 0x140528334 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiProcessVmAccessedInfo @ 0x140535E10 (MiProcessVmAccessedInfo.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
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
