/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C0154330
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C0154440 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
