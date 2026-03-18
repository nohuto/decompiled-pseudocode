/*
 * XREFs of BgkpDisableConsole @ 0x1404FA57C
 * Callers:
 *     BgkDestroy @ 0x1409F1B08 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C11238);
  ExRundownCompleted(&stru_140C11238);
}
