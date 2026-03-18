/*
 * XREFs of VfFreePoolNotification @ 0x1409DD004
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402FAD8C (ExpFreePoolChecks.c)
 *     VerifierExFreePool @ 0x1409D2120 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D21B0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140323280 (VfIsVerifierEnabled.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D369C (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1409DADC0 (VfDeadlockDeleteMemoryRange.c)
 *     ViPoolLogStackTrace @ 0x1409DD328 (ViPoolLogStackTrace.c)
 */

char __fastcall VfFreePoolNotification(unsigned __int64 a1, __int64 a2)
{
  int IsVerifierEnabled; // eax

  LOBYTE(IsVerifierEnabled) = VfRuleClasses;
  if ( a2 )
  {
    if ( (VfRuleClasses & 8) != 0 && VfPoolTraces )
      ((void (*)(void))ViPoolLogStackTrace)();
    IsVerifierEnabled = VfIsVerifierEnabled();
    if ( IsVerifierEnabled )
    {
      if ( (VfRuleClasses & 0xFFAFFFFF) != 0
        || (LOBYTE(IsVerifierEnabled) = BYTE4(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0)
        || (VfRuleClasses & 0x400000000LL) != 0 )
      {
        VfDeadlockDeleteMemoryRange(a1, a2);
        LOBYTE(IsVerifierEnabled) = VfRemLockDeleteMemoryRange(a1, a2);
      }
    }
  }
  else if ( (VfRuleClasses & 8) != 0 )
  {
    if ( (MmVerifierData & 0x400000) == 0 || (LOBYTE(IsVerifierEnabled) = VfFlightOptions, (VfFlightOptions & 9) != 0) )
    {
      if ( VfPoolTraces )
        LOBYTE(IsVerifierEnabled) = ViPoolLogStackTrace(a1, 16LL);
    }
  }
  return IsVerifierEnabled;
}
