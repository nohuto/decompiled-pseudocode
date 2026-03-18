/*
 * XREFs of GreLockVisRgnShared @ 0x1C00B9FE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0024CC0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnShared(__int64 a1, __int64 a2, int a3)
{
  int v3; // r8d
  int v4; // r8d

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( ghsemGreLock )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemGreLock", (int)ghsemGreLock, v3);
  if ( ghsemDCVisRgn )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
  return EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v4);
}
