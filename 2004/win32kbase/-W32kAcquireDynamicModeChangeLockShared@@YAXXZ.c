/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C014DFE0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C014E0F0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
