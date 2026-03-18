/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1C014C510
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C005E4B4 (GreCreateSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  BOOL v7; // ebx
  HSEMAPHORE SemaphoreInternal; // rax

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  v7 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = (HSEMAPHORE)GreCreateSemaphoreInternal(1), (pssem->hsem = SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v7 = 1;
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
  return v7;
}
