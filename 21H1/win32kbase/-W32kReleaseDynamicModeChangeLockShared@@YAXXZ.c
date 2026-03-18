/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C0154420
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C0154480 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
