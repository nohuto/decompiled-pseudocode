/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x1409C2F60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1409BF5B8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CD0 (ViIsDriverSuspectForVerifier.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  VfDriverLock();
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v1);
  ViDriversLoadLockOwner = 0LL;
  v4 = IsDriverSuspectForVerifier;
  KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
  return v4;
}
