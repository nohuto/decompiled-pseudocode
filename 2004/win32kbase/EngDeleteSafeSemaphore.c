/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C014E7A0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C00A55E0 (GreDeleteSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  LONG lCount; // eax

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  lCount = pssem->lCount;
  if ( lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
    lCount = pssem->lCount;
  }
  pssem->lCount = lCount - 1;
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
