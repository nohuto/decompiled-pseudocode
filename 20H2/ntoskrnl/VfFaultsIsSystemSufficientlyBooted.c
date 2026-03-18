/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x1409DF978
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DF83C (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x1409E9B10 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140D4A3EC;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
