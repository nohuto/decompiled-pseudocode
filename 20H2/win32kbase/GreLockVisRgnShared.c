/*
 * XREFs of GreLockVisRgnShared @ 0x1C004D040
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 GreLockVisRgnShared()
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemGreLock )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemDCVisRgn )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
  return EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
}
