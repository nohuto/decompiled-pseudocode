/*
 * XREFs of BgkpDisableConsole @ 0x14055161C
 * Callers:
 *     BgkDestroy @ 0x140AAE8BC (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C0B8C8);
  ExRundownCompleted(&stru_140C0B8C8);
}
