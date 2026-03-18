/*
 * XREFs of MiAdvanceFaultList @ 0x140340BDC
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x14020F5F0 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x140225160 (MiCreateSharedZeroPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402272A0 (MiBuildMdlForMappedFileFault.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiComputeFaultCluster @ 0x1403409B8 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
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
