/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x1409D9958
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D981C (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x1409E3AF0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3BD0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140D483EC;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
