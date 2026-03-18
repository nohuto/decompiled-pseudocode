/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x1409C2F50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1409BF5A8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CC0 (ViIsDriverSuspectForVerifier.c)
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
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v4;
}
