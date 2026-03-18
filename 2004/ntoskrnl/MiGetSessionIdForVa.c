/*
 * XREFs of MiGetSessionIdForVa @ 0x14025D220
 * Callers:
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}
