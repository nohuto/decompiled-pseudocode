/*
 * XREFs of MiGetWsleContents @ 0x14025ECE0
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x14025EA8C (MiConvertAndFlushWsleVas.c)
 *     MiGetPfnProtection @ 0x14025EC28 (MiGetPfnProtection.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiTerminateWsle @ 0x140341B00 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiSetWsleProtection @ 0x14036B3D0 (MiSetWsleProtection.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MiMakeDriverPageStayResident @ 0x14052E094 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MiProcessVmAccessedInfo @ 0x14053BB70 (MiProcessVmAccessedInfo.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
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
