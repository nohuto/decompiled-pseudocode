/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C014E0D0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C014E130 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
