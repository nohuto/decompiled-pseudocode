/*
 * XREFs of MmIsVerifierEnabled @ 0x1409BF5F0
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140994810 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140323280 (VfIsVerifierEnabled.c)
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  if ( !VerifierFlags )
    return -1073741637;
  if ( !ViVerifierDriverAddedThunkListHead
    || !(unsigned int)VfIsVerifierEnabled()
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    *VerifierFlags = 0;
    return -1073741637;
  }
  *VerifierFlags = MmVerifierData;
  return 0;
}
