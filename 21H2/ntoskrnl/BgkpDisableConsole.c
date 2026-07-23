/*
 * XREFs of BgkpDisableConsole @ 0x1404FF92C
 * Callers:
 *     BgkDestroy @ 0x1409F5B08 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C113A8);
  ExRundownCompleted(&stru_140C113A8);
}
