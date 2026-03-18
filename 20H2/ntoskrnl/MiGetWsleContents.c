/*
 * XREFs of MiGetWsleContents @ 0x1402D3CE0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiTerminateWsle @ 0x1402BA000 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x1402D3A8C (MiConvertAndFlushWsleVas.c)
 *     MiGetPfnProtection @ 0x1402D3C28 (MiGetPfnProtection.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiCrcStillIntact @ 0x1403678C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiSetWsleProtection @ 0x14036AF70 (MiSetWsleProtection.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MiMakeDriverPageStayResident @ 0x14052C354 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MiProcessVmAccessedInfo @ 0x140539E30 (MiProcessVmAccessedInfo.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
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
