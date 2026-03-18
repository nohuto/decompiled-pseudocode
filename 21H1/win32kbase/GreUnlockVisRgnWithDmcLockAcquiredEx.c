/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C01551C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1, __int64 a2, int a3)
{
  int v3; // r8d
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, a3);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion(v4);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v3);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
