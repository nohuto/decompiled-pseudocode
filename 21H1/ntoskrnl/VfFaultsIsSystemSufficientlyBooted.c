/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x1409D98F8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D97BC (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x1409E3A90 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3B70 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140D473EC;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
