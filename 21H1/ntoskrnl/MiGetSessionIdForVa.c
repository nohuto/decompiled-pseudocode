/*
 * XREFs of MiGetSessionIdForVa @ 0x1402B6250
 * Callers:
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}
