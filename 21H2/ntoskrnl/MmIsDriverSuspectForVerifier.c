/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x140A816C0
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ViIsDriverSuspectForVerifier @ 0x140A821E0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v4; // ebx

  if ( !(unsigned int)VfIsVerifierEnabled() )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 || (VfRuleClasses & 0x400000) != 0 )
    return 0LL;
  VfDriverLock();
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v2);
  ViDriversLoadLockOwner = 0LL;
  v4 = IsDriverSuspectForVerifier;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v4;
}
