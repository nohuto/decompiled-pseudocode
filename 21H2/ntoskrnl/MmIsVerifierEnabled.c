/*
 * XREFs of MmIsVerifierEnabled @ 0x140A7BDF0
 * Callers:
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  NTSTATUS v1; // ebx

  v1 = 0;
  if ( VerifierFlags )
  {
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    {
      if ( (unsigned int)VfIsVerifierEnabled()
        && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (VfRuleClasses & 0x200000000LL) != 0)
        || (VfRuleClasses & 0x10) != 0 && (VfRuleClasses & 0x400000) == 0 )
      {
        *VerifierFlags = MmVerifierData;
        return v1;
      }
      *VerifierFlags = 0;
    }
    else
    {
      *VerifierFlags = 0;
    }
    return -1073741637;
  }
  return -1073741637;
}
