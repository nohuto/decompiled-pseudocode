/*
 * XREFs of BgkpDisableConsole @ 0x1404FF9AC
 * Callers:
 *     BgkDestroy @ 0x1409F4B08 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x140251F40 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C113C8);
  ExRundownCompleted(&stru_140C113C8);
}
