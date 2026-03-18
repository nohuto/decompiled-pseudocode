/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x1404CD210
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1405B7380 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
