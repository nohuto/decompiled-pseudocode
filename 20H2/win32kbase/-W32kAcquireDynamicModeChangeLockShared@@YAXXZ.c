/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C014BB90
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C014BCA0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
