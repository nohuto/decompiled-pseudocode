/*
 * XREFs of MiAdvanceFaultList @ 0x1403179F8
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x140271440 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x14029C170 (MiBuildMdlForMappedFileFault.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiComputeFaultCluster @ 0x1403177D4 (MiComputeFaultCluster.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053E634 (MiCopyImageExtentContents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = a1[3];
  result = 2 * v2;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 16 * v2 + 8);
  v6 = *(_DWORD *)(v4 + 16 * v2) & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v6 + v5 + 4095) >> 12 )
  {
    a1[4] = 0LL;
    v7 = v2 + 1;
    v8 = a1[2];
    a1[3] = v7;
    if ( v7 < v8 )
    {
      result = 2 * v7;
      if ( !*(_QWORD *)(v4 + 16 * v7 + 8) )
        v7 = v8;
      a1[3] = v7;
    }
  }
  return result;
}
