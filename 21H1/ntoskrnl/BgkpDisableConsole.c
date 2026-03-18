/*
 * XREFs of BgkpDisableConsole @ 0x1404F9F2C
 * Callers:
 *     BgkDestroy @ 0x1409F1B08 (BgkDestroy.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C11228);
  ExRundownCompleted(&stru_140C11228);
}
