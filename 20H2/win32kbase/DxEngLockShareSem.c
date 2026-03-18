/*
 * XREFs of DxEngLockShareSem @ 0x1C014BCA0
 * Callers:
 *     ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C014BB90 (-W32kAcquireDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DxEngLockShareSem(__int64 a1, __int64 a2, int a3)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  return 1LL;
}
