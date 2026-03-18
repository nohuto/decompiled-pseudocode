/*
 * XREFs of MiGetSessionIdForVa @ 0x1402CD940
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiFaultGetFileExtents @ 0x1405A7158 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v3; // rax

  if ( a2 < 0xFFFF800000000000uLL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v3 = Process[1].Affinity.StaticBitmap[25];
    if ( v3 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      return *(unsigned int *)(v3 + 8);
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)MiGetSystemRegionType(a2) != 1 )
    return 0xFFFFFFFFLL;
  return MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
