/*
 * XREFs of BgkpDisableConsole @ 0x1404FDE0C
 * Callers:
 *     BgkDestroy @ 0x1409F7B08 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C11258);
  ExRundownCompleted(&stru_140C11258);
}
