/*
 * XREFs of MiAdvanceFaultList @ 0x14028E148
 * Callers:
 *     MiDispatchFault @ 0x14020EF00 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x140210120 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x14023DDD0 (MiBuildMdlForMappedFileFault.c)
 *     MiCreateSharedZeroPages @ 0x140241770 (MiCreateSharedZeroPages.c)
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x14028DF24 (MiComputeFaultCluster.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
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
