/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x1404D2870
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1405BD280 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
