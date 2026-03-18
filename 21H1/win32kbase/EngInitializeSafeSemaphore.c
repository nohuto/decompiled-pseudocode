/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1C0154CB0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
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
