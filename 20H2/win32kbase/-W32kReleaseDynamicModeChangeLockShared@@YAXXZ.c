/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C014BC80
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C014BCE0 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
