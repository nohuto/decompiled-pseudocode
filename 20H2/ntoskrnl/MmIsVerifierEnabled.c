/*
 * XREFs of MmIsVerifierEnabled @ 0x1409C5610
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x14099BFB0 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140331B20 (VfIsVerifierEnabled.c)
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
